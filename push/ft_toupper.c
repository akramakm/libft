/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-akma <ael-akma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 11:49:15 by ael-akma          #+#    #+#             */
/*   Updated: 2022/11/26 04:50:13 by ael-akma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<libft.h>

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (c - 32);
	}
	return (c);
}
