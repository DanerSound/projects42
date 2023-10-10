/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarreto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:59:28 by abarreto          #+#    #+#             */
/*   Updated: 2023/05/31 18:01:52 by abarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	printer(char *str)
{
	int i = 0;
	while(str[i])
	{
		write(1,&str[i],1);
		i++;
	}
}
int	searcher(char *str,char *l, char *s)
{
	int found = 0;
	int i = 0;
	while(str[i])
	{
		if (str[i]==*l)
		{
			str[i]=*s;
			found = 1;
		}
		i++;
	}
	return(found);
}
int mylen(char *str)
{
	int i=0;
	while(str[i])
		i++;
	return (i-1);
}


int main(int argc, char *argv[])
{
	int print = 0;
 	int a = mylen(argv[2]);
	int b = mylen(argv[3]);
	if (argc == 4 && a==0 && b==0)
	{		
		print = searcher(argv[1],argv[2],argv[3]);
		
	}
	if (print)
			printer(argv[1]);
		else
			printer(argv[1]);		
	write(1,"\n",1);
	return(0);
}
