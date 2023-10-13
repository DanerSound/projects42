/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarreto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 19:57:08 by abarreto          #+#    #+#             */
/*   Updated: 2023/10/13 20:53:28 by abarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <ctype.h>

int	myisdigit(char ch)
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
int	main() {
	char ch ;
	while(ch!='E')
	{
		printf("inserisci un carattere: ");
		scanf("%c", &ch);
		printf(" la funzione base ritorna %d\n",isdigit(ch));
		printf(" la tua funzione ritorna %d\n ",myisdigit(ch));
	}	
	return 0;
}*/
