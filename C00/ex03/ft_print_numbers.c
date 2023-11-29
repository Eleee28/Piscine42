/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 12:08:00 by ejuarros          #+#    #+#             */
/*   Updated: 2023/08/16 12:08:39 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
 * Using ASCII (hex) to represent numbers
 */

void	ft_print_numbers(void)
{
	int		nb;

	nb = 0x30;
	while (nb <= 0x39)
	{
		write(1, &nb, 1);
		nb++;
	}
}
