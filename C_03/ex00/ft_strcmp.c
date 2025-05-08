/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 19:08:40 by namatias          #+#    #+#             */
/*   Updated: 2025/04/29 19:09:13 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	position;

	position = 0;
	while (s1[position] != '\0' || s2[position] != '\0')
	{
		if (s1[position] == s2[position])
		{
			position++;
		}
		else
		{
			return (s1[position] - s2[position]);
		}
	}	
	return (0);
}

// int 	main(void)
// {
// 	char str1[] = "ABã";
// 	char str2[] = "ABC";
// 	printf("%d\n", ft_strcmp(str1, str2));
// }