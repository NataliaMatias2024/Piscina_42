/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 14:45:22 by namatias          #+#    #+#             */
/*   Updated: 2025/05/06 14:45:32 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	pos_max;

	pos_max = argc - 1;
	if (argc > 1)
	{
		while (pos_max > 0)
		{
			putstr(argv[pos_max]);
			write(1, "\n", 1);
			pos_max--;
		}
	}
	return (0);
}
