#ifndef LIBFT_H
#define LIBFT_H

#include <string.h>
#include <unistd.h>
#include <stdio.h>

void    *ft_memset(void *arr, int symbol, size_t size);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t size);
void    *ft_memccpy(void *restrict dst, const void *restrict src, int symbol, size_t size);
void	*ft_memmove(void *dst, const void *src, size_t len);
void    *ft_memchr(const void *s, int c, size_t n);

#endif
