/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseferr <joseferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:27:53 by joseferr          #+#    #+#             */
/*   Updated: 2023/10/10 20:28:31 by joseferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	i = 0;
	d = str1;
	s = str2;
	if (!d && !s)
		return (str1);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (str1);
}
/*
int	main(void)
{
	char frs[]="Cookies!!";
	char dest[]="Bananas are good!";
	printf("%s\n", ft_memmove(dest, frs, 7));
}*/
