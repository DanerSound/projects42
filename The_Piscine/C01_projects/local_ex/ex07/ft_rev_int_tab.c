/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarreto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:22:45 by abarreto          #+#    #+#             */
/*   Updated: 2023/05/18 10:42:19 by abarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;	

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_rev_int_tab(int *arr, int size)
{	
	int	current;
	int	counter;

	current = size - 1;
	counter = 0;
	while (counter < size / 2)
	{
		ft_swap(&arr[counter], &arr[current]);
		counter++;
		current--;
	}
}
/*
int	main(void)
{	
	int	index = 0;
	int	arr[]={5 , 2 , 9, 3, 0};

	ft_rev_int_tab(arr, 5);
	while (index < 5)
	{
		printf("numero %d\n", arr[index]);
		index++;
	}
	return (0);
}*/
