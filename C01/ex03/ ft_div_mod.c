/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_div_mod.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpetit <bpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 09:02:55 by bpetit            #+#    #+#             */
/*   Updated: 2026/08/27 13:58:56 by bpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	resultat;
// 	int	reste;

// 	a =	13;
// 	b =	2;

// 	ft_div_mod(a, b, &resultat, &reste);

// 	printf("resultat : %d\n", resultat);
// 	printf("reste : %d\n", reste);

// 	return (0);
// }