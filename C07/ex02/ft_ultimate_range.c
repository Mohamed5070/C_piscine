/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaatik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 13:24:59 by moaatik           #+#    #+#             */
/*   Updated: 2024/08/13 14:57:52 by moaatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		len;

	i = 0;
	if (min >= max)
		return (0);
	len = max - min;
	*range = malloc(len * sizeof(int));
	if (range == NULL)
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (i);
}
/*
int main()
{
	int	*tab;
	int	a;
	a = ft_ultimate_range(&tab, 0, 5);
	for (int i = 0; i < a; i++) {
        printf("%d\n", tab[i]);
    }
	printf("\nthe size is %d\n", a);
}*/
