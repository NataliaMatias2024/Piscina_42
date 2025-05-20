/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 19:10:04 by namatias          #+#    #+#             */
/*   Updated: 2025/04/29 19:10:06 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
//Reproduzir de forma 
//idêntica o funcionamento da função strncat (man strncat).

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	d;
	unsigned int	s;

	d = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	s = 0;
	while (src[s] != '\0' && s < nb)
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	return (dest);
}

// int main(void)
// {
// 	char src[] = "Aranha come inseto";
// 	char dest[] = "Homem ";
// 	unsigned int nb = 6;
// 	ft_strncat(dest,src, nb);
// 	printf("%s\n", dest);
// }
