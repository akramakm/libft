/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-akma <ael-akma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 02:48:07 by ael-akma          #+#    #+#             */
/*   Updated: 2022/11/26 04:49:37 by ael-akma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<libft.h>

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	int		i;
	size_t	dlen;
	size_t	slen;

	dlen = ft_strlen (dst);
	slen = ft_strlen (src);
	if (dstsize == 0)
	{
		return (slen);
	}
	if (dstsize <= dlen)
	{
		return (dlen + dstsize);
	}
	while (src[i] && i + dlen - 1 < dstsize)
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[i + dlen] = '\0';
	return (dlen + slen);
}
