/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:29:23 by ejuarros          #+#    #+#             */
/*   Updated: 2023/08/31 02:57:52 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	value;

	i = 0;
	value = 1;
	if (power < 0)
		value = 0;
	else
	{
		while (i < power)
		{
			value *= nb;
			i++;
		}
	}
	return (value);
}
/*
#include <stdio.h>

int main()
{
    printf("%d", ft_iterative_power(10, 5));
    return (0);
}
*/
