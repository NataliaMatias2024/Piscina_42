/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 18:23:45 by namatias          #+#    #+#             */
/*   Updated: 2025/04/27 18:23:47 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	position;

	position = 0;
	while (str[position] != '\0')
	{
		if (str[position] >= 'a' && str[position] <= 'z')
		{
			str[position] -= 32;
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
// 	char string[] = "minusculo";
// 	char string2[] = "MisTurAdo";
// 	char string3[] = "c0m num3r0s";

// 	ft_strupcase(string);
// 	ft_strupcase(string2);
// 	ft_strupcase(string3);

// 	printf("%s\n", string);
// 	printf("%s\n", string2);
// 	printf("%s\n", string3);
// }