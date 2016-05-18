#include <stdio.h>

int main(int argc, char* argv []) {

	char file_name[25]; 	
	FILE *arquivo;
	int c, cl = 0, cb = 0, cp = 0, lastchar;
	

	arquivo = fopen(argv[1], "r");

	c = getc(arquivo);
    while( c != -1 )
    {
        cb++;
        if (c == '\n')
            cl++;

       /*TODO fix the word identification statement*/ 
 		if (c == ' ')
			cp++;
		
		
		printf("%2i %3c %-4x\n", c, c, c);
		lastchar = c;		
		c = getc(arquivo);
	}

    printf("Linhas=%i Palavras=%i Bytes=%i\n", cl, cp, cb);


	fclose(arquivo);


	return 0;
}
