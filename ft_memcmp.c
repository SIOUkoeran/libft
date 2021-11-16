/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkim3 <mkim3@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:29:51 by mkim3             #+#    #+#             */
/*   Updated: 2021/11/16 16:43:13 by mkim3            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	const unsigned char		*temp1;
	const unsigned char		*temp2;
	unsigned int			i;

	temp1 = (const unsigned char *) ptr1;
	temp2 = (const unsigned char *) ptr2;
	i = 0;
	while (temp1[i] != '\0' && temp2[i] != '\0' && temp1[i] == temp2[i])
	{
		if (i == num)
		{
			return (temp1[i] - temp2[i]);
		}
		i++;
	}
	return (temp1[i] - temp2[i]);
}
