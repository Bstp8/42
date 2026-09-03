/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpetit <bpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 13:15:00 by bpetit            #+#    #+#             */
/*   Updated: 2026/09/02 13:45:40 by bpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*h;
	char	*n;

	h = *str;
	n = *to_find;
	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str != '\0')
	{
		while (*h != '\0' && *n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (str);
		}
		str++;
	}
	return (NULL);
}

// int main(void)
// {
//     char *txt = "bonjour le monde";
//     char *find = ft_strstr(txt, "fghb");
//     printf("result : %s\n", find ? find : "NULL"); 

//     char *find2 = ft_strstr(txt, "monde");
//     printf("result : %s\n", find2 ? find2 : "NULL"); 
// }