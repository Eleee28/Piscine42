/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 09:16:59 by ejuarros          #+#    #+#             */
/*   Updated: 2023/08/28 09:17:04 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main ()
{
	char s1[20] = "ho\0aa", s2[20] = "_|\01/221\n  ñh";
	char *aux1;
	aux1 = strcpy(s1, s2);
	printf("%s\n", aux1);
	
	char s3[20] = "ho\0aa", s4[20] = "_|\01/221\n  ñh";
	char *aux;
	aux = ft_strcpy(s3, s4);
	printf("%s", aux);
	
	return (0);
}
*/