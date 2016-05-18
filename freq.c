#include <stdio.h>
#include <stdlib.h>
#define SIZE 256

int main(int argc, char* argv [])
{
    int s[SIZE];
    int j;
	char c;
	FILE *arquivo;
    int total = 0;
	
    for( j = 0 ; j < SIZE ; j++ ) {
        s[j] = 0;
    }
	
    arquivo = fopen(argv[1], "r");
	fscanf(arquivo, "%c", &c);
   
	while( c != -1 )
    {
		s[c] = s[c] +1;
		c = getc(arquivo);
	}
    
    for( j = 0 ; j < SIZE ; j++ ) {
        total += s[j];
    }

    printf("%16s%19s\n", "Elemento", "Valor");

    for( j = 0 ; j < SIZE ; j++ ) {
		if (s[j] != 0 && j == 9) 
			printf("%5d    \"Tab\"%4x%14d\n", j, j, s[j]);
		if (s[j] != 0 && j == 10) 
			printf("%5d   \"Enter\"%3x%14d\n", j, j, s[j]);
		if (s[j] != 0 && j == 32) 
			printf("%5d   \"Space\"%18d\n", j, s[j]);
        if (s[j] != 0 && j != 10 && j != 9 && j!= 32)
            printf("%5d%8c%6x%13d\n", j, j, j, s[j]);
    }

    printf("%8s%13d\n", "Total", total);
	fclose(arquivo);
    return EXIT_SUCCESS;
}
