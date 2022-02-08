//Projeto de Giovana e Joao Guilherme

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
#include <cstring>
#include <stdlib.h>
#include <cstdio>

using namespace std;
FILE *arquivo = NULL;
struct dados
{
	char nome[40];
	char situacao[40];
	int status;
	int cod;
	int idade;
	int quarto;
	
};dados hospital;

void cadastrar();
void listar();
void pesquisar();
void editar();
void excluir();


void cadastrar()
{
 	 system("color 4F");
	 system("cls");
	 
     	cout<<endl<<endl<<endl<<endl<<endl;
        cout<< "\t\t----------------------------------------"<<endl;
        cout<< "\t\t|                                       |"<<endl;
        cout<< "\t\t|         Hospital Santa Rita           |"<<endl;
        cout<< "\t\t|            Cuidando de VOCÊ...        |"<<endl;
        cout<< "\t\t|         E de quem você mais AMA.      |"<<endl;
        cout<< "\t\t|                                       |"<<endl;
        cout<< "\t\t----------------------------------------"<<endl<<endl<<endl;
    
	 
     
     cout << "Entre com o código do paciente: " << endl;
     cin >> hospital.cod;
     cin.ignore();
     cout <<"Digite o nome do paciente: " << endl;
     cin.getline(hospital.nome,40);
     
     do{
     cout << "Entre com a idade do paciente: " << endl;
     cin >> hospital.idade;
     }while(!(hospital.idade>0 && hospital.idade<150));
     
     do{
     cout << "Entre com o quarto do paciente: " << endl;
     cin >> hospital.quarto;
     }while(!(hospital.quarto>0));
 	 
 	 cin.ignore();
     cout << "Entre com a situação do paciente: " << endl;
     cin.getline(hospital.situacao,40);
     
     hospital.status = 1; //ativo
     // fseek (onde, tamanho,modo)
	 fseek(arquivo, sizeof(dados), SEEK_END);
     
     // fwrite( oq, tamanho em bytes, quant, aonde)
     fwrite(&hospital, sizeof(dados), 1, arquivo);
	 
	 cout<<endl;
     cout<<"Cadastrado com sucesso"<<endl;
     cout<<endl;
     system("pause");
}

void listar()
{
	system("color 2F");
	system("cls");
	
	cout<<"Listar pacientes"<<endl;
	
	
	fseek(arquivo, 0, SEEK_SET); 
	fseek(arquivo, sizeof(dados), SEEK_CUR);
	fread(&hospital, sizeof(dados), 1, arquivo); //fread (o que tamanho em bytes, quant, oande)
	
	cout<<endl<<endl<<endl<<endl<<endl;
        cout<< "\t\t----------------------------------------"<<endl;
        cout<< "\t\t|                                       |"<<endl;
        cout<< "\t\t|         Hospital Santa Rita           |"<<endl;
        cout<< "\t\t|            Cuidando de VOCÊ...        |"<<endl;
        cout<< "\t\t|         E de quem você mais AMA.      |"<<endl;
        cout<< "\t\t|                                       |"<<endl;
        cout<< "\t\t----------------------------------------"<<endl<<endl<<endl;
     
     while(!feof(arquivo)){
                            
                  if(hospital.status==1){
                     
                      cout << "  Nome: " << hospital.nome << endl;
                      cout << "  Idade: " << hospital.idade << endl;
                      cout << "  Quarto: " << hospital.quarto << endl;
                      cout << "  Situação: " << hospital.situacao << endl;
                      
                      
                      cout << endl;
                      
                  }
                  
                  fseek(arquivo,sizeof(dados),SEEK_CUR);
                  fread(&hospital,sizeof(dados),1,arquivo);   
     }
     
     system("pause");	
	
}

void pesquisar()
{
	 system("color 6F");
	 system("cls");
     int aux=0, codbusca;

     
     fseek(arquivo,0,SEEK_SET);
     fseek(arquivo,sizeof(dados),SEEK_CUR);
     fread(&hospital,sizeof(dados),1,arquivo);
     
     cout << "Digite o nome do paciente que voce deseja encontrar: " << endl;
     cin >> codbusca;
     
     while(!feof(arquivo))
	 {
	// strcmp(hospital.nome,nomebusca)==0                                                     
             if(hospital.cod==codbusca && hospital.status==1){
                                    
    	
        	 cout<< "\t\t----------------------------------------"<<endl;
        	 cout<< "\t\t|                                       |"<<endl;
        	 cout<< "\t\t|         Hospital Santa Rita           |"<<endl;
        	 cout<< "\t\t|            Cuidando de VOCÊ...        |"<<endl;
        	 cout<< "\t\t|         E de quem você mais AMA.      |"<<endl;
        	 cout<< "\t\t|                                       |"<<endl;
        	 cout<< "\t\t----------------------------------------"<<endl<<endl<<endl;
                       
                     cout << "PACIENTE ENCONTRADO!!! " << endl;
                     cout << "Dados: " << endl;
                     cout << "1 - nome: " << hospital.nome << endl;
                     cout << "2 - idade: " << hospital.idade << endl;
                     cout << "3 - quarto: " << hospital.quarto << endl;
                     cout << "4 - situação: " << hospital.situacao << endl;
                     cout << endl;    
                     
                     aux = 1;
                     break;                 
             }  
             
     		fseek(arquivo,sizeof(dados),SEEK_CUR);
     		fread(&hospital,sizeof(dados),1,arquivo);                  
     
	 }
     
     if(aux==0)
	 {
     			cout<<endl<<endl;
                cout << "PACIENTE NÃO ENCONTRADO!!!" << endl;
     }
     
     system("pause");
}

void editar()
{
	system("color 3F");	
	char nome[40];
	
	cout<< "Editar"<< endl<<endl;
	cin.ignore();
	cout<<"Digite o nome do paciente a ser editado"<<endl;
	cin.getline(nome,40);
	
	
}

void excluir()
{
	system("color 3F");	
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
	system("color 5F");
	arquivo = fopen("dadosprojeto.txt","r+"); // tento ler um arquivo existente
	
	if(arquivo==NULL) // se não existir nenhum arquivo
	{
		arquivo=fopen("dadosprojeto.txt","w+");
	}
	
	char login[30]; //login para entrar no sistema (admin)
	int senha, op; //senha para entrar no sistema (123) e opção desejada 
	
	cout<<"Entre com o Login: "<<endl; 
	cin.getline(login,30);
	cout<<"Digite a Senha: "<<endl;
	cin>>senha;
	
	if(strcmp(login,"admin")==0 && (senha==123))
	{
	
		while(op!=0)
		{
		
		
		system("cls");
     	cout<<endl<<endl<<endl<<endl<<endl;
        cout<< "\t\t----------------------------------------"<<endl;
        cout<< "\t\t|                                       |"<<endl;
        cout<< "\t\t|         Hospital Santa Rita           |"<<endl;
        cout<< "\t\t|            Cuidando de VOCÊ...        |"<<endl;
        cout<< "\t\t|         E de quem você mais AMA.      |"<<endl;
        cout<< "\t\t|                                       |"<<endl;
        cout<< "\t\t----------------------------------------"<<endl<<endl<<endl;
     	cin.ignore();
     	
		cout << "1 - CADASTRAR PACIENTE" << endl;
		cout << "2 - LISTAR PACIENTES" << endl;
		cout << "3 - PESQUISAR PACIENTE" << endl;
		cout << "4 - EDITAR CADASTRO" << endl;
		cout << "5 - EXCLUIR CADASTRO" << endl;
		cout << "ENTRE COM A OPCÃO DESEJADA OU DIGITE O(ZERO) PARA SAIR" << endl;
		cin >> op;
		system("cls");
	
			switch(op)
			{
				case 1:
					cadastrar();
				break;
				case 2:
					listar();
				break;
				case 3:
					pesquisar();
				break;
				case 4:
					excluir();
				case 0:
					exit(0);
				default:	
						cout<<"Opção invalida"<<endl;
				
			}
		}
		
	}

	
	
	
	system("pause");
	return 0;
}

