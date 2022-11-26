/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-akma <ael-akma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 03:52:00 by ael-akma          #+#    #+#             */
/*   Updated: 2022/11/26 04:49:12 by ael-akma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<libft.h>

int	lkfl(char *str, char c)
{
	int	a;
	int	i;

	a = 0;
	i = 0;
	while (*str)
	{
		if (*str != c && a == 0)
		{
			i++;
			a = -1;
		}
		else if (*str == c)
			a = 0;
		str++;
	}
	return (i);
}

int	tolklma(char *s, char c)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i] && s[i] != c)
	{
		i++;
		k++;
	}
	return (k);
}

char	**ft_split(char *str, char c)
{
	char	**return_value;
	int		i;
	int		j;
	int		lenofwords;

	i = 0;
	j = 0;
	lenofwords = lkfl(str, c);
	return_value = (char **)malloc((lenofwords + 1) * sizeof(char *));
	if (!return_value)
		return (0);
	while (*str && *str == c)
		str++;
	while (*str)
	{
		return_value[i] = (char *)malloc(tolklma(str, c));
		if (!return_value[i])
			return (0);
		while (*str && *str == c)
			str++;
		j = 0;
		while (*str && *str != c)
		{
			return_value[i][j] = *str;
			j++;
			str++;
		}
		return_value[i][j] = '\0';
		i++;
	}
	return_value[i] = 0;
	return (return_value);
}
