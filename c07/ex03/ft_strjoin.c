/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egwanula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 13:54:16 by egwanula          #+#    #+#             */
/*   Updated: 2022/03/07 17:37:33 by egwanula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n])
	{
		n++;
	}
	return (n);
}

char	*ft_strcpy(char	*dest, char	*src)
{
	int	i;

	i = -1;
	while (src[++ i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen_strs(int size, char **strs, char *sep)
{
	int	i;
	int	len;
	int	len_strs;

	i = 0;
	len_strs = 0;
	while (i != size)
	{
		len = ft_strlen(strs[i]);
		if (i < (size - 1))
			len += ft_strlen(sep);
		len_strs += len;
		i++;
	}
	return (len_strs);
}

char	*ft_strcat(char	*dest, char	*src)
{
	char	*destination;

	destination = dest;
	while (*destination)
		destination++;
	while (*src)
		*destination++ = *src++;
	*destination = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		i;

	i = 0;
	if (size == 0)
	{
		tab = (char *)malloc(sizeof(char) * 1);
		tab[0] = '\0';
		return (tab);
	}
	else
		tab = (char *) malloc (sizeof (char) * ft_strlen_strs(size, strs, sep));
	while (i < size)
	{
		tab = ft_strcat(tab, strs[i]);
		if (i < (size - 1))
			tab = ft_strcat(tab, sep);
		i++;
	}
	return (tab);
}
