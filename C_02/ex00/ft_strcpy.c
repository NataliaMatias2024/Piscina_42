/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 15:03:40 by namatias          #+#    #+#             */
/*   Updated: 2025/04/28 12:39:38 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	position;

	position = 0;
	while (src[position] != '\0')
	{
		dest[position] = src[position];
		position++;
	}
	dest[position] = '\0';
	return (dest);
}

// int	main(void)
// {
//	
// 	char src[] = "Socorro";
// 	char destino[8]; 
//
// 	ft_strcpy(destino, src);
//
// 	printf("A string do array src: %s\n", src);
// 	printf(" A string do array destino após chamada da funçao: %s\n", destino);
// }
