/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaatik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 09:44:43 by moaatik           #+#    #+#             */
/*   Updated: 2024/07/30 10:11:41 by moaatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	rev;

	size -= 1;
	i = 0;
	while (i <= size)
	{
		j = 0;
		while (j < size - i)
		{
			if (tab[j] > tab[j + 1])
			{
				rev = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = rev;
			}
			j++;
		}
		i++;
	}
}
