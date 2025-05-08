/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 18:21:25 by namatias          #+#    #+#             */
/*   Updated: 2025/04/27 18:21:28 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	position;

	position = 0;
	while (str[position] != '\0')
	{
		if (str[position] >= 'a' && str[position] <= 'z')
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
// 	char string[] = "apenas";
// 	char string2[] = "APENAS";
// 	char string3[] = "aBcD56";
// 	char string4[] = "";

// 	int result = ft_str_is_lowercase(string);
// 	int result2 = ft_str_is_lowercase(string2);
// 	int result3 = ft_str_is_lowercase(string3);
// 	int result4 = ft_str_is_lowercase(string4);

// 	printf("Apenas minusculo: %i\n", result);
// 	printf("Apenas maiusculo: %i\n", result2);
// 	printf("Letras e numeros: %i\n", result3);
// 	printf("String vazia: %i\n", result4);
// }
