/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkim3 <mkim3@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:14:35 by mkim3             #+#    #+#             */
/*   Updated: 2021/11/16 16:00:52 by mkim3            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *buf, int c, size_t count)
{
	int				i;
	unsigned char	*temp;

	temp = (unsigned char *) buf;
	i = 0;
	while (i < count)
	{
		if (temp[i] == c)
		{
			return (temp + i);
		}
		i++;
	}
	return (0);
}
