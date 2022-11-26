/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-akma <ael-akma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 02:03:33 by ael-akma          #+#    #+#             */
/*   Updated: 2022/11/26 04:47:48 by ael-akma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<libft.h>

int	ft_isascii(int c)
{
	if ((c >= 0 && c <= 127))
		return (1);
	return (0);
}
