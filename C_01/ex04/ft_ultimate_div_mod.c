/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 17:03:29 by namatias          #+#    #+#             */
/*   Updated: 2025/04/24 18:36:40 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{	
	int	temporario;

	temporario = *a;
	*a = *a / *b;
	*b = temporario % *b;
}

//int	main(void)
//{
//	int	valor1 = 10;
//	int	valor2 = 5;
//
//	printf("Valor a e b antes da funçao: %i, %i\n", valor1, valor2);
//	ft_ultimate_div_mod(&valor1, &valor2);
//	printf("Valor a e b após a funçao: %i, %i\n", valor1, valor2);		
//}
