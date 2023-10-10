/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptr_intro.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarreto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:00:02 by abarreto          #+#    #+#             */
/*   Updated: 2023/05/15 17:41:23 by abarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char letter)
{
	write(1 , &letter, 1);
}

int	ft_nputchar(char letter, int bound)
{
	int	index;

	index = 0;
	while(index < bound)
	{
		ft_putchar(letter);
		index++;
	}
}

int 	main()
{
	char *ptr;
	char ptr1[] = "mondo" // crea un array alloca lo spazio necessario per la parola

	ptr = "Ciao"; // ci sono 5 elenti array da 0 a 4 
	//ft_putchar(*ptr);
	// ft_putchar(ptr); questo non va bene perche e' un puntatore
	//ft_putchar(ptr[3]); // print dell'ultimo elemento dell'array
	//ft_putchar(ptr[4]); // questo non deve printare niente
	//ft_putchar('\n');
	//
	// ptr[0] = "A"; // permette di compilare ma non lascia eseguire
	//
	ptr1[0] = 'M';
	write(1, ptr1[0], 1);

	return (0);
}
