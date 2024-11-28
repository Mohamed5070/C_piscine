/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaatik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 15:09:15 by moaatik           #+#    #+#             */
/*   Updated: 2024/07/28 16:07:35 by moaatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			if ((i == 1 && j == 1) || (i == y && j == x) && x != 1 && y != 1)
				ft_putchar('/');
			else if ((i == 1 && j == x) || (i == y && j == 1))
				ft_putchar('\\');
			else if (i == 1 || i == y || j == 1 || j == x)
				ft_putchar('*');
			else
				ft_putchar(' ');
			j++;
		}
		i++;
		if (x > 0)
			ft_putchar('\n');
	}
}
