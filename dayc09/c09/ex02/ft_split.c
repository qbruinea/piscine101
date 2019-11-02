/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_split.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: qbruinea <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/23 17:25:09 by qbruinea     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/24 18:31:44 by qbruinea    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int		ctiunsep(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int		cbdmot(char *str, char *charset)
{
	int i;
	int mot;

	i = 0;
	mot = 0;
	while (str[i] != '\0')
	{
		if (ctiunsep(str[i + 1], charset) == 1 &&
				ctiunsep(str[i], charset) == 0)
			mot++;
		i++;
	}
	return (mot);
}

void	catsplit(char *dest, char *src, char *charset)
{
	int i;

	i = 0;
	while (ctiunsep(src[i], charset) == 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void	fullsplit(char **split, char *str, char *charset)
{
	int i;
	int j;
	int mot;

	i = 0;
	mot = 0;
	while (str[i] != '\0')
	{
		if (ctiunsep(str[i], charset) == 1)
			i++;
		else
		{
			j = 0;
			while (ctiunsep(str[i + j], charset) == 0)
				j++;
			split[mot] = (char*)malloc(sizeof(char) * (j + 1));
			catsplit(split[mot], str + i, charset);
			i = i + j;
			mot++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		nbmot;

	nbmot = cbdmot(str, charset);
	tab = (char**)malloc(sizeof(char*) * (nbmot + 1));
	tab[nbmot] = 0;
	fullsplit(tab, str, charset);
	return (tab);
}
