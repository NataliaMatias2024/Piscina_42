/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 18:40:18 by namatias          #+#    #+#             */
/*   Updated: 2025/04/25 15:25:58 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int	position;

	position = 0;
	while (str[position] != '\0')
	{
		write (1, &str[position], 1);
		position++;
	}
}

//int	main(void)
//{
//	ft_putstr ("Socoooooooorro");
//}
