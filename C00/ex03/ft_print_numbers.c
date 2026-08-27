/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_print_numbers.c                                :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/08/25 14:14:51 by username         #+#    #+#              */
/*   Updated: 2026/08/26 11:28:15 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	h;

	h = '0';
	while (h <= '9')
	{
		write(1, &h, 1);
		h++;
	}
}

// int main()
// {
// 	ft_print_numbers();
// 	return 0;
// }
