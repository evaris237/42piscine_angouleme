/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egwanula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:52:07 by egwanula          #+#    #+#             */
/*   Updated: 2022/02/22 18:28:28 by egwanula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
