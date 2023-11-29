/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 08:13:45 by ejuarros          #+#    #+#             */
/*   Updated: 2023/08/31 17:57:18 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	char	*str1;
	char	*str2;

	str1 = s1;
	str2 = s2;
	while (*str1 == *str2 && *str1 != '\0' && *str2 != '\0')
	{
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}

void	ft_sort_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		cnt;
	char	*aux;

	i = 1;
	cnt = argc;
	while (i < cnt)
	{
		j = i + 1;
		while (j < cnt)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				aux = argv[i];
				argv[i] = argv[j];
				argv[j] = aux;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	aux;

	aux = 1;
	if (argc > 2)
		ft_sort_params(argc, argv);
	while (argc > 1 && aux < argc)
	{
		while (*argv[aux] != '\0')
		{
			write(1, argv[aux], 1);
			argv[aux]++;
		}
		write(1, "\n", 1);
		aux++;
	}
	return (0);
}
