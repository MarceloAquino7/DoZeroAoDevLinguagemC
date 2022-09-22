#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int num = 0;
	
	num = Incrementar(num);
	
	printf("O valor da variavel Num e: %i", num);
	
	return 0;
}

int Incrementar(int num) // 0 1 2 3 4 5 6 7 8 9 10 
{
	if(num == 10) // 10 == 10
		return num;
		
	return Incrementar(num + 1); // 1 2 3 4 5 6 7 8 9 10
}


/*
	Tipos de Retorno
	
	int - Numeros Inteiros
	float - Numeros fracionados
	char - Caracteres
	void - NÃO POSSUI RETORNO
*/

// <tipo de retorno> <nome da funcao>(<tipo do parametro> <nome do parametro>,..)
// {
//     AQUI VAI A LOGICA DA FUNCAO
// }
