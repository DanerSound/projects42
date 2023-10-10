/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_find.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarreto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 17:04:53 by abarreto          #+#    #+#             */
/*   Updated: 2023/05/24 17:07:23 by abarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_trova(char *myword, char *letter)
{
	int index;
	//printf("la parte della prima \n");
	index = 0;
	char *ptr = myword;
	while (*myword != '\0')
	{	//printf("la parte della prima : dentro ciclo\n");
		while(myword[index]==letter[index])
		{
			myword++;
			letter++;
		}

		while (myword[index])
		{
			write(1,&myword[index],1);
			index++;
		}
	}

}

int	main(void)
{
	char c[] = "prova a tenere ";
	char word[] = "prova ";

	ft_trova(word,c);
	//printf("%s la parte della stringa \n",ft_trova(word,c) );
}
