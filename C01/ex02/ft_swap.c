/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpetit <bpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 15:04:30 by bpetit            #+#    #+#             */
/*   Updated: 2026/08/27 09:03:49 by bpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	i;

	i = *b;
	*b = *a;
	*a = i;
}

// int	main(void)
// {
// 	int	a;
// 	int b;

// 	a = 21;
// 	b = 42;
// 	printf(" before swap \n%d, %d\n", a, b);
// 	ft_swap(&a, &b);
// 	printf(" after swap \n%d, %d\n", a, b);
// 	return (0);
// }
