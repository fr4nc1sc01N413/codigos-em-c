  	#include <stdio.h>

int main(void){
	float c, f, k;
	int a;

 	printf("Digite a unidade de temperatura que deseja\n");
 	printf("(1)celsius\n");
 	printf("(2)fahrenheit\n");
 	printf("(3)kelvin\n");
	scanf("%d", &a);
		
		if(a == 1) {
					printf("Digite o valor para celsius:\n");
					scanf("%f", &c);
				
					f = (c * 1.8) + 32;
					C = 
					printf("O valor %.1f em fahrenheit e %.1f\n", c, f );
			}
		else if(a == 2) {
			
						printf("Digite o valor para fahrenheit:\n");
						scanf("%f", &f);
							
						c = (f - 32) /1.8;
						printf("O valor %.1f em celsius e %.1f\n", f, c);	
			}
		else if(a == 3) {
						printf("Digite o valor para kelvin:\n");
						scanf("%f", &k);
						
						 c = (k - 273.15);
						 f = (k - 273.15) * 9/5 + 32;
							}
		else if(a >=4 && a <=100000000000) {
								
								printf("Esta opcao esta indisponivel, tente novamente\n");
								
							}
			
 return 0;
}
