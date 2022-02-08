#include <cstdlib>
#include <iostream>
#include <cmath> 
#include <iomanip>    
#include <algorithm>
#include <stdio.h>
#include <locale.h>
#include <windows.h>
using namespace std;

FILE *teste; // Variavel global FILE, usada para manipulação de arquivos

struct cadastro //Montando um Registro
{
	
	char nome[100], situacao[200];
	int quarto, idade, cod, status;	
};

cadastro hospital; // Declarando uma variavel Global do tipo Cadastro (registro)

void cadastrar(){

	int op;
	
	do{
		system ("cls"); // Comando que limpa tudo o que tem na tela
		cout<<"Entre com o nome do paciente.\n";
		cin.getline(hospital.nome,100);
		
		cout<<"Entre com o codigo do paciente.\n";
		cin>>hospital.cod;
		res = busca(hosp.cod);//0 n existe 1 existe
		
		do{
		cout<<"Entre com a idade do paciente.\n";
		cin>>hospital.idade;
		}while(!(hospital.idade<150)); // Critica de entrada de dados
		
		do{
		cout<<"Entre com o quarto do paciente.\n";
		cin>>hospital.quarto;
		}while(!(hospital.quarto>0)); // Critica de entrada de dados
		cin.ignore();
		cout<<"Entre com a situação do paciente.\n";
		cin.getline(hospital.situacao,200);
		
		
		cout<<"\n Paciente cadastrado com sucesso!\n\n";
		
		hospital.status = 1; // 1 = Valido
		
		fseek( teste , sizeof(cadastro) , SEEK_END );	// Posiciona o ponteiro
		fwrite( &hospital , sizeof(cadastro) , 1 , teste ); // Escrevendo no arquivo os dados contidos em Cadastro
		
		cout<<"Deseja continuar cadastrando? (1-Sim  2-Não)\n";
		cin>>op;
		cin.ignore();
		
	}while (op != 2);
	
}

void editar(){

	char nome[100];
	int achou = 0, op, op1, op2;

	do{
		system ("cls");
		cout<<"Entre com o nome.\n";
		cin.getline(nome,100);
		
		fseek( teste , 0 , SEEK_SET ); //colocando o cursor no começo do texto
	
		while (!feof(teste)){ //Comando que varre o algoritmo e verifica todos os cadastros existentes
			
			fseek( teste , sizeof(cadastro) , SEEK_CUR );
			fread( &hospital , sizeof(cadastro) , 1 , teste );
	
			if (strcmp(hospital.nome , nome) == 0 && hospital.status == 1){
			
				cout<<"Nome: "<<hospital.nome<<endl;
				cout<<"Codigo: "<<hospital.cod<<endl;
				cout<<"Idade: "<<hospital.idade<<endl;
				cout<<"Quarto: "<<hospital.quarto<<endl;
				cout<<"Situaçao: "<<hospital.situacao<<endl<<endl;	
				achou = 1;
				
				do{
					cout<<"Deseja editar o cadastro? (1-Sim  2-Não)\n";
					cin>>op1;
				}while( op1 != 1 && op1!=2);
				
				if (op1 == 1){
					
					do{
					
						cout<<"O que deseja editar?\n\n";
						cout<<"1- Nome\n";
						cout<<"2- Codigo\n";
						cout<<"3- Idade\n";
						cout<<"4- Quarto\n";
						cout<<"5- Situação\n\n";
						
						cin>>op2;
						
						if (op2<1 || op2>5)
							cout<<"Opção Inválida\n\n";
							
					}while (op2<1 || op2>5);				
						
					switch (op2){
						
						case 1:
								cout<<"Entre com o novo nome do paciente.\n";
								cin.ignore();
								cin.getline(hospital.nome,100);
								break;
								
								
						case 2:		
								cout<<"Entre com o novo codigo do paciente.\n";
								cin.ignore();
								cin>>hospital.cod;
								break;
								
								
						case 3:
								cout<<"Entre com a nova idade.\n";
								cin>>hospital.idade;
								break;
								
								
						case 4:
								
								cout<<"Entre com o novo quarto.\n"<<endl;
								cin>>hospital.quarto;
								break;
												
						
						case 5:
								cin.ignore(); 
								cout<<"Entre com a nova situação.\n";
								cin.getline(hospital.situacao,100);
								break;
							
					}
					fseek( teste , -sizeof(cadastro) , SEEK_CUR );
					fwrite( &hospital , sizeof(cadastro) , 1 , teste );
				}
			}		
		}		
		if (achou == 0)
			cout<<"Cliente não encontrado!\n";
		
		cout<<"Deseja continuar editando? (1-Sim  2-Não)\n";
		cin>>op;
		cin.ignore();
		
	}while (op != 2);
}

void excluir(){ 

	char nome[100];
	int achou = 0, op, op1;

	do{
		system ("cls");
		cout<<"Entre com o nome.\n";
		cin.getline(nome,100);
		
		fseek( teste , 0 , SEEK_SET ); 
	
		while (!feof(teste)){ //Comando que varre o algoritmo e verifica todos os cadastros realizados
			
			fseek( teste , sizeof(cadastro) , SEEK_CUR );
			fread( &hospital , sizeof(cadastro) , 1 , teste );
	
			if (strcmp(hospital.nome , nome) == 0 && hospital.status == 1){
			
				cout<<"Nome: "<<hospital.nome<<endl;
				cout<<"Codigo: "<<hospital.cod<<endl;
				cout<<"Idade: "<<hospital.idade<<endl;
				cout<<"Quarto: "<<hospital.quarto<<endl;
				cout<<"Situaçao: "<<hospital.situacao<<endl<<endl;		
				achou = 1;
				
				do{
					cout<<"Deseja excluir o cadastro? (1-Sim  2-Não)\n";
					cin>>op1;
				}while( op1 != 1 && op1!=2);
				
				if (op1 == 1){
					hospital.status = 0;	
					fseek( teste , -sizeof(cadastro) , SEEK_CUR );
					fwrite( &hospital , sizeof(cadastro) , 1 , teste );
				}
			}		
		}		
		if (achou == 0)
			cout<<"Cliente não encontrado!\n";
		
		cout<<"Deseja continuar excluindo? (1-Sim  2-Não)\n";
		cin>>op;
		cin.ignore();
		achou=0;		
	}while (op != 2);		
}

void pesquisar(){
	
	char nome[100];
	int achou = 0, op;

	do{
		system ("cls");
		cout<<"Entre com o nome.\n";
		cin.getline(nome,100);
		achou=0;
		
		fseek( teste , 0 , SEEK_SET ); 
	
		while (!feof(teste)){
			
			fseek( teste , sizeof(cadastro) , SEEK_CUR );
			fread( &hospital , sizeof(cadastro) , 1 , teste );
	
			if (strcmp(hospital.nome , nome) == 0 && hospital.status == 1){
			
				cout<<"Nome: "<<hospital.nome<<endl;
				cout<<"Codigo: "<<hospital.cod<<endl;
				cout<<"Idade: "<<hospital.idade<<endl;
				cout<<"Quarto: "<<hospital.quarto<<endl;
				cout<<"Situaçao: "<<hospital.situacao<<endl<<endl;		
				achou = 1;
				break;	
			}			
		}		
		if (achou == 0)
			cout<<"Cliente não encontrado!\n";
			
		do{
			cout<<"Deseja continuar pesquisando? (1-Sim  2-Não)\n";
			cin>>op;	
			if (op<1 || op>2)
				cout<<"Opção inválida\n";
		}while(op<1 || op>2);

		cin.ignore();
		
	}while (op != 2);
		
	cin.ignore();
}

void listar(){
	
	int achou=0;
	
	system ("cls");
	
	fseek( teste , 0 , SEEK_SET ); //Colocando o cursor no inicio do texto para realizar a leitura
	fseek( teste , sizeof(cadastro) , SEEK_CUR );
	fread( &hospital , sizeof(cadastro) , 1 , teste );
	
	while ( !feof(teste) ){ // Varrendo o algoritmo
		
		if (hospital.status == 1){
		
				cout<<"Nome: "<<hospital.nome<<endl;
				cout<<"Codigo: "<<hospital.cod<<endl;
				cout<<"Idade: "<<hospital.idade<<endl;
				cout<<"Quarto: "<<hospital.quarto<<endl;
				cout<<"Situaçao: "<<hospital.situacao<<endl<<endl;	
			achou=1;
		}
		
		fseek( teste , sizeof(cadastro) , SEEK_CUR );
		fread( &hospital , sizeof(cadastro) , 1 , teste );		
	}
	
	if(achou==0)
		cout<<"\nNenhum paciente cadastrado!\n\n";
		
	cout<<"Tecle Enter para sair.\n";	
	cin.ignore();
}




int main() {
	setlocale(LC_ALL, "Portuguese"); //Inclusão de acentos e caracteres especiais para escrita
	system ("COLOR FD");
	
	int op=0, senha;
	char login[10]; //login para entrar no sistema (admin), senha para entrar (123)
	
	teste = fopen("teste.txt","r+"); // Abrindo o arquivo agenda.txt
	
	if (teste == NULL){
		
		teste = fopen("teste.txt","w+"); //Caso o arquivo não exista = (NULL), crio ele com o modo w+
		}
	
	
		cout<<endl<<endl<<endl<<endl;
		cout<< "\t\t----------------------------------------"<<endl;
        cout<< "\t\t|                                       |"<<endl;
        cout<< "\t\t|         Hospital Santa Rita           |"<<endl;
        cout<< "\t\t|            Cuidando de VOCÊ...        |"<<endl;
        cout<< "\t\t|         E de quem você mais AMA.      |"<<endl;
        cout<< "\t\t|                                       |"<<endl;
        cout<< "\t\t----------------------------------------"<<endl<<endl<<endl;
	Sleep (2000);
	
	cout<<"Entre com o Login: "<<endl; 
	cin.getline(login,30);
	cout<<"Digite a Senha: "<<endl;
	cin>>senha;
	
	if(strcmp(login,"admin")==0 && (senha==123))
	while (op != 6){
		system ("cls");
	
		cout<<"\t\t\t*********************************\n";
		cout<<"\t\t\t*            MENU               *\n";
		cout<<"\t\t\t*********************************\n\n";
	
		
		cout<<"1- Cadastrar\n";
		cout<<"2- Editar Cadastro\n";
		cout<<"3- Excluir\n";
		cout<<"4- Pesquisar\n";
		cout<<"5- Listar\n";
		cout<<"6- Sair\n";
		
		do{
			cout<<"Entre com a opção desejada\n";
			cin>>op;	
			if (op<1 || op>6)
				cout<<"Opção inválida\n";
		}while(op<1 || op>6);
		
		cin.ignore();

		switch (op){
			
			case 1:
				cadastrar(); // Chamando a função cadastrar
				break;
			case 2:
				editar(); // Chamando a função editar
				break;
			case 3:
				excluir(); // Chamando a função excluir
				break;
			case 4:
				pesquisar(); // Chamando a função pesquisar
				break;
			case 5:
				listar(); // Chamando a função listar
				break;

		}

	}
	system ("cls");
	
	cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"\t\t\t      ***THE END***\n\n\n\n\n\n\n\n";
	Sleep (2000);	
	
	return 0;
}
