/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaatik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 21:48:55 by moaatik           #+#    #+#             */
/*   Updated: 2024/08/13 15:50:12 by moaatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	stcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] < s2[i])
			return (0);
		else if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}

void	putst(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int		j;
	int		i;
	char	*swap;

	i = 1;
	while (i < argc - 1)
	{
		j = 1;
		while (j < argc - 1)
		{
			if (stcmp(argv[j], argv[j + 1]) == 1)
			{
				swap = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = swap;
			}
			j++;
		}
		i++;
	}
	j = 0;
	while (++j < argc)
		putst(argv[j]);
}
