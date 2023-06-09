/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 09:56:31 by nkannan           #+#    #+#             */
/*   Updated: 2023/06/09 21:53:19 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// メモリ領域*srcからメモリ領域*dstに、
// 最大でdstsize - strlen(*dst) - 1バイトだけ文字列をコピーする
// dstsize-strlen(*dst) - 1 バイトコピーする前に
// ヌル文字 ('\0') が見つかると、そこでコピーを中止する。

// 返り値は、コピーしようとした文字列の長さを返す。
// つまり、dstsizeが0であっても、srcの長さを返す。
// またこの際にstrlenを使うと、crashしてしまう。
// これは、strlenは、ヌル文字が見つかるまでの長さを返すためである。
// 一方で、strnlenは、dstsizeのサイズ、つまりここでは0文字分の長さを返すため、
// ヌル文字が見つからない場合にメモリ領域を破壊してしまうことを防ぐことができる

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
	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	if (!dst && dstsize == 0)
		return (ft_strnlen(src, dstsize));
	if (!dst && !src && dstsize == 0)
		return (0);
	if (dstsize <= dst_len)
		return (src_len + dstsize);
	ft_strlcpy(dst + dst_len, src, dstsize - dst_len);
	return (dst_len + src_len);
}
