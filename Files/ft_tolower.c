/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseferr <joseferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:35:11 by joseferr          #+#    #+#             */
/*   Updated: 2023/10/06 15:54:44 by joseferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int ft_tolower(int arg)
{
    if (arg >= 65 && arg <= 90)
        {
            arg = arg + 32;
            return(arg);
        }
    else
        return(arg);
}
