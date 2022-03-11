/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egwanula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 17:20:47 by egwanula          #+#    #+#             */
/*   Updated: 2022/03/10 18:43:44 by egwanula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i++])
	{
		if (c == charset [i++])
			return (1);
	}
	return (0);
}

int	mot(char c, char b, char *charset)
{
	return (!sep(c, charset) && sep(b, charset));
}

int	nb_mots(char *str, char *charset)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (str[i])
	{
		if (mot(str[i], str[i - 1], charset)
			|| (!sep(str[i], charset) && i == 0))
			num++;
		i++;
	}
	return (num);
}

int	*ft_strs_total(char *str, char *charset)
{
	int	i;
	int	index;
	int	total_words;
	int	*size_str;

	i = 0;
	index = 0;
	total_words = nb_mots(str, charset);
	size_str = (int *)malloc(sizeof(int) * total_words);
	while (i <= total_words)
	{
		size_str[i] = 0;
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (!sep(str[i], charset))
			size_str[index]++;
		else if (i > 0 && !sep(str[i - 1], charset))
			index++;
		i++;
	}
	return (size_str);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;
	int		j;
	int		index;
	int		*size_str;

	i = -1;
	j = 0;
	index = 0;
	tab = (char **)malloc(sizeof(char *) * (nb_mots(str, charset) + 1));
	size_str = ft_strs_total(str, charset);
	while (str[++i])
	{
		if (!sep(str[i], charset))
		{
			if (i == 0 || mot(str[i], str [i - 1], charset))
				tab[index] = (char *)malloc(sizeof(char) * size_str[index]);
			tab[index][j] = str[i];
			tab[index][++j] = '\0';
		}
		else if (i > 0 && !sep(str[i - 1], charset) && ++index)
			j = 0;
	}
	tab[nb_mots(str, charset)] = 0;
	return (tab);
}
