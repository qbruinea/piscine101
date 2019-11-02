/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_sort_int_tab.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: qbruinea <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/07 12:06:28 by qbruinea     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/07 13:11:59 by qbruinea    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int cmpt;
	int temp;

	cmpt = 0;
	while (cmpt < size - 1)
	{
		if (tab[cmpt] > tab[cmpt + 1])
		{
			temp = tab[cmpt];
			tab[cmpt] = tab[cmpt + 1];
			tab[cmpt + 1] = temp;
			cmpt = -1;
		}
		cmpt++;
	}
}
