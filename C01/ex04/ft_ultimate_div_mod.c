/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpetit <bpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 09:34:40 by bpetit            #+#    #+#             */
/*   Updated: 2026/08/27 13:58:34 by bpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

// int main()
// {
// 	int a = 13;
// 	int b = 2 ;

// 	ft_ultimate_div_mod(&a, &b);

// 	printf("resultat : %d\n", a);
// 	printf("reste : %d\n", b);
// 	return 0;
// }
