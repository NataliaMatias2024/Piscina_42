/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 15:11:21 by namatias          #+#    #+#             */
/*   Updated: 2025/04/18 15:11:43 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb(void)
{
	char	a;

	char	b;

	char	c;

	a = 0;
	b = 1;
	c = 2;
	while (a < 9 && b < 9 && c < 9)
	{
		write (1, &a, 1);
		write (1, &b, 1);
		write (1, &c, 1);
		a++;
		b++;
		c++;
	}
}

int	main(void)
{
	ft_print_comb();
	return 0;
}