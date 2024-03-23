/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseferr <joseferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:34:58 by joseferr          #+#    #+#             */
/*   Updated: 2023/10/11 16:40:16 by joseferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*frs;

	frs = (char *)str;
	while (*frs && *frs != (unsigned char)c)
		frs++;
	if (*frs == (unsigned char)c)
		return (frs);
	return (NULL);
}
/*
int main () {
   const char str[] = "Sera que funciona." ;
   const char ch = 'q';
   char *rest;
   char *resto;

   rest = strchr(str, ch);
   resto = ft_strchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, rest);
   printf("String after |%c| is - |%s|\n", ch, resto);

   return(0);
}*/
