/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaatik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 14:21:35 by moaatik           #+#    #+#             */
/*   Updated: 2024/08/13 15:05:49 by moaatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	slen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	scat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j])
	{
		j++;
	}
	while (src[i])
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
}

int	full_len(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += slen(strs[i]);
		if (i < size - 1)
			len += (slen(sep));
		i++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		len;
	int		i;

	i = 0;
	if (size == 0)
		return (malloc(1));
	len = full_len(size, strs, sep);
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[0] = '\0';
	i = 0;
	while (i < size)
	{
		scat(str, strs[i]);
		if (i < size - 1)
			scat(str, sep);
		i++;
	}
	return (str);
}

/*
int main()
{
	char *strings[] = {"hello", "my","name", "is","vim", "holla"};
	int size = 6;
	char sep[] = "+++";
	char *result = ft_strjoin(size, strings, sep);
	printf("%s", result);
	free(result);
}*/
