/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseferr <joseferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:47:23 by joseferr          #+#    #+#             */
/*   Updated: 2023/10/09 12:13:45 by joseferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void * src, size_t n)
{
	size_t	i;
	unsigned char		*d;
	const unsigned char	*s;

	i = 0;
	d = dest;
	s = src;

	if (!d && !s)
		return (dest);

	while(i < n )
	{
		d[i] = s[i];
	}

	return (dest);
}

int main()
{
	char frs[]="Cookies!!";
	char dest[10];

	printf("%s", ft_memcpy(dest, frs, 9));
}