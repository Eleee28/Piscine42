/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 09:42:44 by ejuarros          #+#    #+#             */
/*   Updated: 2023/08/17 10:09:16 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	pos;

	i = 0;
	pos = 0;
	while (dest[pos] != '\0')
		pos++;
	while (src[i] != '\0')
	{
		dest[pos] = src[i];
		pos++;
		i++;
	}
	dest[pos] = '\0';
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int main(void)
{
	char str1[15] = "|\n3", str2[] = "_\n";
	ft_strcat(str1, str2);
	printf("%s\n", str1);

	char str3[15] = "|\n3", str4[] = "_\n";
	strcat(str3, str4);
	printf("%s", str3);
	return (0);
}
*/