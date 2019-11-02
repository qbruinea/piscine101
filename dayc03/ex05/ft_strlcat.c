/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: qbruinea <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/10 16:51:40 by qbruinea     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/11 08:17:33 by qbruinea    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int sizea;
	unsigned int sizeb;

	sizea = 0;
	sizeb = 0;
	while (dest[sizea])
		sizea++;
	while (dest[sizeb])
		sizeb++;
	if (size <= sizea)
		return (sizeb + size);
	i = 0;
	while (dest[i] && i < size - 1)
		i++;
	j = 0;
	while (i < size - 1 && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (sizea + sizeb);
}
