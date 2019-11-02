/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: qbruinea <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/17 15:22:07 by qbruinea     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/18 15:22:45 by qbruinea    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int		tsize(int size, char **strs, char *sep)
{
	int i;
	int tsize;

	i = 0;
	tsize = 0;
	while (i < size)
	{
		tsize = tsize + ft_strlen(strs[i]);
		i++;
	}
	tsize = tsize + ft_strlen(sep) * (size - 1);
	return (tsize);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;

	if (size == 0)
	{
		str = (char*)malloc(sizeof(*str));
		str[0] = '\0';
		return (str);
	}
	i = 0;
	if (!(str = (char*)malloc(sizeof(*str) * (tsize(size, strs, sep) + 1))))
		return (0);
	str[0] = '\0';
	while (i < size)
	{
		str = ft_strcat(str, strs[i]);
		if (i < size - 1)
			str = ft_strcat(str, sep);
		i++;
	}
	return (str);
}
