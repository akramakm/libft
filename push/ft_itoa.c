#include<stdio.h>
#include<stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
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

int len(int x)
{
	int i = 0;
	if ( x < 0)
	{
		i = 1;
	}
	while(x != 0)
	{
		x =x / 10;
		i++;
	}
	return(i);
}
char *ft_itoa(int n)
{
	int i = 0;
	char *str;
	long int nb;

	nb = n;
	int d = len(n);
	if(nb == 0)
		return(ft_strdup("0"));
	str =(char*) malloc((d + 1)  * sizeof(char));
	str[d] = '\0';
	if(!str)
		return(0);

	if(n < 0)
		nb *= -1;
	while (d)
	{
		str[d] = nb % 10 + 48;
		nb = nb / 10;
	}
	if(n < 0)
		str[0] = '-';
	return(str);	
}
int main()
{
	printf("%s",ft_itoa(-1337));
	// printf("%d",len(-1337));
}