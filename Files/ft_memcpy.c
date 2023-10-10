/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseferr <joseferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:47:23 by joseferr          #+#    #+#             */
/*   Updated: 2023/10/10 21:01:07 by joseferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str2, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	i = 0;
	d = str2;
	s = src;
	if (!d && !s)
		return (str2);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (str2);
}
/*
int	main(void)
{
	char frs[]="Cookies!!";
	char str2[10];
	printf("%s\n", ft_memcpy(str2, frs, 8));
}*/
