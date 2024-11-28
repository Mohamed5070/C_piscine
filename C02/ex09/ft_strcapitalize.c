/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaatik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 19:52:50 by moaatik           #+#    #+#             */
/*   Updated: 2024/08/03 15:32:59 by moaatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	to_low(char *s)
{
	int	j;

	j = 0;
	while (s[j])
	{
		if (s[j] >= 'A' && s[j] <= 'Z')
			s[j] += 32;
		j++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	cap;

	i = 0;
	cap = 1;
	to_low(str);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z' && cap == 1)
		{
			str[i] -= 32;
			cap = 0;
		}
		else if (!(str[i] >= 'a' && str[i] <= 'z')
			&& !(str[i] >= '0' && str[i] <= '9'))
			cap = 1;
		else
			cap = 0;
		i++;
	}
	return (str);
}
