/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_rev_int_tab.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: qbruinea <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/05 14:54:15 by qbruinea     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/07 12:06:13 by qbruinea    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int cmpt;
	int i;

	cmpt = 0;
	while (cmpt < size / 2)
	{
		i = tab[cmpt];
		tab[cmpt] = tab[size - 1 - cmpt];
		tab[size - 1 - cmpt] = i;
		cmpt++;
	}
}
