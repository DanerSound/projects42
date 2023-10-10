/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarreto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 12:35:10 by abarreto          #+#    #+#             */
/*   Updated: 2023/05/24 12:35:14 by abarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	make_printable(char *letter, int index)
{	
	char	*hex_table;

	hex_table = "0123456789abcdef";
	write(1, "\\", 1);
	write(1, &hex_table[(letter[index] / 16)], 1);
	write(1, &hex_table[letter[index] % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (*str >= 32 && *str <= 126)
		{	
			write(1, &str[index], 1);
			str++;
		}
		else
		{
			make_printable(str, index);
			str++;
		}
	}
}
/*
int	main(void)
{
	char	my_str[]="Coucou\ntu vas bien ?";

	ft_putstr_non_printable(my_str);
	write(1,"\n",1);
	return 0;
}*/