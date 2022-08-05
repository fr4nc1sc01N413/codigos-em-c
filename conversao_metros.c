#include <stdio.h>

int main(int argc, char *argv[]) {
        
    float km,m,c,r;
    
	printf("Qual o valor que deseja em METROS?\n");
	scanf("%f", &m);
	
	km = m/1000;
	c = m/100;
   
   	printf("Em quilometros e: %.2f , em centimetros e: %.2f", km, c);
return 0;
};
