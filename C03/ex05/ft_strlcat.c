/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaatik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 14:53:06 by moaatik           #+#    #+#             */
/*   Updated: 2024/08/15 00:01:17 by moaatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d;
	unsigned int	s;
	unsigned int	result;
	unsigned int	i;

	result = 0;
	d = ft_strlen(dest);
	s = ft_strlen(src);
	if (size > d)
		result = s + d;
	else
		result = s + size;
	i = 0;
	while (src[i] && d <= size)
	{
		dest[d] = src[i];
		d++;
		i++;
	}
	dest[d] = '\0';
	return (result);
}
/*
int main()
{
	char dest[] = "Hello";
	char source[] = ", world!";
	unsigned int result = ft_strlcat(dest, source, 1);
	printf("Result: %s\n", dest);
	printf("Length: %d\n", result);
	return (0);
}*/
