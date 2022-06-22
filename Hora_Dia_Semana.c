#include <stdio.h>

main(void){
	//Escreva um programa que guarde em uma variável o valor, em Fahrenheit,
//correspondente a 37ºC. Em seguida, o programa deverá exibir esse valor na
//tela.


	int h ,d ,s ,mh ;
	
	printf ("Digite o hora :\n");
	scanf("%d", &h);
	
	mh = h*60;
	d = mh*24;
	s = d*7;

    printf("Sao %.2d, %.2d, %.2d :\n", mh, d, s);
    
    
}
