/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 09:17:58 by ejuarros          #+#    #+#             */
/*   Updated: 2023/08/28 09:18:00 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	ret_value;
	int	i;

	ret_value = 1;
	i = 0;
	while (*(str + i) != '\0' && ret_value == 1)
	{
		if (!(*(str + i) >= 'A' && *(str + i) <= 'Z'))
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
	printf("%d", ft_str_is_alpha("ho2lA"));
	return (0);
}
*/