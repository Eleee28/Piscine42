/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 21:08:29 by ejuarros          #+#    #+#             */
/*   Updated: 2023/08/31 01:52:22 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_total_len(char *src, char *dest, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	dest_len;

	src_len = 0;
	while (src[src_len])
		src_len++;
	dest_len = 0;
	while (dest[dest_len] && dest_len < size)
		dest_len++;
	return (dest_len + src_len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	total_len;

	total_len = ft_total_len(src, dest, size);
	i = 0;
	j = 0;
	while (dest[i])
		i++;
	if (i < size)
	{
		while (src[j] && i < size - 1)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
	}
	dest[i] = '\0';
	return (total_len);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
    char str1[12] = "ho_saad", str2[5] = "aa1";
    printf("%lu\n", strlcat(str1, str2, 9));
    printf("%s\n", str1);
    char str3[12] = "ho_saad", str4[5] = "aa1";
    printf("%u\n", ft_strlcat(str3, str4, 9));
    printf("%s\n", str3);
    return (0);
}
*/
