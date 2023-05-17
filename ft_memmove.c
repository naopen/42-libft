/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 08:41:27 by nkannan           #+#    #+#             */
/*   Updated: 2023/05/18 08:45:41 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// メモリ領域srcの先頭nバイトをメモリ領域dstにコピーする
// また、srcを単なるメモリブロックとして扱うため、
// 途中にヌル文字 ('\0') があってもコピーを続行する
// dstとsrcが重なっている場合でも、memmove()は正しく動作する
// (memcpy() では動作が未定義となる)

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_c;
	unsigned char	*src_c;
	size_t			i;

	dst_c = (unsigned char *)dst;
	src_c = (unsigned char *)src;
	i = 0;
	if (dst_c == NULL && src_c == NULL)
		return (NULL);
	if (dst_c > src_c)
	{
		while (len--)
			dst_c[len] = src_c[len];
	}
	else
	{
		while (i < len)
		{
			dst_c[i] = src_c[i];
			i++;
		}
	}
	return (dst);
}
