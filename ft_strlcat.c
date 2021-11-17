/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkim3 <mkim3@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:52:09 by mkim3             #+#    #+#             */
/*   Updated: 2021/11/17 15:17:33 by mkim3            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	dest_length;
	unsigned int	src_length;
	int				i;

	i = 0;
	dest_length = 0;
	src_length = 0;
	while (dest[dest_length] != '\0')
		dest_length++;
	while (src[src_length] != '\0')
		src_length++;
	if (dest_length > size)
		return (size + src_length);
	if (size > dest_length + 1)
	{
		while (src[i] != '\0' && i < (size - 1 - dest_length))
		{
			dest[dest_length + i] = src[i];
			i++;
		}
	}
	dest[dest_length + i] = '\0';
	return (src_length + dest_length);
}
