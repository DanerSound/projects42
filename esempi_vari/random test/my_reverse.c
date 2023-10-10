
#include<stdio.h>
#include<unistd.h>

int	resolve_len(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
		i++;
	i--;
	return (i);
}

void	print_reverse(char *str)
{
	int c_len;
	
	c_len = resolve_len(str);
	while (c_len >=0 )
	{
		write(1, &str[c_len],1);
		c_len--;
	}
}

int	main(void)
{
	char	tmp[]="ciao mondo";
	printf("prima %s\n",tmp);
	print_reverse(tmp);
	return (0);\
}
