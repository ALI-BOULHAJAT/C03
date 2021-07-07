/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 08:48:35 by aboulhaj          #+#    #+#             */
/*   Updated: 2021/07/07 12:06:06 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	a;
	int	b;

	if (to_find == '\0')
		return (str);
	a = 0;
	while (str[a])
	{
		b = 0;
		if (str [a] == to_find[b])
		{
			while (str[a + b] == to_find[b])
			{
				b++;
				if (to_find[b] == '\0')
					return (&str[a]);
			}
		}
		a++;
	}
	return (0);
}
