/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 18:23:02 by namatias          #+#    #+#             */
/*   Updated: 2025/04/27 18:23:04 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	position;

	position = 0;
	while (str[position] != '\0')
	{
		if (str[position] >= 32 && str[position] <= 126)
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
// 	char string[] = "abcDEFG123456";
// 	char string2[] = ";/}' +-*/";
// 	char string3[] = "";
// 	char string4[] = "\n";

// 	int result = ft_str_is_printable(string);
// 	int result2 = ft_str_is_printable(string2);
// 	int result3 = ft_str_is_printable(string3);
// 	int result4 = ft_str_is_printable(string4);

// 	printf("Letras e numeros: %i\n", result);
// 	printf("Simbolos: %i\n", result2);
// 	printf("String Vazia: %i\n", result3);
// 	printf("Nao imprimivel: %i\n", result4);
// }