/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:02:24 by ejuarros          #+#    #+#             */
/*   Updated: 2023/08/30 12:34:12 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	factorial = 1;
	if (nb < 0)
		factorial = 0;
	while (nb > 1)
	{
		factorial *= nb;
		nb--;
	}
	return (factorial);
}
/*
int main()
{
    printf("%d", ft_iterative_factorial(10));
    return (0);
}
*/
