/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseferr <joseferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:34:58 by joseferr          #+#    #+#             */
/*   Updated: 2023/10/09 12:56:23 by joseferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *str, int c)
{
    int i;

    i = 0;
    while(str)
    {
        if (str[i] == c)
        {
            return str;
        }
    }    
}
/*
int main () {
   const char str[] = "Heyo yo. asdsad" ;
   const char ch = '.';
   char *ret;
   char *rete;

   ret = strchr(str, ch);
   rete = ft_strchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   printf("String after |%c| is - |%s|\n", ch, rete);
   
   return(0);
}*/