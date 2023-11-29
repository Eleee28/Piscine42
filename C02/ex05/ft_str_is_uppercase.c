/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 09:19:05 by ejuarros          #+#    #+#             */
/*   Updated: 2023/08/28 09:19:07 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	ret_value;
	int	i;

	ret_value = 1;
	i = 0;
	while (*(str + i) != '\0' && ret_value == 1)
	{
		if (!(*(str + i) >= 'A' && *(str + i) <= 'Z'))
				ret_value = 0;
		i++;
	}
	return (ret_value);
}
/*
#include <unistd.h>

int main()
{
	write(1, &(char){'0' + ft_str_is_uppercase("")}, 1);
	write(1, &(char){'0' + ft_str_is_uppercase("asd")}, 1);
	write(1, &(char){'0' + ft_str_is_uppercase("ABS")}, 1);
	write(1, &(char){'0' + ft_str_is_uppercase("123")}, 1);
	write(1, &(char){'0' + ft_str_is_uppercase("skfdunkejADfns")}, 1);
	write(1, &(char){'0' + ft_str_is_uppercase("KJNFS+NEF-*OWNE")}, 1);
	write(1, &(char){'0' + ft_str_is_uppercase(" ")}, 1);
	return (0);
}
*/