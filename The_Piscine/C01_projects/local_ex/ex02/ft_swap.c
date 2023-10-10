/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarreto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 10:02:28 by abarreto          #+#    #+#             */
/*   Updated: 2023/05/17 10:17:18 by abarreto         ###   ########.fr       */
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
/*
int	main(void)
{
	int	num1;
	int	num2;
	int	*ptr1;
	int	*ptr2;

	num1 = 10;
	num2 = 20;
	ptr1 = &num1;
	ptr2 = &num2;
	printf(" numeri %d %d", num1, num2);
	ft_swap(ptr1, ptr2);
	printf(" numeri %d %d", num1, num2);
}*/
