/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dxenophi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 15:57:06 by dxenophi          #+#    #+#             */
/*   Updated: 2020/10/30 18:35:33 by dxenophi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

extern void *ft_memset(void *arr, int symbol, size_t size);

/* void				ft_bzero(void *arr, size_t size) */
/* { */
/* 	size_t			i; */
/* 	unsigned char	*result; */
/*  */
/* 	i = 0; */
/* 	result = arr; */
/* 	while (i < size) */
/* 	{ */
/* 		result[i] = '\0'; */
/* 		i++; */
/* 	} */
/* } */

void				ft_bzero(void *arr, size_t size)
{
	ft_memset(arr, '*', size);
}


