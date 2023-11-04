#include<unistd.h> 
#include<stdio.h>
#include<string.h>

int	mystrlen(char *str)
{
	int	counter;
	
	counter = 0;
	while(*str!='\0')
	{
		counter++;
		str++;
	}
	return (counter);
}

int    main(void) 
{ 
	char	mystr[] = {"hello world!"};
	int	result1;
	int	result2;

	result1 = mystrlen(mystr);
	result2 = strlen(mystr);
	printf(" la mia funzione : %d", result1);	
	printf(" funzionebase : %d", result2);
	return (0);} 

