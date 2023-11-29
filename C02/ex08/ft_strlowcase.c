/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 09:20:02 by ejuarros          #+#    #+#             */
/*   Updated: 2023/08/28 09:20:04 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{	
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if ((*(str + i) >= 'A' && *(str + i) <= 'Z'))
			*(str + i) = *(str + i) + 32;
		i++;
	}
	return (str);
}
/*
#include <unistd.h>

int main()
{
	char algo[] = "JVDUDUVVc";
	char *a = &algo[0];
	ft_strlowcase(a);
	write(1, &algo, 9);
	return (0);
}
*/