/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:10:58 by ejuarros          #+#    #+#             */
/*   Updated: 2023/08/30 12:41:57 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	factorial;

	factorial = nb;
	if (nb < 0)
		factorial = 0;
	else if (nb == 0)
		factorial = 1;
	else
		factorial *= ft_recursive_factorial(nb - 1);
	return (factorial);
}
/*
#include <stdio.h>

int main()
{
    printf("%d", ft_recursive_factorial(10));
    return (0);
}
*/
