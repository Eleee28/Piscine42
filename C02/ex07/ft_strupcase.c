/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 09:19:46 by ejuarros          #+#    #+#             */
/*   Updated: 2023/08/28 09:19:48 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{	
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if ((*(str + i) >= 'a' && *(str + i) <= 'z'))
			*(str + i) = *(str + i) - 32;
		i++;
	}
	return (str);
}
/*
#include <unistd.h>

int main()
{
	char algo[] = "asd";
	char *a = &algo[0];
	ft_strupcase(a);
	write(1, &algo, 4);
	return (0);
}
*/