/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseferr <joseferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:57:15 by joseferr          #+#    #+#             */
/*   Updated: 2023/10/11 17:49:38 by joseferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*frs;

	i = ft_strlen(str);
	frs = NULL;
	while (i >= 0)
	{
		if (str[i] == (unsigned char)c)
			return ((char *)&str[i]);
		i--;
	}
	if (c == 0)
		return ((char *)str);
	return (frs);
}
/*
int	main(void)
{
	char	str[] = "Where do you find love?";
	char	c = 'f';
	printf ("%s\n",ft_strrchr(str, c));
}*/
