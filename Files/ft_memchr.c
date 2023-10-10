/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseferr <joseferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:57:31 by joseferr          #+#    #+#             */
/*   Updated: 2023/10/10 20:21:26 by joseferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*frs;

	frs = (unsigned char *)s;
	c = (unsigned char)c;
	while (n && *frs != c)
	{
		++frs;
		--n;
	}
	if (n)
		return ((void *)frs);
	else
		return (NULL);
}
/*
int main () {
   const char str[] = "ashasdaas";
   const char ch = 'd';
   char *ret;

   ret = ft_memchr(str, ch, strlen(str));

   printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
}*/
