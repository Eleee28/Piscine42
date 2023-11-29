/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 09:21:26 by ejuarros          #+#    #+#             */
/*   Updated: 2023/08/28 09:21:35 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_char(char *str)
{
	unsigned char	d;
	unsigned char	u;

	write(1, "\\", 1);
	d = '0' + (unsigned char)*str / 16;
	u = '0' + (unsigned char)*str % 16;
	if (d > '9')
		d = d + 39;
	if (u > '9')
		u = u + 39;
	write(1, &d, 1);
	write(1, &u, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) <= 31 || *(str + i) == 127)
			ft_print_char(str + i);
		else
			write(1, str + i, 1);
		i++;
	}
}
/*
int main()
{
  char str[] = "hdbfhbd\nnv\tj\v\rdn";
  ft_putstr_non_printable(str);
}
*/