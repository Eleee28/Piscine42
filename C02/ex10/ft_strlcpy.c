/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 09:20:49 by ejuarros          #+#    #+#             */
/*   Updated: 2023/08/28 11:18:11 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
		length++;
	return (length);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	size_src;
	unsigned int	i;

	i = 0;
	if (size != 0)
	{
		while (*(src + i) != '\0' && i < size - 1)
		{
			*(dest + i) = *(src + i);
			i++;
		}
		*(dest + i) = '\0';
	}
	size_src = ft_strlen(src);
	return (size_src);
}

/*
#include <string.h>
#include <stdio.h>

int main()
{
	char a[30] = "rghiohgriohgr";
	char b[30] = "9012492140980";
	printf("%u\n", ft_strlcpy(a, b, 0));
	printf("%s\n", a);
	char c[30] = "rghiohgriohgr";
	char d[30] = "9012492140980";
	printf("%lu\n", strlcpy(c, d, 0));
	printf("%s", a);
	return (0);	
}
*/
