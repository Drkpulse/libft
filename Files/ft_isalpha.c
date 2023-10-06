/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseferr <joseferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:34:19 by joseferr          #+#    #+#             */
/*   Updated: 2023/10/06 15:54:44 by joseferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int ft_isalpha(int arg)
{
    if (arg >= 65 && arg <= 90)
        return (2);
    else if (arg >= 97 && arg <= 122)
        return (1);
    else
        return (0);
}

/*
#include <stdio.h>
int main(int ac, char** av)
{
    printf("%d", ft_isalpha(av[1][0]));
}
*/