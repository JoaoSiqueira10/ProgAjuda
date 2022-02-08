#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(int argc, char *argv[])
{
	float pr1, pr2, pr3, pr4, total, t2, t1;
	
	pr1 = 100*0.5;
	pr2 = pr1*0.5;
	pr3 = pr2*0.15;
	pr4 = pr3*0.2;
	t1 = pr1 + pr2;
	t2 = t1 + pr3;
	total = pr1+pr2+pr3+pr4;
	
	printf("Retorno set: %f\n",pr1);
	printf("Retorno set + espec: %f\n",pr2);
	printf("Retorno set + espec + torta: %f\n",pr3);
	printf("Retorno set + espec + torta + ferramenta: %f\n",pr4);
	printf("Total set+espec: %f\n",t1);
	printf("Total set+espec+torta: %f\n",t2);
	printf("Total da porcentagem de coleta bonus: %f\n", total);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}