/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkim3 <mkim3@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:29:51 by mkim3             #+#    #+#             */
/*   Updated: 2021/12/23 01:01:30 by mkim3            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	unsigned char		*temp1;
	unsigned char		*temp2;
	size_t				i;

	temp1 = (unsigned char *) ptr1;
	temp2 = (unsigned char *) ptr2;
	if (num == 0)
		return (0);
	i = 0;
	while (temp1[i] == temp2[i] && i < num)
	{
		i++;
	}
	if (i == num)
		return (0);
	return (temp1[i] - temp2[i]);
}
