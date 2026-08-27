/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpetit <bpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 11:35:01 by bpetit            #+#    #+#             */
/*   Updated: 2026/08/27 13:56:17 by bpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < --size)
	{
		tmp = tab[i];
		tab[i] = tab[size];
		tab[size] = tmp;
		i++;
	}
}

// int main(void)
// {
//     int tab[] = {1, 2, 3, 4, 5};
//     int size = 5;

//     printf("Taille : %d\nAvant : ", size);
//     for (int i = 0; i < size; i++) printf("%d ", tab[i]);

//     ft_rev_int_tab(tab, size);

//     printf("\nApres : ");
//     for (int i = 0; i < size; i++) printf("%d ", tab[i]);
//     printf("\n");

//     return (0);
// }