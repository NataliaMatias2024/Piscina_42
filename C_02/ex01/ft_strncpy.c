/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 18:19:01 by namatias          #+#    #+#             */
/*   Updated: 2025/04/28 13:52:13 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	position;

	position = 0;
	while (src[position] != '\0' && position < n)
	{
		dest[position] = src[position];
		position++;
	}
	while (position < n)
	{
		dest[position] = '\0';
		position++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	src[] = "Dois";
// 	char	destino[] = "Quarenta";
// 	unsigned int	n = 4;
//
// 	printf("Valor antes da funçao: %s\n", destino);
//
// 	ft_strncpy(destino, src, n);
//
// 	printf("Valor de src: %s\n", src);
// 	printf("Valor de destino pós funçao: %s\n", destino);
// }
