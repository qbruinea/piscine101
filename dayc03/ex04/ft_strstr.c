/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: qbruinea <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/10 12:50:01 by qbruinea     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/10 16:28:57 by qbruinea    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int a;
	int ctf;

	i = 0;
	ctf = 0;
	a = 0;
	while (to_find[ctf])
		ctf++;
	if (ctf == 0)
		return (str);
	while (str[i])
	{
		while (to_find[a] == str[a + i])
		{
			if (a == ctf - 1)
				return (str + i);
			a++;
		}
		a = 0;
		i++;
	}
	return (0);
}
