/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseferr <joseferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:35:19 by joseferr          #+#    #+#             */
/*   Updated: 2023/10/06 15:52:40 by joseferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include <stdio.h>
# include <unistd.h>
# include <string.h>

#ifndef libft
#define libft

int	ft_atoi(char *str);
int ft_isalnum(int arg);
int ft_isalpha(int arg);
int	ft_isascii(int arg);
int ft_isdigit(int arg);
int	ft_isprint(int arg);
char *ft_strchr(const char *str, int c);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
size_t strlen(const char *str);
int ft_tolower(int arg);
int ft_toupper(int arg);

#endif
