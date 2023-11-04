/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarreto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:34:29 by abarreto          #+#    #+#             */
/*   Updated: 2023/11/04 14:42:03 by abarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 
#include <stdio.h>
#include <ctype.h>

int	myisascii(int ch)
{
	return (ch >= 0 && ch <= 127);
}
/*
int    main(void) 
{ 
     int ch;
     printf("inserisci un carattere: ");
          scanf("%d", &ch);
          printf("la funzione base ritorna %d\n", isascii(ch));
          printf("la tua funzione ritorna %d\n ", myisascii(ch)); 
  
     return(0); 
}*/
