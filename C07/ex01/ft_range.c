/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaatik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 12:48:49 by moaatik           #+#    #+#             */
/*   Updated: 2024/08/13 14:55:49 by moaatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		i;
	int		len;
	int		*tablu;

	i = 0;
	if (min >= max)
		return (NULL);
	len = max - min;
	tablu = malloc(len * sizeof(int));
	if (tablu == NULL)
		return (NULL);
	while (min < max)
	{
		tablu[i] = min;
		i++;
		min++;
	}
	return (tablu);
}

/*
int main()
{
	int	*numbers = ft_range(-15, 20);

	for (int i = 0; i < 35; i++) { 
        printf("%d\n ", numbers[i]); 
    } 
}*/
