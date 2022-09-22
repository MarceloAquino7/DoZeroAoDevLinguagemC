#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void Menu();

float RecebeNota();

float CalcularMedia(float notas[]);

int main(int argc, char *argv[]) 
{
	Menu();

	float notas[2][4];
	float medias[2];
	
	int i;
	for(i = 0; i < 2; i++)
	{
		printf("\n\nDigite as notas para o %i aluno", i + 1);
		int j;
		for(j = 0; j < 4; j++)
		{
			notas[i][j] = RecebeNota(); // i = 1; j = 3;
		}
		
		medias[i] = CalcularMedia(notas[i]);
	}
	
	
	for(i = 0; i < 2; i++)
	{
		printf("\n[");
		int j;
		for(j = 0; j < 4; j++)
		{
			printf(" %f ", notas[i][j]);
		}
		printf(" ]");
	}
	
	/*      
			
	   matriz = 10 8  7  9
	            5  6  7  8
	
	
	
	notas; // matriz
	notas[0]; // vetor
	notas[0][0]; // variavel
	
	*/
	
	for(i = 0; i < 2; i++)
	{
		printf("\nA media do %i aluno e: %f", i + 1, medias[i]);
	}
		
	return 0;
}

void Menu()
{
	printf("Seja bem vindo ao nosso sistema");
	printf("\nCalculadora de Medias Escolares v1.0");
}

float RecebeNota()
{
	float nota = 0;
	
	printf("\n Digite uma nota: ");
	scanf("%f", &nota);	
	
	return nota;
}

float CalcularMedia(float notas[])
{
	return (notas[0] + notas[1] + notas[2] + notas[3]) / 4;
}










