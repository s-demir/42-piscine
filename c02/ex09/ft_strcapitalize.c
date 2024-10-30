/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedemir <sedemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 17:35:03 by sedemir           #+#    #+#             */
/*   Updated: 2024/07/20 18:10:55 by sedemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ml_strlow(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	control;

	control = 1;
	i = 0;
	ml_strlow(str);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (control)
			{
				str[i] -= 32;
				control = 0;
			}
		}
		else if (str[i] >= '0' && str[i] <= '9')
			control = 0;
		else
			control = 1;
		i++;
	}
	return (str);
}
