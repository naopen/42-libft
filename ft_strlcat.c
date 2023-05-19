/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 09:56:31 by nkannan           #+#    #+#             */
/*   Updated: 2023/05/19 22:06:58 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// メモリ領域*srcからメモリ領域*dstに、
// 最大でdstsize - strlen(*dst) - 1バイトだけ文字列をコピーする
// dstsize-strlen(*dst) - 1 バイトコピーする前にヌル文字 ('\0') が見つかると、
// そこでコピーを中止する

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);

	// Avoid crush when null parameter is sent with a size of 0
	if (!dstsize)
		return (src_len);

	if (dstsize <= dst_len)
		return (src_len + dstsize);
	ft_strlcpy(dst + dst_len, src, dstsize - dst_len);
	return (dst_len + src_len);
}
