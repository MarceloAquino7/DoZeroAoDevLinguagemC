#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int idade = 20;
	
	printf("O valor da variavel idade e: %i", idade);
	
	int idadeDoMarcelo = idade;
	
	printf("\nO valor da variavel idadeDoMarcelo e: %i", idadeDoMarcelo);
	
	int *ptrIdade = &idade;
	
	printf("\nO endereco de memoria que o ponteiro ptrIdade aponta e: %i", ptrIdade);
	printf("\nO valor que o ponteiro ptrIdade aponta e: %i", *ptrIdade);
	
	idade = 30;
	
	printf("\nO novo valor da variavel idade e: %i", idade);
	
	printf("\nO valor da variavel idadeDoMarcelo e: %i", idadeDoMarcelo);
	
	printf("\nO valor que o ponteiro ptrIdade aponta e: %i", *ptrIdade);
	
	/*
		|     Espaço de Memoria     |
		| Endereço | Nome           |
		| 12738712 | idade          | => 30
		| 12334312 | idadeDoMarcelo | => 20
		| 13342343 | ptrIdade       | => 12738712
		| 34565565 | ptrIdadeNova   | => 13342343
	
	
	*/
	
	return 0;
}
