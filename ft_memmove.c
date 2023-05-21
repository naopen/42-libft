/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 08:41:27 by nkannan           #+#    #+#             */
/*   Updated: 2023/05/21 16:26:58 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// メモリ領域*srcの先頭nバイトをメモリ領域*dstにコピーする
// また、srcを単なるメモリブロックとして扱うため、
// 途中にヌル文字 ('\0') があってもコピーを続行する
// dstとsrcが重なっている場合でも、memmove()は正しく動作する
// (memcpy() では動作が未定義となる)

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_c;
	unsigned char	*src_c;

	dst_c = (unsigned char *)dst;
	src_c = (unsigned char *)src;
	if (dst_c == NULL && src_c == NULL)
		return (NULL);
	if (dst_c > src_c)
	{
		while (len--)
			dst_c[len] = src_c[len];
	}
	else
		ft_memcpy(dst_c, src_c, len);
	return (dst);
}
