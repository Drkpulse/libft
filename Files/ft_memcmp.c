/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseferr <joseferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:11:32 by joseferr          #+#    #+#             */
/*   Updated: 2023/10/10 20:27:18 by joseferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void *str1, const void *str2, size_t n)
{
	int				i;
	unsigned char	*frs1;
	unsigned char	*frs2;

	i = 0;
	frs1 = (unsigned char *)str1;
	frs2 = (unsigned char *)str2;
	while (n && *frs1 == *frs2)
	{
		frs1++;
		frs2++;
		n--;
	}
	if (n)
		return (*frs1 - *frs2);
	else
		return (0);
}
/*
int main ()
{
   char str1[15] = "abcdEF";
   char str2[15] = "abcdEf";
   int res;

   res = ft_memcmp(str1, str2, 6);

	printf("%d\n", res);

   return(0);
}*/
