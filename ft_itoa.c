/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkim3 <mkim3@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 14:56:06 by mkim3             #+#    #+#             */
/*   Updated: 2021/12/05 15:13:35 by mkim3            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_length(int n)
{
	int length;
	
	length = 0;
	if (n < 0)
	{
		n *= -1;
		length++;
	}
	while (n >= 10)
	{
		n /= 10;
		length++;
	}
	return (length + 1);
}

char *ft_itoa(int n)
{
	char 	*result;
	int		length;

	length = ft_length(n);
	result = (char *) ft_calloc(length + 1, sizeof(char));
	if (result == NULL)
		return (NULL);
	if (n < 0)
	{
		result[0] = '-';
		n *= -1;
	}
	length--;
	while (n >= 10)
	{
		result[length--] = n % 10 + 48;
		n /= 10;
	}
	return (result);
	
}