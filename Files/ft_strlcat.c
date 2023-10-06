/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseferr <joseferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:35:01 by joseferr          #+#    #+#             */
/*   Updated: 2023/10/06 15:54:44 by joseferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	rest_d;
	unsigned int	rest_s;

	i = ft_strlen(dest);
	j = 0;
	rest_d = ft_strlen(dest);
	rest_s = ft_strlen(src);
	if (size < 1)
		return (rest_s + size);
	while (src[j] && i < size - 1)
	{
		dest [i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < rest_d)
		return (rest_s + size);
	else
		return (rest_d + rest_s);
}