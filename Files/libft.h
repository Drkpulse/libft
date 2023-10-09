/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseferr <joseferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:35:19 by joseferr          #+#    #+#             */
/*   Updated: 2023/10/09 11:48:18 by joseferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <ctype.h>

#ifndef libft
#define libft

int	ft_atoi(char *str);
int ft_isalnum(int arg);
int ft_isalpha(int arg);
int	ft_isascii(int arg);
int ft_isdigit(int arg);
int	ft_isprint(int arg);
char *ft_strchr(const char *str, int c);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t strlen(const char *str);
int ft_tolower(int arg);
int ft_toupper(int arg);
void *memcpy(void *dest, const void * src, size_t n);

#endif
