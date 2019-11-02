/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_comb2.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: qbruinea <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/03 21:38:49 by qbruinea     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/04 19:06:23 by qbruinea    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int un;
	int deux;

	un = 0;
	while (un <= 98)
	{
		deux = un + 1;
		while (deux <= 99)
		{
			ft_putchar((un / 10) + 48);
			ft_putchar((un % 10) + 48);
			ft_putchar(' ');
			ft_putchar((deux / 10) + 48);
			ft_putchar((deux % 10) + 48);
			if (un != 98 || deux != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			deux++;
		}
		un++;
	}
}
