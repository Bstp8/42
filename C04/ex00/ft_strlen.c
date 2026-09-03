/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpetit <bpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 09:09:50 by bpetit            #+#    #+#             */
/*   Updated: 2026/09/03 10:33:34 by bpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

// int main(void)
// {
//  char *car = "hello";
// 	int l;
// 	printf("Word : %s\n", car);
// 	l = ft_strlen(car);
// 	printf("Word length : %d\n", l);
// 	return (0);
// }