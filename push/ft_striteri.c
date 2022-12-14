/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-akma <ael-akma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 04:50:15 by ael-akma          #+#    #+#             */
/*   Updated: 2022/11/26 04:49:30 by ael-akma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<libft.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		f(i, s + i);
		s++;
		i++;
	}
}
