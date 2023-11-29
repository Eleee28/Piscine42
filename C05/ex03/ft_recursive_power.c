/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:36:30 by ejuarros          #+#    #+#             */
/*   Updated: 2023/08/31 02:58:15 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	value;

	value = nb;
	if (power < 0)
		value = 0;
	else if (power == 0)
		value = 1;
	else if (power > 1)
			value *= ft_recursive_power(nb, power - 1);
	return (value);
}
/*
#include <stdio.h>

int main()
{
	printf("%d", ft_recursive_power(50, 2));
	return (0);
}
*/
