/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intro.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarreto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:00:02 by abarreto          #+#    #+#             */
/*   Updated: 2023/05/15 17:10:08 by abarreto         ###   ########.fr       */
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
	ft_nputchar('K', 42);
	ft_putchar('\n');
	return (0);
}
