#include <stdio.h>
#include <ctype.h>

int	myisalpha(char ch)
{
	if ((ch >= 'a' && ch <= 'z') || (ch > 'A' && ch < 'Z'))
	{
		return 1024;
	}
	else
	{
		return 0;
	}
}

int	main() {
	char ch ;
	while(ch!='E')
	{
		printf("inserisci un carattere: ");
		scanf("%c", &ch);
		printf(" la funzione base ritorna %d\n",isalpha(ch));
		printf(" la tua funzione ritorna %d\n ", myisalpha(ch));
	}	
	return 0;
}

