/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egwanula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 15:30:44 by egwanula          #+#    #+#             */
/*   Updated: 2022/03/07 17:15:10 by egwanula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*nouveau;
	int		i;

	i = 0;
	nouveau = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!nouveau)
		return (NULL);
	while (*src)
		nouveau[i++] = *src++;
	nouveau[i] = '\0';
	return (nouveau);
}
