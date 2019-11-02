/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_iterative_factorial.c                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: qbruinea <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/16 15:36:53 by qbruinea     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/16 16:35:23 by qbruinea    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int nbr;

	i = 1;
	nbr = nb;
	if (nb == 0)
		return (i);
	if (nb > 0)
	{
		while (i < nb)
		{
			nbr = nbr * i;
			i++;
		}
		return (nbr);
	}
	return (0);
}
