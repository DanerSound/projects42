/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnmb.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarreto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 22:20:31 by abarreto          #+#    #+#             */
/*   Updated: 2023/05/27 22:50:04 by abarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c) {
	write(1, &c, 1);
}

void	ft_putnbr(int nb) {
	long nbb = nb;
	if (nbb < 0) {
		ft_putchar('-');
		nbb = -nbb;
	}
	if (nbb >= 10) {
		ft_putnbr(nbb / 10);
		nbb = nbb % 10;
	}
	if (nbb < 10) ft_putchar(nbb + 48);
}

int	main(void)
{
	ft_putnbr(-2147483648);
	return (0);
}
