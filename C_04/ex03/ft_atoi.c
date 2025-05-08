/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 18:12:04 by namatias          #+#    #+#             */
/*   Updated: 2025/05/03 18:12:07 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	numb;
	int	signal;

	signal = 0;
	numb = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == '\v' || str[i] == '\t')
			i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signal ++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		numb = numb * 10 + (str[i] - '0');
		i++;
	}
	if (signal % 2 != 0)
		return (-numb);
	return (numb);
}

// int	main(void)
// {
// 	printf("%d\n", ft_atoi("  ---+--+1234ab567")); // -1234
// 	printf("%d\n", ft_atoi("   -42"));             // -42
// 	printf("%d\n", ft_atoi("   ++--123"));         // 123
// 	printf("%d\n", ft_atoi("   56"));              // 56
// 	return 0;
// }