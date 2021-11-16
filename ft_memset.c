/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkim3 <mkim3@stduent.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 22:50:02 by mkim3             #+#    #+#             */
/*   Updated: 2021/11/15 22:50:02 by mkim3            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *p, int value, size_t num)
{
	int		i;
	(unsigned char *)	temp;

	
	temp = p;
	while (i < num)
	{
		temp[i] = value;
		i++;
	}
	return (temp);
}
