#include <stdio.h>

int main(int argc, char* argv[])	{
	
	char nome[51];
	printf("Teste de parâmetros.\n");
	printf("Nosso programa recebeu %i argumentos.\n", argc);
	printf("Nosso programa tem nome %s.\n", argv[0]);
	int i;
	for(i = 0; i < argc ; i++) {
		printf("Parâmetro %i tem valor %s.\n", i, argv[i]);
	}
	return 0;
}
