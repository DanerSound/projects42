/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarreto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:20:31 by abarreto          #+#    #+#             */
/*   Updated: 2023/05/18 12:19:22 by abarreto         ###   ########.fr       */
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

void	ft_sort_int_tab(int *tab, int size)
{	
	int	i;
	int	j;

	i = 0;
	while (i <= size -2)
	{
		j = i + 1;
		while (j <= size -1)
		{
			if (tab[j] < tab [i])
			{
				ft_swap(&tab[j], &tab[i]);
				j++;
			}
			else
			{
				j++;
			}	
		}
		i++;
	}
}
/*
int	main(void)
{	
	int	index = 0;
	int	arr[]={5 , 2 , 9, 3, 0};

	ft_sort_int_tab(arr, 5);
	while (index < 5)
	{
		printf("numero %d\n", arr[index]);
		index++;
	}
	return (0);
}*/
