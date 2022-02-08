#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[])
{
	float t, vi, vf, ut, vj;
	int op;


	do
	{
		printf("1 - Deseja achar o valor final? \n");
		printf("2 - Deseja achar o valor inicial? \n");
		printf("3 - Deseja achar o valor do juros? \n");
		printf("4 - Valor do Juros sem a taxa? \n");
		printf("4 - Sair \n");
		scanf(" %d",&op);
		switch(op)
	   {

		  case 1:
 	  	  	  printf("Valor Inicial: \n");
		  	  scanf(" %f", &vi);
	   	  	  printf("Taxa: \n");
		  	  scanf(" %f", &t);
	   	  	  printf("Tempo: \n");
		  	  scanf(" %f", &ut);
				
				t=t/100;
			   vf = vi * (1+t*ut);

	   	   	   printf("Valor final: % f\n", vf);	  
		  	   break;
		     case 2:
			 	 printf("Valor Final: \n");
				 scanf(" %f", &vf);
	   	  	     printf("Taxa: \n");
				 scanf(" %f", &t);
				 printf("Tempo: \n");
				 scanf(" %f", &ut);
				 
				 t = t/100;
				 vi = vf / (1+t*ut);     	
				 
				 printf("Valor Inicial: % f\n", vi);    	
		     	 break;
		      case 3:
		      	 printf("Valor Inicial: \n");
				 scanf(" %f", &vi);
				 printf("Taxa: \n");
				 scanf(" %f", &t);
				 printf("Tempo: \n");
				 scanf(" %f", &ut);
				 
				 vj = vi * t * ut;
				 
				 printf("Valor Inicial: % f\n", vj);
			   default:
			   	case 4:
			   		printf("Valor inicial: \n");
			   		scanf(" %f", &vi);
			   		printf("Valor Final: \n");
			   		scanf(" %f", &vf);

					vj = vf - vi;   
					     		
			   		printf("Valor do juros: %f",vf);
			   break;
		}
	}while(op<4);
	
	
	
}