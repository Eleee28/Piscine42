/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 00:06:30 by ejuarros          #+#    #+#             */
/*   Updated: 2023/08/31 03:00:44 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	prime;

	i = 2;
	prime = 1;
	if (nb == 0 || nb == 1)
		prime = 0;
	while (prime && i < nb)
	{
		if (nb % i == 0)
			prime = 0;
		i++;
	}
	return (prime);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

/*
#include <stdio.h>

int main()
{
    printf("%d", ft_find_next_prime(1221));
    return(0);
}
*/
