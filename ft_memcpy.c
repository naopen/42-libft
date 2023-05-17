/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:46:08 by nkannan           #+#    #+#             */
/*   Updated: 2023/05/17 19:04:25 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// コピー先のメモリブロック (*dst) に、
// コピー元のメモリブロック (*src) の先頭から (n) バイト分をコピーする
// 途中にヌル文字 ('\0') があってもコピーを止めない
// コピーが終わったら、コピー先のメモリブロックの先頭アドレスを返す
// コピー先とコピー元のメモリブロックが重なっている場合の動作は未定義
// srcがconstなのは、コピー元のメモリブロックを変更しないことを保証するため

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dst_c;
	const unsigned char	*src_c;

	dst_c = (unsigned char *)dst;
	src_c = (const unsigned char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (n--)
		*dst_c++ = *src_c++;
	return (dst);
}
