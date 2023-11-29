/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <ejuarros@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 16:21:19 by ejuarros          #+#    #+#             */
/*   Updated: 2023/08/13 20:24:27 by marojas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	print(int x, int y, int r, int c);
int		is_valid(int x, int y);

void	rush(int x, int y)
{
	int	r;
	int	c;

	if (is_valid(x, y) == 0)
	{
		r = 0;
		while (r < y)
		{
			c = 0;
			while (c < x)
			{
				print(x, y, r, c);
				c++;
			}
			ft_putchar('\n');
			r++;
		}
	}
}

int	is_valid(int x, int y)
{
	int	ok;

	ok = 0;
	if (x <= 0 || y <= 0)
	{
		ok = -1;
		write(1, "ERROR, NEGATIVE NUMBER OR NULL", 30);
	}
	return (ok);
}

void	print(int x, int y, int r, int c)
{
	if (r == 0 && c == 0)
		ft_putchar('A');
	else if ((r == y - 1 && c == x - 1) && (x != 1 && y != 1))
		ft_putchar('A');
	else if ((r == 0 && c == x - 1) || (r == y - 1 && c == 0))
		ft_putchar('C');
	else if (r == 0 || r == y - 1 || c == 0 || c == x - 1)
		ft_putchar('B');
	else
		ft_putchar(' ');
}
