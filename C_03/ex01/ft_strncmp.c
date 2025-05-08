/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 19:09:28 by namatias          #+#    #+#             */
/*   Updated: 2025/04/29 19:09:30 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
//Reproduzir a função strncmp (man strncmp).

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	position;

	position = 0;
	while (s1[position] != '\0' && s2[position] != '\0' && position < n)
	{
		if ((unsigned char)s1[position] == (unsigned char)s2[position])
		{
			position++;
		}
		else
		{
			return ((unsigned char)s1[position] - (unsigned char)s2[position]);
		}
	}
	if (position < n)
	{
		return ((unsigned char)s1[position] - (unsigned char)s2[position]);
	}
	return (0);
}

// int	main(void)
// {
// 	char str1[] = "AB";
// 	char str2[] = "ABCZDFGHIJ";
// 	int n = 2;
//
// 	printf("%d\n", ft_strncmp(str1, str2, n));
// }