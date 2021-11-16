/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkim3 <mkim3@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 22:55:36 by mkim3             #+#    #+#             */
/*   Updated: 2021/11/16 15:26:07 by mkim3            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern void *ft_memset(void *temp, int value, size_t num);

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
