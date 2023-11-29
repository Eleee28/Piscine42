/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 10:15:56 by ejuarros          #+#    #+#             */
/*   Updated: 2023/08/18 13:48:10 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*aux_str;
	char	*aux_to_find;

	if (*to_find == '\0')
		return (str);
	aux_to_find = to_find;
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			aux_str = str;
			while ((*str != '\0') && (*to_find != '\0') && (*str == *to_find))
			{
				to_find++;
				str++;
			}
			if (*to_find == '\0')
				return (aux_str);
			to_find = aux_to_find;
			str = aux_str + 1;
		}
		else
			str++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int main(void)
{
	char dest[] = "abc";
    char src[] = "b";
	char *pw;
	char dest1[] = "abc";
    char src1[] = "b";


    pw = ft_strstr(dest, src);
	printf("%s\n", pw);
	printf("%s\n", strstr(dest1, src1));
    return (0);
}
*/