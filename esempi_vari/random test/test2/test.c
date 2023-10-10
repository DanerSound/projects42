
#include<unistd.h>

void	cipher_word(char *str)
{
	char	tmp;
	int	index;

	index = 0;
	while (str[index])
	{
		if(str[index] >='a' &&  str[index]<='m')
			tmp = str[index] + 13;
		if(str[index] >='n' &&  str[index]<='z')
			tmp = str[index] - 13;
		if(str[index] >='A' &&  str[index]<='M')
			tmp = str[index] + 13;
		if(str[index] >='N' &&  str[index]<='Z')
			tmp = str[index] - 13;
		write(1, &tmp,1);
		index++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	if ( argc==1)
	{
		write(1, "\n", 1);
	}
	else
	{
		cipher_word(argv[1]);
	}
	return(0);
}
