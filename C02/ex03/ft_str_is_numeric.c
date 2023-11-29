/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 09:18:23 by ejuarros          #+#    #+#             */
/*   Updated: 2023/08/28 09:18:25 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	ret_value;
	int	i;

	ret_value = 1;
	i = 0;
	while (*(str + i) != '\0' && ret_value == 1)
	{
		if (!(*(str + i) >= '0' && *(str + i) <= '9'))
				ret_value = 0;
		i++;
	}
	return (ret_value);
}
/*
#include <stdio.h>

int	main()
{
	printf("%d", ft_str_is_numeric("ho2lA"));
	return (0);
}
*/