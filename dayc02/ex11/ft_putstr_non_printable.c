/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putstr_non_printable.c                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: qbruinea <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/10 09:11:54 by qbruinea     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/10 09:47:17 by qbruinea    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	char			*hexa;
	unsigned char	*cast;

	cast = (unsigned char *)str;
	hexa = "0123456789abcdef";
	i = 0;
	while (cast[i])
	{
		if (cast[i] < 32 || cast[i] >= 127)
		{
			ft_putchar('\\');
			ft_putchar(hexa[cast[i] / 16]);
			ft_putchar(hexa[cast[i] % 16]);
		}
		else
			ft_putchar(cast[i]);
		i++;
	}
}
