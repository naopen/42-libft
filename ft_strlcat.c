/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 09:56:31 by nkannan           #+#    #+#             */
/*   Updated: 2023/05/20 09:35:25 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// メモリ領域*srcからメモリ領域*dstに、
// 最大でdstsize - strlen(*dst) - 1バイトだけ文字列をコピーする
// dstsize-strlen(*dst) - 1 バイトコピーする前にヌル文字 ('\0') が見つかると、
// そこでコピーを中止する
// dstsizeのサイズが0の場合、srcの長さを返す

// strlenではなくstrnlenを使う理由は、
// strnlenは最大でnバイトまでしか調べないため、
// dstsizeのサイズを超え、その後のメモリ領域を破壊してしますことを防ぐため
// strlenを使うと、dstsizeのサイズを超えたメモリ領域を調べてしまう.
// 具体的な例で示すと、
// dstsizeが5で、dstに"123456789"が入っているとする
// このとき、strlen(dst)は9を返すが、
// strnlen(dst, 5)は5を返す

static size_t	ft_strnlen(const char *s, size_t maxlen)
{
	size_t	len;

	len = 0;
	while (len < maxlen && s[len])
		len++;
	return (len);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strnlen(dst, dstsize);
	src_len = ft_strnlen(src, dstsize - dst_len);
	if (!dst && dstsize == 0)
		return (ft_strnlen(src, dstsize));
	if (dstsize <= dst_len)
		return (src_len + dstsize);
	ft_strlcpy(dst + dst_len, src, dstsize - dst_len);
	return (dst_len + src_len);
}
