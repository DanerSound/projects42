/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_last_word.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarreto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:09:12 by abarreto          #+#    #+#             */
/*   Updated: 2023/05/30 18:03:12 by abarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int	mylen(char *str)
{
	int	i;
	
	i = 0;
	while(str[i])
		i++;
	i--;
	return(i);
}

void	test(char *str)
{
	int	len;
	int	i;

	i = 0;
	len = mylen(str);
	while(str[len]==' '|| str[len]=='\t')
		len--;
	while(str[len]>='a' || str[len]>='z')
		len--;
	len++;
	while(str[len]!=' ' && str[len]!='\t')
	{
		write(1,&str[len],1);
		len++;
	}
}


int	main(int argc, char  *argv[])
{
	if (argc == 2)
	{
		test(argv[1]);
	}
	else
		write(1,"\n",1);
	return (0);
}
