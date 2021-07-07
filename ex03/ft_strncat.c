/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 10:53:05 by aboulhaj          #+#    #+#             */
/*   Updated: 2021/07/07 11:59:57 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	a;
	unsigned int	b;

	b = 0;
	a = 0;
	while (dest[a])
		a++;
	while (src[b] && b < nb)
	{
		dest[a + b] = src[b];
		b++;
	}
	dest[a + b] = '\0';
	return (dest);
}
