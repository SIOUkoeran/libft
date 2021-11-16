/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkim3 <mkim3@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:36:13 by mkim3             #+#    #+#             */
/*   Updated: 2021/11/16 15:59:33 by mkim3            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *source, size_t num)
{
	int						i;
	unsigned char			*temp_dst;
	const unsigned char		*temp_src;

	i = 0;
	temp_dst = dest;
	temp_src = source;
	while (temp_dst[i] != '\0' && temp_src[i] != '\0' && i < num)
	{
		temp_dst[i] = temp_src[i];
		i++;
	}
	return (temp_dst);
}
