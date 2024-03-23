/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseferr <joseferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:05:47 by joseferr          #+#    #+#             */
/*   Updated: 2023/10/30 09:55:56 by joseferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	start;
	size_t	end;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[start]) && s1[start])
		++start;
	while (ft_strchr(set, s1[end]) && s1[end])
		--end;
	trimmed = ft_substr(s1, start, (end - start) + 1);
	return (trimmed);
}
/*
int	main()
{
	char	frs[] = "Test and Try Me";
	char	frs1[] = "Try Me";
	printf("%s" ,ft_strtrim(frs, frs1));
}*/
