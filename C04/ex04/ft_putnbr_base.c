/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpetit <bpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 10:41:25 by bpetit            #+#    #+#             */
/*   Updated: 2026/09/03 11:34:22 by bpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	int		j;
	long	n;

	base_len = 0;
	if (!base)
		return ;
	while (base[base_len])
	{
		if (base[base_len] == '+' || base[base_len] == '-'
			|| base[base_len] <= 32 || base[base_len] == 127)
			return ;
		j = base_len + 1;
		while (base[j])
		{
			if (base[base_len] == base[j])
				return ;
			j++;
		}
		base_len++;
	}
	if (base_len < 2)
		return ;
	n = nbr;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= base_len)
		ft_putnbr_base(n / base_len, base);
	write(1, &base[n % base_len], 1);
}

// int	main(void)
// {
// 	write(1, "Decimal (42)    : ", 18);
// 	ft_putnbr_base(42, "0123456789");
// 	write(1, "\n", 1);

// 	write(1, "Binaire (42)    : ", 18);
// 	ft_putnbr_base(42, "01");
// 	write(1, "\n", 1);

// 	write(1, "Hexa (42)       : ", 18);
// 	ft_putnbr_base(42, "0123456789ABCDEF");
// 	write(1, "\n", 1);

// 	write(1, "Negatif (-2147483648) : ", 24);
// 	ft_putnbr_base(-2147483648, "0123456789");
// 	write(1, "\n\n", 2);
// 	return (0);
// }