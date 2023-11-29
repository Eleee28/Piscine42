/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 09:42:44 by ejuarros          #+#    #+#             */
/*   Updated: 2023/08/17 10:13:50 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				pos;

	i = 0;
	pos = 0;
	while (dest[pos] != '\0')
		pos++;
	while (src[i] != '\0' && i < nb)
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
	unsigned int nb = 1;
	char str1[10] = "abc4", str2[4] = "a_b";
	ft_strncat(str1, str2, nb);
	printf("%s\n", str1);

	unsigned int nb1 = 1;
	char str3[10] = "abc4", str4[4] = "a_b";
	strncat(str3, str4, nb1);
	printf("%s", str3);
	
	return (0);
}
*/