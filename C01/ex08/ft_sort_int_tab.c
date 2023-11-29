/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 18:20:59 by ejuarros          #+#    #+#             */
/*   Updated: 2023/08/21 14:24:00 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int		*aux;
	int		*aux_tab;
	int		tmp;
	int		i;

	aux_tab = tab;
	i = 1;
	while (aux_tab < tab + size - 1)
	{
		aux = aux_tab + (size - i);
		while (aux > aux_tab)
		{
			if (*aux < *(aux - 1))
			{
				tmp = *aux;
				*aux = *(aux - 1);
				*(aux - 1) = tmp;
			}
			aux--;
		}
		aux_tab++;
		i++;
	}
}
/*
int main ()
{
	int arr[] = {0, 8, 22, 3, 4, 3, 6, 10, 8, 1, 2, 5};

	ft_sort_int_tab(arr, 12);
	for (int i = 0; i < 12; i++)
		printf("%d ", arr[i]);
	return (0);
}
*/
