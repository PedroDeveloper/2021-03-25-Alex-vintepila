#include <stdio.h>
#include <stdlib.h>
#include <string.h>
	int valida_cadeia(char *palavra)
	{
	char *p;
	
	
	int i,aux,aux2,j,cont=0;
	
	for (i=0; i<strlen(palavra);i++)
	{	
		
		if ( strcmp("w",(&palavra[i])) == 0   )
		{
		    aux2 = palavra[i];
		    printf ("\n%d",aux2);
		}
		else{
			printf("nao achei");
		}
    }
	
			for (aux =aux2-1;aux=0;aux--)
			{
				j=aux2+1;
				
					if ( strcmp(&palavra[aux],(&palavra[j])) == 0 )
					{
						cont++;
					}
					
				j++;	
				
			}
		
	
 int aux3 =	strlen(palavra);
    printf("\n%d",aux3);
    printf("\n%d",cont);
	if(cont ==aux2)
		{
			return 1;
		}
		else
		{
			return 0;
			
		}
	
		
	}
