/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 09:22:07 by ejuarros          #+#    #+#             */
/*   Updated: 2023/08/28 11:20:58 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

struct	s_aux_var{
	int				i;
	int				j;
	unsigned int	line;
};

void	ft_putnbr(long long int nb, int size)
{
	int		i;
	char	arr[16];
	int		j;

	i = 0;
	while (nb > 0)
	{
		arr[i] = '0' + (nb % 16);
		if (arr[i] > '9')
			arr[i] += 39;
		nb /= 16;
		i++;
	}
	i--;
	j = size - i;
	while (j > 1)
	{
		write(1, "0", 1);
		j--;
	}
	while (i >= 0)
	{
		write(1, &arr[i], 1);
		i--;
	}
}

void	print(unsigned char *aux)
{
	struct s_aux_var	vars;

	vars.i = 0;
	while (vars.i < 16 && aux[vars.i] != '\0')
	{
		ft_putnbr((long long int) aux[vars.i], 2);
		if (vars.i % 2 == 1)
			write(1, " ", 1);
		vars.i++;
	}
	vars.j = vars.i;
	while (aux[vars.j] == '\0' && vars.i < 39 - vars.j)
	{
		write(1, " ", 1);
		vars.i++;
	}
	vars.i = 0;
	while (vars.i < 16 && aux[vars.i] != '\0')
	{
		if (aux[vars.i] >= 0 && aux[vars.i] < 32)
			write(1, ".", 1);
		else
			write(1, &aux[vars.i], 1);
		vars.i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned char		*arr;
	struct s_aux_var	vars;
	unsigned char		aux[16];

	vars.line = 0;
	vars.j = 0;
	while (vars.line < (size / 16) + 1 && addr != '\0')
	{
		vars.i = 0;
		while (vars.i < 16)
		{
			arr = (unsigned char *)(addr + vars.i);
			aux[vars.i] = *arr;
			vars.i++;
		}
		ft_putnbr((long long int) &aux[vars.j], 16);
		write(1, ": ", 2);
		print(aux);
		write(1, "\n", 1);
		addr += 16;
		vars.j += 16;
		vars.line++;
	}
	return (addr);
}
/*
int	main(void)
{
	char	str[] = "Hola que tal, :).\n nvvnn ddfjjm \tkldo.dfmgmd mgoom";
	char	*str_ptr = &str[0];

	ft_print_memory(str_ptr, 52);
	return (0);
}
*/
