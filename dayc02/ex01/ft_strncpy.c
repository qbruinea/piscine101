/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: qbruinea <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/08 11:07:42 by qbruinea     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/10 09:56:49 by qbruinea    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int cmpt;

	cmpt = 0;
	while (cmpt < n && src[cmpt])
	{
		dest[cmpt] = src[cmpt];
		cmpt++;
	}
	while (cmpt < n)
	{
		dest[cmpt] = '\0';
		cmpt++;
	}
	return (dest);
}
