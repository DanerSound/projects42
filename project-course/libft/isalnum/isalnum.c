/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarreto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 20:56:24 by abarreto          #+#    #+#             */
/*   Updated: 2023/11/04 14:29:58 by abarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	myisalnum(char ch)
{
	if ((ch >= '1' && ch <= '9') || (ch == '0'))
	{
		return (2048);
	}
	else
	{
		return (0);
	}
}
/*
int	main(void)
{
	char	ch;

	while (ch != 'E')
	{
		printf("inserisci un carattere: ");
		scanf("%c", &ch);
		printf("la funzione base ritorna %d\n", isalnum(ch));
		printf("la tua funzione ritorna %d\n ", myisalnum(ch));
	}
	return (0);
}*/
