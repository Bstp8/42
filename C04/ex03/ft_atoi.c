/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpetit <bpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 10:16:55 by bpetit            #+#    #+#             */
/*   Updated: 2026/09/03 10:40:13 by bpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	result;
	int	i;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

// int main()
// {
// 	char *str = "  -45ab4x";
// 	char *str2 = "  2afgd4x";
// 	char *str3 = " -";
// 	printf("str def : %s\n", str);
// 	printf("result : %d\n", ft_atoi(str));
// 	printf("str def : %s\n", str2);
// 	printf("result : %d\n", ft_atoi(str2));
// 	printf("str def : %s\n", str3);
// 	printf("result : %d\n", ft_atoi(str3));
// 	return 0;
// }
