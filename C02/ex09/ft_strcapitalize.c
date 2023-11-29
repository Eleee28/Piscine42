/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 09:20:25 by ejuarros          #+#    #+#             */
/*   Updated: 2023/08/28 11:05:46 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{	
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (i == 0 && *(str + i) >= 'a' && *(str + i) <= 'z')
			*(str + i) -= 32;
		else if ((*(str + i - 1) >= '0' && *(str + i - 1) <= '9')
			|| (*(str + i - 1) >= 'A' && *(str + i - 1) <= 'Z')
			|| (*(str + i - 1) >= 'a' && *(str + i - 1) <= 'z'))
		{
			if ((*(str + i) >= 'A' && *(str + i) <= 'Z'))
				*(str + i) += 32;
		}
		else if (*(str + i - 1) == ' ')
		{
			if ((*(str + i) >= 'a' && *(str + i) <= 'z'))
				*(str + i) -= 32;
		}
		else if ((*(str + i) >= 'a' && *(str + i) <= 'z'))
			*(str + i) -= 32;
		i++;
	}
	return (str);
}
/*
#include <unistd.h>

int main()
{
	char algo[] = "sALUT, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char *a = &algo[0];
	ft_strcapitalize(a);
	write(1, &algo, 61);
	return (0);
}
*/