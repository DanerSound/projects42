/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarreto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 19:55:03 by abarreto          #+#    #+#             */
/*   Updated: 2023/10/13 19:58:29 by abarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

int	myisalpha(char ch)
{
	if ((ch >= 'a' && ch <= 'z') || (ch > 'A' && ch < 'Z'))
	{
		return (1024);
	}
	else
	{
		return (0);
	}
}
/*
#include <stdio.h>
int	main() {
	char ch ;
	while(ch!='E')
	{
		printf("inserisci un carattere: ");
		scanf("%c", &ch);
		printf(" la funzione base ritorna %d\n",isalpha(ch));
		printf(" la tua funzione ritorna %d\n ", myisalpha(ch));
	}	
	return 0;
}*/
