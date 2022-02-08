#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void MenuSemFoco();
void CalculoSemFoco4();
void CalculoSemFoco5();
void CalculoSemFoco6();
void CalculoSemFoco7();
void CalculoSemFoco8();
void MenuComFoco();
void CalculoComFoco4(int mt, int mt4);
void CalculoComFoco5(int mt, int mt5);
void CalculoComFoco6(int mt, int mt6);
void CalculoComFoco7(int mt, int mt7);
void CalculoComFoco8(int mt, int mt8);

int main(int argc, char *argv[])
{
	int opi;
	do
	{
		system("cls");
		printf("\t\tOpcao de Refino\n\n");
		printf("1 - Refino sem foco\n");
		printf("2 - Refino com foco\n");
		printf("3 - Sair\n");
		scanf("%d", &opi);

		switch(opi)
		{
		case 1:
			system("cls");
			MenuSemFoco();
			break;
		case 2:
			system("cls");
			MenuComFoco();
			break;
		case 3:
			break;
		default:
			printf("Opcao Invalida!\n");
		}
	}
	while(opi != 3);
	return 0;
}

void MenuSemFoco()
{
	int op;
	do
	{
		system("cls");
		printf("\t\tMenu Sem Foco \n\n");
		printf("1 - Recurso T4\n");
		printf("2 - Recurso T5\n");
		printf("3 - Recurso T6\n");
		printf("4 - Recurso T7\n");
		printf("5 - Recurso T8\n");
		printf("6 - Voltar ao Menu Anterior\n");
		scanf("%d", &op);

		switch(op)
		{
		case 1:
			system("cls");
			CalculoSemFoco4();
			system("pause");
			break;
		case 2:
			system("cls");
			CalculoSemFoco5();
			system("pause");
			break;
		case 3:
			system("cls");
			CalculoSemFoco6();
			system("pause");
			break;
		case 4:
			system("cls");
			CalculoSemFoco7();
			system("pause");
			break;
		case 5:
			system("cls");
			CalculoSemFoco8();
			system("pause");
			break;
		case 6:
			break;
		default:
			printf("Opcao Invalida!\n");
		}
	}
	while(op != 6);
}
void CalculoSemFoco4()
{
	int recurso, retorno, total = 0, encantado, valorItem, taxa, prata;

	printf("Digite a quantidade a ser refinada!\n");
	scanf("%d", &recurso);
	printf("Digite o valor da taxa!\n");
	scanf("%d", &taxa);
	printf("Digite o nivel do encantamento!\n");
	scanf("%d", &encantado);

	do
	{
		switch (encantado)
		{

		case 0:
			valorItem = 14;
			break;
		case 1:
			valorItem = 30;
			break;
		case 2:
			valorItem = 54;
			break;
		case 3:
			valorItem = 102;
			break;
		default:
			printf("Esse nivel de encantamento nao existe!!!");

		}
	}
	while(0 < encantado || encantado > 3);


	total = recurso;
	retorno = recurso * 0.35;

	while(retorno >= 3)
	{
		total = total + retorno;
		retorno = retorno * 0.35;
	}
	prata = total * valorItem * taxa * 5 / 100;
	system("cls");
	
	printf("Recurso feito: %d\n", total);
	printf("Prata gasta: %d\n\n", prata);
}

void CalculoSemFoco5()
{
	int recurso, retorno, total = 0, encantado, valorItem, taxa, prata;

	printf("Digite a quantidade a ser refinada!\n");
	scanf("%d", &recurso);
	printf("Digite o valor da taxa!\n");
	scanf("%d", &taxa);
	printf("Digite o nivel do encantamento!\n");
	scanf("%d", &encantado);

	do
	{
		switch (encantado)
		{

		case 0:
			valorItem = 30;
			break;
		case 1:
			valorItem = 61;
			break;
		case 2:
			valorItem = 118;
			break;
		case 3:
			valorItem = 229;
			break;
		default:
			printf("Esse nivel de encantamento nao existe!!!");

		}
	}
	while(0 < encantado || encantado > 3);

	total = recurso;
	retorno = recurso * 0.35;

	while(retorno >= 3)
	{
		total = total + retorno;
		retorno = retorno * 0.35;
	}
	prata = total * valorItem * taxa * 5 / 100;
	system("cls");

	printf("Recurso feito: %d\n", total);
	printf("Prata gasta: %d\n\n", prata);
}

void CalculoSemFoco6()
{
	int recurso, retorno, total = 0, encantado, valorItem, taxa, prata;

	printf("Digite a quantidade a ser refinada!\n");
	scanf("%d", &recurso);
	printf("Digite o valor da taxa!\n");
	scanf("%d", &taxa);
	printf("Digite o nivel do encantamento!\n");
	scanf("%d", &encantado);

	do
	{
		switch (encantado)
		{

		case 0:
			valorItem = 62;
			break;
		case 1:
			valorItem = 125;
			break;
		case 2:
			valorItem = 246;
			break;
		case 3:
			valorItem = 485;
			break;
		default:
			printf("Esse nivel de encantamento nao existe!!!");

		}
	}
	while(0 < encantado || encantado > 3);
	
	total = recurso;
	retorno = recurso * 0.35;

	while(retorno >= 4)
	{
		total = total + retorno;
		retorno = retorno * 0.35;
	}
	prata = total * valorItem * taxa * 5 / 100;
	system("cls");

	printf("Recurso feito: %d\n", total);
	printf("Prata gasta: %d\n\n", prata);
}

void CalculoSemFoco7()
{
	int recurso, retorno, total = 0, encantado, valorItem, taxa, prata;

	printf("Digite a quantidade a ser refinada!\n");
	scanf("%d", &recurso);
	printf("Digite o valor da taxa!\n");
	scanf("%d", &taxa);
	printf("Digite o nivel do encantamento!\n");
	scanf("%d", &encantado);

	do
	{
		switch (encantado)
		{

		case 0:
			valorItem = 126;
			break;
		case 1:
			valorItem = 253;
			break;
		case 2:
			valorItem = 502;
			break;
		case 3:
			valorItem = 997;
			break;
		default:
			printf("Esse nivel de encantamento nao existe!!!");

		}
	}
	while(0 < encantado || encantado > 3);
	total = recurso;
	retorno = recurso * 0.35;

	while(retorno >= 5)
	{
		total = total + retorno;
		retorno = retorno * 0.35;
	}
	prata = total * valorItem * taxa * 5 / 100;
	system("cls");

	printf("Recurso feito: %d\n", total);
	printf("Prata gasta: %d\n\n", prata);
}

void CalculoSemFoco8()
{
	int recurso, retorno, total = 0, encantado, valorItem, taxa, prata;

	printf("Digite a quantidade a ser refinada!\n");
	scanf("%d", &recurso);
	printf("Digite o valor da taxa!\n");
	scanf("%d", &taxa);
	printf("Digite o nivel do encantamento!\n");
	scanf("%d", &encantado);

	do
	{
		switch (encantado)
		{

		case 0:
			valorItem = 254;
			break;
		case 1:
			valorItem = 509;
			break;
		case 2:
			valorItem = 1014;
			break;
		case 3:
			valorItem = 2021;
			break;
		default:
			printf("Esse nivel de encantamento nao existe!!!");

		}
	}
	while(0 < encantado || encantado > 3);
	total = recurso;
	retorno = recurso * 0.35;

	while(retorno >= 5)
	{
		total = total + retorno;
		retorno = retorno * 0.35;
	}
	prata = total * valorItem * taxa * 5 / 100;
	system("cls");

	printf("Recurso feito: %d\n", total);
	printf("Prata gasta: %d\n\n", prata);
}

void MenuComFoco()
{
	int op, maestriaT4, maestriaT5, maestriaT6, maestriaT7, maestriaT8, maestriaTotal;

	printf("Digite o nivel da maestria T4\n");
	scanf("%d", &maestriaT4);
	printf("Digite o nivel da maestria T5\n");
	scanf("%d", &maestriaT5);
	printf("Digite o nivel da maestria T6\n");
	scanf("%d", &maestriaT6);
	printf("Digite o nivel da maestria T7\n");
	scanf("%d", &maestriaT7);
	printf("Digite o nivel da maestria T8\n");
	scanf("%d", &maestriaT8);

	maestriaTotal = maestriaT4 + maestriaT5 + maestriaT6 + maestriaT7 + maestriaT8;

	do
	{
		system("cls");
		printf("\t\tMenu Com Foco\n\n");
		printf("1 - Recurso T4\n");
		printf("2 - Recurso T5\n");
		printf("3 - Recurso T6\n");
		printf("4 - Recurso T7\n");
		printf("5 - Recurso T8\n");
		printf("6 - Voltar ao Menu Anterior\n");
		scanf("%d", &op);

		switch(op)
		{
		case 1:
			system("cls");
			CalculoComFoco4(maestriaTotal, maestriaT4);
			system("pause");
			break;
		case 2:
			system("cls");
			CalculoComFoco5(maestriaTotal, maestriaT5);
			system("pause");
			break;
		case 3:
			system("cls");
			CalculoComFoco6(maestriaTotal, maestriaT6);
			system("pause");
			break;
		case 4:
			system("cls");
			CalculoComFoco7(maestriaTotal, maestriaT7);
			system("pause");
			break;
		case 5:
			system("cls");
			CalculoComFoco8(maestriaTotal, maestriaT8);
			system("pause");
			break;
		case 6:
			break;
		default:
			printf("Opcao Invalida!\n");
		}
	}
	while(op != 6);
}

void CalculoComFoco4(int mt, int mt4)
{
	int recurso, retorno, total = 0,  focobase, focototal, encantado, valorItem, taxa, prata;

	printf("Digite a quantidade a ser refinada!\n");
	scanf("%d", &recurso);
	printf("Digite o valor da taxa!\n");
	scanf("%d", &taxa);
	printf("Digite o nivel do encantamento!\n");
	scanf("%d", &encantado);

	do
	{
		switch (encantado)
		{

		case 0:
			valorItem = 14;
			focobase = 48;
			break;
		case 1:
			valorItem = 30;
			focobase = 89;
			break;
		case 2:
			valorItem = 54;
			focobase = 143;
			break;
		case 3:
			valorItem = 102;
			focobase = 239;
			break;
		default:
			printf("Esse nivel de encantamento nao existe!!!\n");

		}
	}
	while(0 < encantado || encantado > 3);

	total = recurso;
	retorno = recurso * 0.53;

	while(retorno >= 2)
	{
		total = total + retorno;
		retorno = retorno * 0.53;
	}

	focototal = total * (focobase * pow(0.5,(mt * 30 + mt4 * 250) / 10000));
	prata = total * valorItem * taxa * 5 / 100;
	
	system("cls");
	
	printf("Recurso feito: %d\n", total);
	printf("Foco total Utilizado: %d\n", focototal);
	printf("Prata gasta: %d\n\n", prata);
}

void CalculoComFoco5(int mt, int mt5)
{
	int recurso, retorno, total = 0,  focobase, focototal, encantado, valorItem, taxa, prata;

	printf("Digite a quantidade a ser refinada!\n");
	scanf("%d", &recurso);
	printf("Digite o valor da taxa!\n");
	scanf("%d", &taxa);
	printf("Digite o nivel do encantamento!\n");
	scanf("%d", &encantado);

	do
	{
		switch (encantado)
		{

		case 0:
			valorItem = 30;
			focobase = 89;
			break;
		case 1:
			valorItem = 61;
			focobase = 160;
			break;
		case 2:
			valorItem = 118;
			focobase = 169;
			break;
		case 3:
			valorItem = 229;
			focobase = 461;
			break;
		default:
			printf("Esse nivel de encantamento nao existe!!!\n");

		}
	}
	while(0 < encantado || encantado > 3);

	total = recurso;
	retorno = recurso * 0.53;

	while(retorno >= 3)
	{
		total = total + retorno;
		retorno = retorno * 0.53;
	}

	focototal = total * (focobase * pow(0.5, (mt * 30 + mt5 * 250) / 10000));
	prata = total * valorItem * taxa * 5 / 100;
	
	system("cls");
	
	printf("Recurso feito: %d\n", total);
	printf("Foco total Utilizado: %d\n", focototal);
	printf("Prata gasta: %d\n\n", prata);
}

void CalculoComFoco6(int mt, int mt6)
{
	int recurso, retorno, total = 0, focototal, focobase, encantado, valorItem, taxa, prata;

	printf("Digite a quantidade a ser refinada!\n");
	scanf("%d", &recurso);
	printf("Digite o valor da taxa!\n");
	scanf("%d", &taxa);
	printf("Digite o nivel do encantamento!\n");
	scanf("%d", &encantado);

	do
	{
		switch (encantado)
		{

		case 0:
			valorItem = 62;
			focobase = 160;
			break;
		case 1:
			valorItem = 125;
			focobase = 284;
			break;
		case 2:
			valorItem = 246;
			focobase = 487;
			break;
		case 3:
			valorItem = 485;
			focobase = 844;
			break;
		default:
			printf("Esse nivel de encantamento nao existe!!!\n");

		}
	}
	while(0 < encantado || encantado > 3);


	total = recurso;
	retorno = recurso * 0.53;

	while(retorno >= 3)
	{
		total = total + retorno;
		retorno = retorno * 0.53;
	}

	focototal = total * (focobase * pow(0.5, (mt * 30 + mt6 * 250) / 10000));
	prata = total * valorItem * taxa * 5 / 100;
	
	system("cls");
	
	printf("Recurso feito: %d\n", total);
	printf("Foco total Utilizado: %d\n", focototal);
	printf("Prata gasta: %d\n\n", prata);
}

void CalculoComFoco7(int mt, int mt7)
{
	int recurso, retorno, total = 0, focototal, focobase, encantado, valorItem, taxa, prata;

	printf("Digite a quantidade a ser refinada!\n");
	scanf("%d", &recurso);
	printf("Digite o valor da taxa!\n");
	scanf("%d", &taxa);
	printf("Digite o nivel do encantamento!\n");
	scanf("%d", &encantado);

	do
	{
		switch (encantado)
		{

		case 0:
			valorItem = 126;
			focobase = 284;
			break;
		case 1:
			valorItem = 253;
			focobase = 500;
			break;
		case 2:
			valorItem = 502;
			focobase = 866;
			break;
		case 3:
			valorItem = 997;
			focobase = 1508;
			break;
		default:
			printf("Esse nivel de encantamento nao existe!!!\n");

		}
	}
	while(0 < encantado || encantado > 3);


	total = recurso;
	retorno = recurso * 0.53;

	while(retorno >= 3)
	{
		total = total + retorno;
		retorno = retorno * 0.53;
	}

	focototal = total * (focobase * pow(0.5, (mt * 30 + mt7 * 250) / 10000));
	prata = total * valorItem * taxa * 5 / 100;

	system("cls");
	
	printf("Recurso feito: %d\n", total);
	printf("Foco total Utilizado: %d\n", focototal);
	printf("Prata gasta: %d\n\n", prata);
}

void CalculoComFoco8(int mt, int mt8)
{
	int recurso, retorno, total = 0, focototal, focobase, encantado, valorItem, taxa, prata;

	printf("Digite a quantidade a ser refinada!\n");
	scanf("%d", &recurso);
	printf("Digite o valor da taxa!\n");
	scanf("%d", &taxa);
	printf("Digite o nivel do encantamento!\n");
	scanf("%d", &encantado);

	do
	{
		switch (encantado)
		{

		case 0:
			valorItem = 254;
			focobase = 500;
			break;
		case 1:
			valorItem = 509;
			focobase = 877;
			break;
		case 2:
			valorItem = 1014;
			focobase = 1527;
			break;
		case 3:
			valorItem = 2021;
			focobase = 2666;
			break;
		default:
			printf("Esse nivel de encantamento nao existe!!!\n");

		}
	}
	while(0 < encantado || encantado > 3);


	total = recurso;
	retorno = recurso * 0.53;

	while(retorno >= 3)
	{
		total = total + retorno;
		retorno = retorno * 0.53;
	}

	focototal = total * (focobase * pow(0.5, (mt * 30 + mt8 * 250) / 10000));
	prata = total * valorItem * taxa * 5 / 100;
	
	system("cls");
	
	printf("Recurso feito: %d\n", total);
	printf("Foco total Utilizado: %d\n", focototal);
	printf("Prata gasta: %d\n\n", prata);
}


