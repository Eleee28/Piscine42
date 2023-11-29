/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 12:03:42 by ejuarros          #+#    #+#             */
/*   Updated: 2023/08/22 12:03:45 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	check_coincidence(char *base)
{
	int	i;
	int	j;
	int	equal;

	i = 0;
	equal = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				equal = 1;
			j++;
		}
		i++;
	}
	return (equal);
}

int	error_detection(char *base)
{
	int	error;
	int	length;

	length = 0;
	error = 0;
	while (base[length] != '\0' && !error)
	{
		if (base[length] == '-' || base[length] == '+')
			error = 1;
		length++;
	}
	if (length == 0 || length == 1)
		error = 1;
	return (error || check_coincidence(base));
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	length;

	if (!error_detection(base))
	{
		length = str_len(base);
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr *= -1;
		}
		if (nbr / length != 0)
			ft_putnbr_base(nbr / length, base);
		write(1, &(char){*(base + (nbr % length))}, 1);
	}
}
/*
int main()
{
	ft_putnbr_base(-9, "01");
	return (0);
}
*/