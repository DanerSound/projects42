/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarreto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:12:12 by abarreto          #+#    #+#             */
/*   Updated: 2023/11/04 15:19:05 by abarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	len(void *init)
{
	int	counter;	

	counter = 0;
	while (*init != '\0')
	{
		counter++;
		init++;
	}
	return (counter);
}

int main() {
    int array[5]; // Dichiarazione di un array di 5 interi
    
    char word[] = "HOLAS";

    int r = len(&array);
    int r1 = len(&word);

    printf("%d ", r);
    printf("%d ", r1);
    

    return 0;
}

