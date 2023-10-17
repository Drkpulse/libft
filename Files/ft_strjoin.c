/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseferr <joseferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:06:32 by joseferr          #+#    #+#             */
/*   Updated: 2023/10/12 14:35:20 by joseferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*frs;
	int		len;
	int		i;

	len = ft_strlen(s1) + ft_strlen(s2);
	frs = malloc(sizeof(char) * len + 1);
	if (!frs || !s1 || !s2)
		return (NULL);
	len = 0;
	i = 0;
	while (s1[i])
	{
		frs[len] = s1[i];
		i++;
		len++;
	}
	i = 0;
	while (s2[i])
	{
		frs[len] = s2[i];
		i++;
		len++;
	}
	frs[len] = '\0';
	return (frs);
}
/*
int main()
{
	char frs1[]="Vou-me juntar";
	char frs2[]="olha outra frase";

	printf("%s\n", ft_strjoin(frs1, frs2));
}*/
