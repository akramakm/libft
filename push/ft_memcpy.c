/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-akma <ael-akma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 03:54:49 by ael-akma          #+#    #+#             */
/*   Updated: 2022/11/26 04:48:31 by ael-akma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<libft.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, int n)
{
	int			i;
	char		*str1;
	char		*str2;

	str1 = (char *)dst;
	str2 = (char *)src;
	i = 0;
	while (i < n)
	{
		str1[i] = str2[i];
		i++;
	}
	return (dst);
}
