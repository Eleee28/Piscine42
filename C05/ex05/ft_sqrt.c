/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:28:55 by ejuarros          #+#    #+#             */
/*   Updated: 2023/08/31 02:59:56 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	double	i;

	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	else if (nb > 1)
	{
		i = 2;
		while (i < nb / i)
			i++;
		if (i == nb / i)
			return (i);
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_sqrt(1234321));
	return (0);
}
*/
