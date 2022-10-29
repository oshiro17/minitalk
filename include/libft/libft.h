/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noshiro <noshiro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 22:21:47 by pantti            #+#    #+#             */
/*   Updated: 2022/10/24 07:37:11 by noshiro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

// # include <stdio.h>
// # include <string.h>
# include <limits.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>

void				*ft_memset(void *dest, int c, size_t n);
void				ft_bzero(void *b, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *b1, const void *b2, size_t n);
size_t				ft_strlen(const char *s);
size_t				ft_strlcpy(char *dest, const char *src, size_t dstsize);
size_t				ft_strlcat(char *dest, const char *src, size_t dstsize);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strnstr(const char *big, const char *little, \
						size_t len);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_atoi(const char *str);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
void				*ft_calloc(size_t nmemb, size_t size);
char				*ft_strdup(const char *str);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s1, char const *set);
char				**ft_split(char const *s, char c);
char				*ft_itoa(int n);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_striteri(char *s, void (*f)(unsigned int, char*));
char				*ft_strtrim(char const	*s1, char const *set);
int					ft_printf(const char *format, ...);
int					ft_hex_len(unsigned int num);
int					ft_formats(va_list args, const char format);
int					ft_printchar(int c);
int					ft_printstr(char *str);
int					ft_print_ptr(unsigned long long ptr);
int					ft_print_unsigned(unsigned int n);
int					ft_print_hex(unsigned int num, const char format);
int					ft_printpercent(void);
size_t				count_digits(int n);
void				ft_putstr(char	*str);
void				ft_put_ptr(uintptr_t num);
int					ft_ptr_len(uintptr_t num);
char				*ft_uitoa(unsigned int n);
int					ft_num_len(unsigned	int num);
void				ft_put_hex(unsigned int num, const char format);
int					ft_printnbr(int n);

#endif