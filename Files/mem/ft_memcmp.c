/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseferr <joseferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:11:32 by joseferr          #+#    #+#             */
/*   Updated: 2023/10/17 17:36:48 by joseferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*frs1;
	unsigned char	*frs2;

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

	printf("%d\n", ft_memcmp(str1, str2, 6));

   return(0);
}*/
