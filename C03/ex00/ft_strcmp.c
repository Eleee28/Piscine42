/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 08:38:55 by ejuarros          #+#    #+#             */
/*   Updated: 2023/08/17 09:42:51 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	ret_value;
	int	i;

	i = 0;
	ret_value = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && ret_value == 0)
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
	char str1[] = "1\n4", str2[] = "109";
	printf("%d", ft_strcmp(str1, str2));

	char str3[] = "1\n4", str4[] = "109";
	printf("%d", strcmp(str3, str4));
	return (0);
}
*/