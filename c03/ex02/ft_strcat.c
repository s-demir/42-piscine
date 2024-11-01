/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedemir <sedemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 14:27:10 by sedemir           #+#    #+#             */
/*   Updated: 2024/07/21 14:27:16 by sedemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcat(char *dest, const char *src)
{
	int	l;

	l = 0;
	while (dest[l] != '\0')
	{
		l++;
	}
	while (*src != '\0')
	{
		dest[l] = *src;
		l++;
		src++;
	}
	dest[l] = '\0';
	return (dest);
}
