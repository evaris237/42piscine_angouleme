/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egwanula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 12:58:33 by egwanula          #+#    #+#             */
/*   Updated: 2022/03/07 17:25:07 by egwanula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	*range = malloc(sizeof(int) * ((max - min) + 1));
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	(*range)[i] = 0;
	return (i);
}
