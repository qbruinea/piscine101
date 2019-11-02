/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_comb.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: qbruinea <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/03 17:26:54 by qbruinea     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/04 17:37:48 by qbruinea    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char un;
	char deux;
	char trois;

	un = '0' - 1;
	while (++un <= '9')
	{
		deux = un;
		while (++deux <= '9')
		{
			trois = deux + 1;
			while (trois <= '9')
			{
				ft_putchar(un);
				ft_putchar(deux);
				ft_putchar(trois);
				if (un != '7' || deux != '8' || trois != '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				trois++;
			}
		}
	}
}
