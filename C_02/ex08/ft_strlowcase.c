/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 16:30:06 by namatias          #+#    #+#             */
/*   Updated: 2025/04/29 16:30:37 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	position;

	position = 0;
	while (str[position] != '\0')
	{
		if (str[position] >= 'A' && str[position] <= 'Z')
		{
			str[position] += 32;
			position++;
		}
		else
		{
			position++;
		}
	}
	return (str);
}

// int	main(void)
// {
// 	char string[] = "MAIUSCULO";
// 	char string2[] = "MisTurAdo";
// 	char string3[] = "C0M NUM3r0s";

// 	ft_strlowcase(string);
// 	ft_strlowcase(string2);
// 	ft_strlowcase(string3);

// 	printf("%s\n", string);
// 	printf("%s\n", string2);
// 	printf("%s\n", string3);
// }