/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaatik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:31:20 by moaatik           #+#    #+#             */
/*   Updated: 2024/08/10 17:49:18 by moaatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printnb(int i, int j)
{
	char	q;
	char	w;
	char	e;
	char	r;

	q = i / 10 + '0';
	w = i % 10 + '0';
	e = j / 10 + '0';
	r = j % 10 + '0';
	write(1, &q, 1);
	write(1, &w, 1);
	write(1, " ", 1);
	write(1, &e, 1);
	write(1, &r, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			printnb(i, j);
			if (i != 98 || j != 99)
				write(1, ", ", 2);
			j++;
		}
		i++;
	}
}
