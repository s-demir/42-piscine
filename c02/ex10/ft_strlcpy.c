/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedemir <sedemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 16:22:05 by sedemir           #+#    #+#             */
/*   Updated: 2024/07/21 11:11:34 by sedemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	l;

	l = 0;
	if (size == 0)
	{
		while (src[l])
			l++;
		return (l);
	}
	while (src[l] && (l < (size - 1)))
	{
		dest[l] = src[l];
		l++;
	}
	dest[l] = '\0';
	l = 0;
	while (src[l] != '\0')
	{
		l++;
	}
	return (l);
}
