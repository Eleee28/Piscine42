/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 09:17:29 by ejuarros          #+#    #+#             */
/*   Updated: 2023/08/28 11:16:28 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			*dest_cpy;
	unsigned int	i;

	dest_cpy = dest;
	while (i < n)
	{
		if (*src != '\0')
		{
			*dest_cpy = *src;
			dest_cpy++;
			src++;
		}
		else
		{
			*dest_cpy = '\0';
			dest_cpy++;
		}
		i++;
	}
	return (dest);
}
/*
int	main()
{
	char a[10] = "holdgaa", b[10] = "abgwcdef";
	char *aux;
	
	aux = strncpy(a, b, 3);
	printf("%s\n", aux);

	char a1[10] = "holdgaa", b1[10] = "abgwcdef";
	char *aux1;
	
	aux1 = ft_strncpy(a1, b1 , 3);
	printf("%s", aux1);
}
*/
