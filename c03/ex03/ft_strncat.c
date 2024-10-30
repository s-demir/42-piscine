/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedemir <sedemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 14:27:43 by sedemir           #+#    #+#             */
/*   Updated: 2024/07/21 15:45:12 by sedemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	l;

	l = 0;
	while (dest[l])
	{
		l++;
	}
	while (nb > 0 && *src != '\0')
	{
		dest[l] = *src;
		l++;
		src++;
		nb--;
	}
	dest[l] = '\0';
	return (dest);
}
