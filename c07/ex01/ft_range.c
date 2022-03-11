/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egwanula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 16:43:12 by egwanula          #+#    #+#             */
/*   Updated: 2022/03/07 17:19:28 by egwanula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (0);
	tab = malloc(((max - min) + 2) * sizeof(int));
	if (!tab)
	{
		return (NULL);
	}	
	i = 0;
	while (i < (max - min))
	{
		tab[i] = min + i;
		i++;
	}
	tab[i] = 0;
	return (tab);
}
