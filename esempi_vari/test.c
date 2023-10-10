/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarreto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 15:01:02 by abarreto          #+#    #+#             */
/*   Updated: 2023/05/16 15:08:17 by abarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void ft_printer(int *ptr, int num)
{
	*ptr = *ptr + num;
}

int main(void){

	int num1 = 10;
	int num2 = 5;
	int *ptr2 = &num2;

	ft_printer(ptr2, num1);

	printf(" per vedere %d",num2);

}
