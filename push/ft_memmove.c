/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-akma <ael-akma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 03:18:10 by ael-akma          #+#    #+#             */
/*   Updated: 2022/11/26 04:48:37 by ael-akma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<libft.h>

void *ft_memmove(void *dst, const void *src, int len)
{
	char *str1;
	char *str2;
	int i = 0;

	str1 = (char*)dst;
	str2 = (char*)src;
	
	if( dst > src)
	{
		while(len)
		{
			str1[len] = str2[len];
			len--;
		}
	}
	else
	{
		while( i <= len - 1)
		{
			str1[i] = str2[i];
			i++;
		}
	}
	return(str1);
	
}
