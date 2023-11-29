/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:01:45 by ejuarros          #+#    #+#             */
/*   Updated: 2023/08/31 02:59:31 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	fib;

	fib = 0;
	if (index < 0)
		fib = -1;
	else if (index == 0)
		fib = 0;
	else if (index == 1)
		fib = 1;
	else if (index > 1)
		fib += ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (fib);
}
/*
#include <stdio.h>

int main()
{
    printf("%d", ft_fibonacci(12));
    return(0);
}
*/
