/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseferr <joseferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:42:50 by joseferr          #+#    #+#             */
/*   Updated: 2023/10/11 16:04:50 by joseferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_strncmp( const char *str1, const char *str2, size_t num )
{
	unsigned char	*frs1;
	unsigned char	*frs2;

	frs1 = (unsigned char *)str1;
	frs2 = (unsigned char *)str2;
	while (num && *frs1 && *frs1 == *frs2)
	{
		++frs1;
		++frs2;
		--num;
	}
	if (num)
		return (*frs1 - *frs2);
	else
		return (0);
}
/*
int main ()
{
	char	str1[] = "Moulinette", str2[] = "Moulinutte";
	printf ("%d", ft_strncmp(str1,str2 ,9));
  	return (0);
}
*/
