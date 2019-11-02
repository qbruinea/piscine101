/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcpy.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: qbruinea <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/07 16:11:10 by qbruinea     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/08 11:06:31 by qbruinea    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int cmpt;

	cmpt = 0;
	while (src[cmpt])
	{
		dest[cmpt] = src[cmpt];
		cmpt++;
	}
	dest[cmpt] = src[cmpt];
	return (dest);
}
