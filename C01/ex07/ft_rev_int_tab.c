/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 18:20:59 by ejuarros          #+#    #+#             */
/*   Updated: 2023/08/15 10:31:22 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		*aux;
	int		c;

	aux = tab + (size - 1);
	while (aux != tab && aux != tab - 1)
	{
		c = *tab;
		*tab = *aux;
		*aux = c;
		aux--;
		tab++;
	}
}
/*
int main ()
{
	int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	ft_rev_int_tab(arr, 10);
	for (int i = 0; i < 10; i++)
		printf("%d", arr[i]);
	return (0);
}
*/