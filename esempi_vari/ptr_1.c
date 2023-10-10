#include<unistd.h>
#include<stdio.h>

void	ft_putchar(char ptr)
{
	write(1, &ptr, 1);
}

void	ft_putaddr(void *ptr);

void	ft_putnbr(int ptr)
{	
	char d = ptr / 10 + 48;
	char u = ptr % 10 + 48;
	write(1, &d, 1);
	write(1, &u, 1);
}

void	put_stampa_numeri(int num)
{
	printf(" intero velocemente %d",num);
}

int	main(void)
{
	int	a;
	int	*ptr;
	int 	**ptr2;

	a = 31;
	ptr = &a;
	ptr2 = &ptr;
	//ft_putnbr(*ptr); // stampa il numero attraverso il suo puntatore
	put_stampa_numeri(*ptr);
	ft_putchar('\n');
	// a = 42; // cambi direttamente il valore potrebbe non tornare
	*ptr = 42; // vai all'indirizzo contenuto da ptr e assegna 42
	put_stampa_numeri(*ptr);
	//ft_putchar(*ptr);
	write(1, "\n", 1);
	**ptr2 = 52;
	put_stampa_numeri(**ptr2);

	return (0);
}
