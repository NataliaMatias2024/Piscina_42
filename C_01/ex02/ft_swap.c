/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 09:35:49 by namatias          #+#    #+#             */
/*   Updated: 2025/04/24 12:03:16 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temporario;

	temporario = *a;
	*a = *b;
	*b = temporario;
}

int	main(void)
{
	int a = 5;
	int b = 1;

	printf("Valor a e b antes: %i, %i\n", a,b);
	ft_swap(&a,&b);
	printf("valor a e b depois: %i, %i\n", a,b);
}
