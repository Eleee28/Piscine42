/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 09:18:48 by ejuarros          #+#    #+#             */
/*   Updated: 2023/08/28 09:18:49 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	ret_value;
	int	i;

	ret_value = 1;
	i = 0;
	while (*(str + i) != '\0' && ret_value == 1)
	{
		if (!(*(str + i) >= 'a' && *(str + i) <= 'z'))
				ret_value = 0;
		i++;
	}
	return (ret_value);
}
/*
#include <stdio.h>

int	main()
{
	printf("%d", ft_str_is_lowercase("ho2lA"));
	return (0);
}
*/