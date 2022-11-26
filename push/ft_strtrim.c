/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-akma <ael-akma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 03:45:38 by ael-akma          #+#    #+#             */
/*   Updated: 2022/11/26 04:50:02 by ael-akma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<libft.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		k;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	k = 0;
	while (s1[i] && ft_strchr(set, s1[i]) != 0)
		i++;
	j = ft_strlen(s1) - 1;
	while (j >= 0 && strchr(set, s1[j]) != NULL)
		j--;
	str = (char *)malloc(sizeof(char) * (strlen(s1) - (i + j)));
	while (i <= j)
	{
		str[k] = s1[i];
		i++;
		k++;
	}
	return (str);
}
