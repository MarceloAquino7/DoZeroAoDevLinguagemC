#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
// Este comentario é somente para uma linha
 
int main(int argc, char *argv[]) 
{	
	// tipo nome = valor;
	float notas[4] = {0, 0, 0, 0}; // Começam em 0
	float media = 0;
	
	printf("Bem vindo ao segundo software da turma Do Zero ao Dev");
	printf("\nSoftware de Calculo de Medias Escolares");
	
	int i;
	for(i = 0; i < 4; i++) // for(<declaracoes de variaveis> ; <condicao de parada> ; <condicao de incremento>)
	{
		printf("\nPor favor, digite a %i nota: ", i + 1);
		scanf("%f", &notas[i]);
	}
	
	i = 0;
	while(i < 10)
	{
		printf("\nPor favor, digite a %i nota: ", i + 1);
		scanf("%f", &notas[i]);
		i++;
	};
	
	i = 0;
	do
	{		
		printf("\nPor favor, digite a %i nota: ", i + 1);
		scanf("%f", &notas[i]);
		i++;
	}while(i < 4);
	
    media = (notas[0] + notas[1] + notas[2] + notas[3]) / 4;
	
	printf("\nA media das notas e: %f", media);
	
	
	if(media < 5)
	{
		printf("\nVoce esta de recuperacao!");
	}
	else if(media < 7) // SENAO SE
	{
		printf("\n Voce esta aprovado pelo conselho");
	}	
	else
	{
	  	printf("\n Voce esta aprovado!");
	}

	return 0;
}


/*
		<   Menor
		>   Maior
		==  Igual
		>=  Maior ou Igual
		<=  Menor ou Igual
		!=  Diferente
		
		
		-  Subtracao
		+  Adição
		/  Divisão
		*  Multiplicação




*/

/*

   %i - Lendo numeros inteiros
   %f - Lendo numeros float
   %c - Lendo caracteres

*/


// tipo nome_da_funcao() { }

// tipo nome_da_funcao(tipo_do_parametro nome_do_parametro) { }

/* 
	Tipos disponiveis na Linguagem C
	
	int - Numeros Inteiros 7 8 9 1025 -8 -10
	float - Numeros Fracionados (Ponto flutuante) - 7.5 -8.09 10.005 - 0.000000
	double - Numeros Fracionados (Ponto Flutuante) - 0.00000000
	char - Caractere - '7'
	bool - 0 e 1

*/

// Camel Case - variavelUtilizandoCamelCase

// Pascal Case - VariavelUtilizandoPascalCase



















