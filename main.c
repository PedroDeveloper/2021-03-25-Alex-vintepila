#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "valida.c"


int main(int argc, char *argv[]) {
	
	int qtd;
	char palavra[qtd];
	
	printf ("\n\nDigite qtd de caracteres : \n");
    scanf ("%d",&qtd);
    
    
    
    printf ("\n\nDigite caracteres : \n");
    scanf ("%s",&palavra);
    
   
    
    valida_cadeia(palavra);
		
	int result = valida_cadeia(palavra);
	
	if (result ==1)
	{
		printf(" cadeia pertença a linguagem L");
		
	}
	else if (result == 0)
	{
			printf(" cadeia NAO pertença a linguagem L");
			
	}
	
	
	
	return 0;
	
}
