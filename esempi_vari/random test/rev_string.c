#include <unistd.h>
#include <stdio.h>
int	ft_strlen(char *str)
{
	int	i;
	i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}
char *ft_rev_print(char *str)
{
	int	i;

	i = ft_strlen(str);
	i--;
	while (i >= 0)
	{
		i--;
	}
	write(1, &str[i], i);
return(str);
}
#include<stdio.h>
int main()
{
	char str[] = "dub0 a POIL";
	printf("%s",ft_rev_print(str));
}


