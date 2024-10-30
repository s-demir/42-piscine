/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedemir <sedemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 14:50:56 by sedemir           #+#    #+#             */
/*   Updated: 2024/07/24 14:42:29 by sedemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	size;

	if (!*to_find)
		return (str);
	size = 0;
	while (to_find[size])
	{
		size++;
	}
	while (*str)
	{
		i = 0;
		while (str[i] == to_find[i])
		{
			if (i == size - 1)
				return (str);
			i++;
		}
		str++;
	}
	return (0);
}

#include <stdio.h>

int main()
{
	char src[] = "ela lale el ele";
	char to_find[] = "lale";
	printf("%s", ft_strstr(src, to_find));
}