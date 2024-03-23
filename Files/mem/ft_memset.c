/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseferr <joseferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:44:18 by joseferr          #+#    #+#             */
/*   Updated: 2023/10/10 21:03:30 by joseferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	char	*frs;

	i = 0;
	frs = (char *)str;
	while (i < n)
	{
		frs[i] = c;
		i++;
	}
	return (frs);
}
/*
int main () {
   char str[50];

   strcpy(str,"Join the Darkside, we have cookies");
   puts(str);

   memset(str,'B',7);
   puts(str);

   return(0);
}
*/
