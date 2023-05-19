/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 12:47:00 by nkannan           #+#    #+#             */
/*   Updated: 2023/05/19 12:50:21 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// 検索対象のメモリ領域*sの先頭nバイトから、
// 最初にcが現れた位置へのポインタを返す
// cが見つからなかった場合はNULLを返す
// cとsが指し示すメモリ領域の各バイトは、unsigned charとして処理される

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	c_c;

	str = (unsigned char *)s;
	c_c = (unsigned char)c;
	while (n--)
	{
		if (*str == c_c)
			return (str);
		str++;
	}
	return (NULL);
}
