/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaatik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 14:33:31 by moaatik           #+#    #+#             */
/*   Updated: 2024/07/28 15:07:08 by moaatik          ###   ########.fr       */
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
			if ((j == 1 && i == 1) || (j == x && i == 1)
				|| (j == 1 && i == y) || (j == x && i == y))
				ft_putchar('o');
			else if (i == y || i == 1)
				ft_putchar('-');
			else if (j == x || j == 1)
				ft_putchar('|');
			else
				ft_putchar(' ');
			j++;
		}
		i++;
		if (x > 0)
			ft_putchar('\n');
	}
}
