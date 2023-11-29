/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 09:19:27 by ejuarros          #+#    #+#             */
/*   Updated: 2023/08/28 09:19:29 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	ret_value;
	int	i;

	ret_value = 1;
	i = 0;
	while (*(str + i) != '\0' && ret_value == 1)
	{
		if (!(*(str + i) >= ' ' && *(str + i) <= '~'))
				ret_value = 0;
		i++;
	}
	return (ret_value);
}
/*
#include <stdio.h>

int	main()
{
	printf("%d", ft_str_is_printable("$% 4 a b"));
	return (0);
}
*/