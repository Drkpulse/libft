/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseferr <joseferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:41:58 by joseferr          #+#    #+#             */
/*   Updated: 2023/10/10 19:53:59 by joseferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *string, const char *substring, size_t len)
{
	size_t	n;

	if (*substring == 0)
		return ((char *)string);
	n = ft_strlen(substring);
	if (len == 0)
		return (0);
	while (*string && n <= len)
	{
		if (*string == *substring && ft_strncmp(string, substring, n) == 0)
			return ((char *)string);
		++string;
		--len;
	}
	return (NULL);
}

int	main()
{
	char	str[] = "Indo eu, indo eu";
	char	str1[] = "indo";
	printf("%s", ft_strnstr(str, str1, ft_strlen(str)));
}