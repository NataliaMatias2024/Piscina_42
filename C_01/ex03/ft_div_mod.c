/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 12:12:59 by namatias          #+#    #+#             */
/*   Updated: 2025/04/24 14:48:33 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}

//int	main(void)
//{
//	int a = 10;
//	int b = 2;
//	int div;
//	int mod;
//	ft_div_mod(10, 2, &div, &mod);
//	printf("Valor de a dividido por b: %i\n", div);
//	printf("Valor do modulo (resto) da divisao de a por b: %i\n", mod);
//}
