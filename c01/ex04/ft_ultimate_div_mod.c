/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedemir <sedemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 20:39:51 by sedemir           #+#    #+#             */
/*   Updated: 2024/07/15 20:08:15 by sedemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	quot;
	int	rem;

	if (b > 0)
	{
		quot = (*a) / (*b);
		rem = (*a) % (*b);
	}
	*a = quot;
	*b = rem;
}