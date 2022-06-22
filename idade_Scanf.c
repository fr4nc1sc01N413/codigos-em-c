#include<stdio.h>

int main(void){
	float a, b, result, operacao;
 
	printf("qual operacao voce quer :\n");
	printf("1 - somar \n");
	printf("2 - subtrair \n");
	printf("3 - multiplicar \n");
	printf("4 - dividir \n");
 	scanf("%f", &operacao);
	
	printf("digite um numero : \n");
	scanf("%f", &a);

	printf("digite outro : \n");
	scanf("%f", &b);
	
	if(operacao == 1){

		result=a+b;
		printf("a soma e : %.2f.\n", result);

     		}else if(operacao == 2){

				result=a-b;
				printf("a subtracao e : %.2f.\n", result);
	
      			  }else if(operacao == 3){
	
        				 result=a*b;
	  	    			  printf("a multiplicacao e : %.2f.\n ", result);
		
     						  }else if(operacao == 4){
	
	 	   					     result=a/b;
	  						      printf("a divisao : %.2f.\n");
			
	
	
	
     }






}
