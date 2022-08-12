 #include<stdio.h>

int main(void){
	//Em um campeonato de futebol da serie A, cada vitória equivale a 3 pontos e cada empate 
    //equivale a 1 ponto. Escreva um programa que leia a quantidade de vitórias, 
	//empates e derrotas de um time. Em seguida, o programa deve informar a 
	//pontuação final do time, e informar se o time está ou não rebaixado.
	
	//Primeiro criar uma opção de time para o usuario.
	
	int times
	
		printf("Bem-Vindo!\n");
		
		//aplicando os times que o usuario seleciona
		
   			printf("Digite o numero que corresponde ao o time da serie A que deseja:\n");
   			printf("(1)Ceara\n");
   			printf("(2)Flamengo\n");
   			printf("(3)Palmeiras\n");
   			printf("(4)Atletico Mineiro\n");
   			printf("(5)Corinthians\n");
   			printf("(6)Athletico Paranaense\n");
   			printf("(7)Fluminense\n");
   			printf("(8)Botafogo\n");
   			printf("(9)Fortaleza\n");
   			printf("(10)juventude\n");
   			printf("(11)Curitiba\n");
   			printf("(12)Avai\n");
   			printf("(13)Atletico Goaniense\n");
   			printf("(14)Cuiaba\n");
   			printf("(15)Goias\n");
   			printf("(16)Internacional\n");
   			printf("(17)Sao-Paulo\n");
   			printf("(18)Bragantino\n");
   			printf("(19)Santos\n");
   			printf("(20)America-Mg\n");
   				scanf("%d", &times);
   				
				if(times = 0 || >= 21){
					
					printf("Indisponivel, escolha novamente\n");
					
				}
				
				if(times = 1){
				
					printf ("Ceara campeao da serie A");
					
				}
				
	return 0;
}
