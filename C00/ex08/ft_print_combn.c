/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 12:22:21 by ejuarros          #+#    #+#             */
/*   Updated: 2023/08/16 12:22:30 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_equal(int n, char *arr)
{
	int		ok;
	int		i;
	int		j;

	ok = 1;
	i = 0;
	while (i < n && ok == 1)
	{
		j = i + 1;
		while (j < n)
		{
			if (arr[i] == arr[j])
				ok = 0;
			j++;
		}
		i++;
	}
	i = 1;
	while (i < n && ok == 1)
	{
		if (arr[i - 1] > arr[i])
			ok = 0;
		i++;
	}
	return (ok);
}

void	array_and_print(int num, int n)
{
	char	arr[9];
	int		i;

	i = n - 1;
	while (i >= 0)
	{
		arr[i] = (char){'0' + (num % 10)};
		num /= 10;
		i--;
	}
	if (check_equal(n, &arr[0]) == 1)
	{
		write(1, &arr, n);
		if (arr[0] != (char){'0' + (10 - n)})
			write(1, ", ", 2);
	}
}

void	ft_print_combn(int n)
{
	int		num;
	int		power;
	int		aux;

	num = 0;
	aux = 0;
	power = 1;
	while (aux < n)
	{
		power *= 10;
		aux++;
	}
	while (num < power)
	{
		array_and_print(num, n);
		num++;
	}
}
