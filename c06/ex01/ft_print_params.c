/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedemir <sedemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 11:54:01 by sedemir           #+#    #+#             */
/*   Updated: 2024/07/22 12:14:47 by sedemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	s;

	s = 1;
	while (s < argc)
	{
		i = 0;
		while (argv[s][i])
		{
			write(1, &argv[s][i], 1);
			i++;
		}
		write(1, "\n", 1);
		s++;
	}
}