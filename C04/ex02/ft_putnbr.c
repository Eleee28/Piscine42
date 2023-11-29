/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 08:36:33 by ejuarros          #+#    #+#             */
/*   Updated: 2023/08/22 08:36:35 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	if (nb / 10 != 0)
		ft_putnbr(nb / 10);
	else if (nb < 0)
		write(1, "-", 1);
	if (nb < 0)
		write(1, &(char){'0' - (nb % 10)}, 1);
	if (nb >= 0)
		write(1, &(char){'0' + (nb % 10)}, 1);
}
/*
int main()
{
  ft_putnbr(-2147483648);
  write(1, "\n", 1);
  ft_putnbr(2147483647);
  write(1, "\n", 1);
  ft_putnbr(0);
  write(1, "\n", 1);
  ft_putnbr(-1534);
  write(1, "\n", 1);
  ft_putnbr(54641534);
  return (0);
}
*/