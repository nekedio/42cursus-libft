/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dxenophi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 12:02:48 by dxenophi          #+#    #+#             */
/*   Updated: 2020/11/03 18:02:03 by dxenophi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdio.h> //

void	*ft_memset(void *arr, int symbol, size_t size);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t size);
void	*ft_memccpy(void *restrict dst, const void *restrict src, int symbol,
		size_t size);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *src1, const void *src2, size_t len);
size_t	ft_strlen(const char *src);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char 	*ft_strchr(const char *str, int chr);
char 	*ft_strrchr(const char *str, int chr);

#endif
