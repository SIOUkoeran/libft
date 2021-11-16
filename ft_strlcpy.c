/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkim3 <mkim3@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:43:40 by mkim3             #+#    #+#             */
/*   Updated: 2021/11/16 16:51:53 by mkim3            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	int				length;
	unsigned int	i;

	i = 0;
	length = 0;
	while (src[length] != '\0')
		length++;
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	return (length);
}
