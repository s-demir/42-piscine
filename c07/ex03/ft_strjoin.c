/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedemir <sedemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 15:09:12 by sedemir           #+#    #+#             */
/*   Updated: 2024/07/25 17:16:36 by sedemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char
	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dup;
	int		ac;
	int		i;
	int		j;

	j = 0;
	ac = -1;
	dup = malloc(size * 100 + (size - 1) * 100);
	if (!dup)
		return (NULL);
	while (++ac < size)
	{
		i = 0;
		while (strs[ac][i])
			dup[j++] = strs[ac][i++];
		i = 0;
		while (sep[i] && ac != size - 1)
			dup[j++] = sep[i++];
	}
	return (dup[j] = '\0', dup);
}
#include <stdio.h>
int main()
{
	char *a[] = {"sdfg", "fghjkl", "fghjk"};
	char *b = ", ";
	char *size = ft_strjoin(3, a, b);
	int i = 0;

	printf("%s", size);

}