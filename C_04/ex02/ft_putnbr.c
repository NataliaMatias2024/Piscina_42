/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 18:11:45 by namatias          #+#    #+#             */
/*   Updated: 2025/05/03 18:11:50 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	min;

	if (nb == 0)
	{
		ft_putchar ('0');
		return ;
	}
	if (nb < 0)
	{
		ft_putchar ('-');
		min = -2147483648;
		if (nb == min)
		{
			write (1, "2147483648", 10);
			return ;
		}
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr (nb / 10);
	}
	ft_putchar ((nb % 10) + '0');
}

// int	main(void)
// {
// 	ft_putnbr(42);
// 	write(1, "\n", 1);
//
// 	ft_putnbr(2147483647);
// 	write(1, "\n", 1);
//
// 	ft_putnbr(-2147483648);
// 	write(1, "\n", 1);
//
// 	ft_putnbr(-8);
// 	write(1, "\n", 1);
//
// 	ft_putnbr(9);
// 	write(1, "\n", 1);
//
// 	ft_putnbr(1785000);
// 	write(1, "\n", 1);
//
// 	return 0;
// }