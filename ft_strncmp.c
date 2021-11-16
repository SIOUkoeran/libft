/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkim3 <mkim3@stduent.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 22:44:52 by mkim3             #+#    #+#             */
/*   Updated: 2021/11/15 22:44:52 by mkim3            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, int length)
{
	int				i;
	unsigned char	*temp1;
	unsigned char	*temp2;

	temp1 = (unsigned char *)s1;
	temp2 = (unsigned char *)s2;
	i = 0;
	while (temp1[i] != '\0' && temp2[i] != '\0' && temp1[i] == temp2[i])
	{
		if (i >= length)
		{
			return (temp1[i] - temp2[i]);
		}
		i++;
	}
	return (temp1[i] - temp2[i]);
}
