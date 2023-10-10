/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseferr <joseferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:42:50 by joseferr          #+#    #+#             */
/*   Updated: 2023/10/10 19:52:27 by joseferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp ( const char *str1, const char *str2, size_t num )
{
	int	i;

	i = 0;
	while (i < num)
	{
		if ((str1[i] == str2[i]) && (str1[i] != '\0' || str2[i] != '\0'))
			i++;
		else
			return (str1[i] - str2[i]);
	}
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