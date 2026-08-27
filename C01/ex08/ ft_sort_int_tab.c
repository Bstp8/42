/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_sort_int_tab.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpetit <bpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 13:09:55 by bpetit            #+#    #+#             */
/*   Updated: 2026/08/27 14:52:53 by bpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		i++;
	} 
}

// int main()
// {
// 	int tab[] = {5, 2, 8, 9, 3, 7};
// 	int taille = 6;
// 	int i;

// 	ft_sort_int_tab(tab, taille);
// 	printf("liste en ordre croissant :");
// 	i = 0;
// 	while (i < taille)
// 	{
// 		printf("%d ", tab[i]);
// 		i++;
// 	}
// 	return(0);
// }