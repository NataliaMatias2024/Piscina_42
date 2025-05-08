/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 19:09:43 by namatias          #+#    #+#             */
/*   Updated: 2025/04/29 19:09:46 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
//Reproduzir de forma função strcat (man strcat)

char	*ft_strcat(char *dest, char *src)
{
	int	dest_len;
	int	position;

	dest_len = 0;
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	position = 0;
	while (src[position] != '\0')
	{
		dest[dest_len] = src[position];
		dest_len++;
		position++;
	}
	dest[dest_len] = '\0';
	return (dest);
}

// int main(void)
// {
// 	char src[] = "do Sky";
// 	char dest[] = "Mano ";
// 	ft_strcat(dest,src);
// 	printf("%s\n", dest);
// }