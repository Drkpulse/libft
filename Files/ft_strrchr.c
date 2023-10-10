/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseferr <joseferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:57:15 by joseferr          #+#    #+#             */
/*   Updated: 2023/10/10 21:03:27 by joseferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*frs;

	frs = NULL;
	while (*str)
	{
		if (*str == (unsigned char)c)
			frs = (char *)str;
		str++;
	}
	if (c == 0)
		return ((char *)str);
	return (frs);
}
/*
int	main(void)
{
	char	str[] = "Where do you find love?";
	char	c = 'y';
	printf ("%s/n",ft_strrchr(str, c));
}*/
