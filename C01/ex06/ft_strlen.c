/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 18:13:18 by ejuarros          #+#    #+#             */
/*   Updated: 2023/08/14 18:20:17 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	counter;
	int	i;

	counter = 0;
	i = 0;
	while (str[i] != '\0')
	{
		counter++;
		i++;
	}
	return (counter);
}
/*
int main()
{
	char str[] = "hola que tal";

	printf("%d", ft_strlen(str));
}
*/