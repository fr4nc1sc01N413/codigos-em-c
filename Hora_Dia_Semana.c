#include <stdio.h>

main(void){
	//Escreva um programa que guarde em uma vari�vel o valor, em Fahrenheit,
//correspondente a 37�C. Em seguida, o programa dever� exibir esse valor na
//tela.


	int h ,d ,s ,mh ;
	
	printf ("Digite o hora :\n");
	scanf("%d", &h);
	
	mh = h*60;
	d = mh*24;
	s = d*7;

    printf("Sao %.2d, %.2d, %.2d :\n", mh, d, s);
    
    
}
