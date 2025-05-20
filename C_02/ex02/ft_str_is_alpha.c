/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 18:19:48 by namatias          #+#    #+#             */
/*   Updated: 2025/04/27 18:19:51 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	position;

	position = 0;
	while (str[position] != '\0')
	{
		if ((str[position] >= 'a' && str[position] <= 'z')
			|| (str[position] >= 'A' && str[position] <= 'Z'))
		{
			position++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

// int	main(void)
// {
// 	char	string[] = "MaNo";
// 	char	string2[] = "H3lp";
// 	char	string3[] = "Boa noite!";
//
// 	int result = ft_str_is_alpha(string);
// 	int result2 = ft_str_is_alpha(string2);
// 	int result3 = ft_str_is_alpha(string3);
//	
// 	printf("Apenas letras: %i\n", result);
// 	printf("Letras e numero: %i\n", result2);
// 	printf("Letras, espaço e carcter especial: %i\n", result3);
// }