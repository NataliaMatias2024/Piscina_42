/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 19:10:22 by namatias          #+#    #+#             */
/*   Updated: 2025/04/29 19:10:25 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	f;
	int	s;

	f = 0;
	if (to_find[f] == '\0')
	{
		return (str);
	}
	s = 0;
	while (str[s] != '\0')
	{
		f = 0;
		while (to_find[f] == str[s + f] && str[s + f] != '\0')
		{
			f++;
		}
		if (to_find[f] == '\0')
		{
			return (&str[s]);
		}
		s++;
	}
	return (0);
}

// int 	main(void)
// {
// 	char str[] = "Código nosso que estás em C. Santificado seja vós, Console";
// 	char to_find[] = "seja";
// 	printf("%s\n", ft_strstr(str, to_find));
// }
