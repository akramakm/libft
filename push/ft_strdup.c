/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-akma <ael-akma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 03:38:31 by ael-akma          #+#    #+#             */
/*   Updated: 2022/11/26 04:50:31 by ael-akma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<libft.h>

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc (sizeof(char) * (ft_strlen(s1) + 1));
	if (!str)
		return (0);
	while ((s1[i]))
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
