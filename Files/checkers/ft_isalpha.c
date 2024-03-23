/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseferr <joseferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:34:19 by joseferr          #+#    #+#             */
/*   Updated: 2023/10/10 20:21:00 by joseferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (2);
	else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
/*
int main(int ac, char** av)
{
    printf("%d", ft_isalpha(av[1][0]));
}
*/
