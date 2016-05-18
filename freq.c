#include <stdio.h>
#include <stdlib.h>
#define SIZE 256

int main(int agrc,char *agrv[])
{
    
	int s[SIZE], total = 0, file, j;
	FILE *arquivo;

    for( j = 0 ; j < SIZE ; j++ ) {
        s[j] = 0;
    }
		
		arquivo = fopen("freq.c", "r");   

    for( j = 0 ; j < SIZE ; j++ ) {
        total += s[j];
    }

    printf("%8s%13s\n", "Elemento", "Valor");

    for( j = 0 ; j < SIZE ; j++ ) {
        if (s[j] != 0)
            printf("%8d%4c%5x%13d\n", j, j, j, s[j]);
    }

    printf("%8s%13d\n", "Total", total);

    return EXIT_SUCCESS;
}


