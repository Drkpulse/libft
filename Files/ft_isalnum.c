/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseferr <joseferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:34:08 by joseferr          #+#    #+#             */
/*   Updated: 2023/10/09 12:10:05 by joseferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int arg)
{
    if ((arg >= 97 && arg <= 122) || (arg >= 65 && arg <= 90) || (arg >= 48 && arg <= 57))
        return (1);
    else
        return (0);
}

int main()
{
    printf("%d\n", ft_isalnum('s'));
    printf("%d\n", isalnum('2'));
}