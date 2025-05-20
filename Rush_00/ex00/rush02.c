/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savicent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 09:50:16 by savicent          #+#    #+#             */
/*   Updated: 2025/04/20 09:31:31 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	verify(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write(1, "Valor invalido. Por favor digite apenas maiores que 0", 54);
	}
}

void	inner_loop(int x, int y, int y_position)
{
	int	x_position;

	x_position = 1;
	while (x_position <= x)
	{
		if (y_position == 1 && (x_position == 1 || x_position == x))
		{
			ft_putchar('A');
		}
		else if (y_position == y && (x_position == 1 || x_position == x))
		{
			ft_putchar('C');
		}
		else if ((x_position > 1 && x_position < x)
			&& (y_position > 1 && y_position < y))
		{
			ft_putchar(' ');
		}
		else
		{
			ft_putchar('B');
		}
		x_position++;
	}
}

void	rush(int x, int y)
{
	int	y_position;

	verify(x, y);
	y_position = 1;
	while (y_position <= y)
	{
		inner_loop(x, y, y_position);
		ft_putchar('\n');
		y_position++;
	}
}
