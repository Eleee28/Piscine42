/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 08:38:55 by ejuarros          #+#    #+#             */
/*   Updated: 2023/08/23 01:46:03 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				ret_value;
	unsigned int	i;

	i = 0;
	ret_value = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && ret_value == 0 && i < n)
	{
		if (ret_value == 0 && s1[i] < s2[i])
			ret_value = s1[i] - s2[i];
		else if (ret_value == 0 && s1[i] > s2[i])
			ret_value = s1[i] - s2[i];
		i++;
	}
	return (ret_value);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[] = "ab", str2[] = "a\t";
	unsigned int size = 2;
	printf("%d", ft_strncmp(str1, str2, size));

	char str3[] = "ab", str4[] = "a\t";
	unsigned int size2 = 2;
	printf("%d", strncmp(str3, str4, size2));
	return (0);
}
*/
