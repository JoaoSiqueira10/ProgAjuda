#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[])
{
	float vi, vf, j, ut;
	int op=0;

	do
	{
		printf("1 - Deseja achar o valor final? \n");
		printf("2 - Deseja achar o valor inicial? \n");
		printf("3 - Sair \n");
		scanf(" %d",&op);
		switch(op)
	   {

		  case 1:
 	  	  	  printf("Valor Inicial: \n");
		  	  scanf(" %f", &vi);
	   	  	  printf("Juros: \n");
		  	  scanf(" %f", &j);
	   	  	  printf("Tempo: \n");
		  	  scanf(" %f", &ut);

			   j = j/100;
			   vf = vi * powf((1+j),ut);

	   	   	   printf("Valor final: % f\n", vf);	  
		  	   break;
		     case 2:
			 	 printf("Valor Final: \n");
				 scanf(" %f", &vf);
	   	  	     printf("Juros: \n");
				 scanf(" %f", &j);
				 printf("Tempo: \n");
				 scanf(" %f", &ut);
				 
				 j = j/100;
				      	
				 vi = vf / pow((1 + j),ut);
				 
				  printf("Valor Inicial: % f\n", vi);    	
		     	 break;
			   default:
			   break;
		}
	}while(op<3);
 }
