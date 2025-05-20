/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 18:20:33 by namatias          #+#    #+#             */
/*   Updated: 2025/04/27 18:20:37 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	position;

	position = 0;
	while (str[position] != '\0')
	{
		if (str[position] >= '0' && str[position] <= '9')
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

// int 	main(void)
// {
// 	char string[] = "12345";
// 	char string2[] = "Abcd";
// 	char string3[] = "1,2,3 4 a 5";
//
// 	int result = ft_str_is_numeric(string);
// 	int result2 = ft_str_is_numeric(string2);
// 	int result3 = ft_str_is_numeric(string3);
//
// 	printf("Apenas numeros: %i\n", result);
// 	printf("Apenas letras: %i\n", result2);
// 	printf("Numeros e caracteres especiais: %i\n", result3);
// }