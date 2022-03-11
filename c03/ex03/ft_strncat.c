/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egwanula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:58:09 by egwanula          #+#    #+#             */
/*   Updated: 2022/02/22 18:29:29 by egwanula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char	*dest, char	*src, unsigned int nb)
{
	char	*destination;

	destination = dest;
	while (*destination)
		destination++;
	while (nb-- && *src)
		*destination++ = *src++;
	*destination = '\0';
	return (dest);
}
