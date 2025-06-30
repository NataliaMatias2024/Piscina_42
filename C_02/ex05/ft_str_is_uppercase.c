/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 18:22:23 by namatias          #+#    #+#             */
/*   Updated: 2025/06/30 17:26:20 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	position;

	position = 0;
	while (str[position] != '\0')
	{
		if (str[position] >= 'A' && str[position] <= 'Z')
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
// 	char string[] = "MAIUSCULO";
// 	char string2[] = "Minusculo";
// 	char string3[] = "D0IdEiR4";
// 	char string4[] = "";

// 	int result = ft_str_is_uppercase(string);
// 	int result2 = ft_str_is_uppercase(string2);
// 	int result3 = ft_str_is_uppercase(string3);
// 	int result4 = ft_str_is_uppercase(string4);

// 	printf("MAIUSCULO: %i\n", result);
// 	printf("minusculo: %i\n", result2);
// 	printf("D0IdEiR4: %i\n", result3);
// 	printf("String Vazia: %i\n", result4);
// }