/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 09:48:26 by nkannan           #+#    #+#             */
/*   Updated: 2023/05/20 14:11:47 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// # 説明
// ヒープメモリから size バイトのブロックを count 個割り当てる。
// 確保されたブロックは0埋めされます。
// countまたはsizeが0の場合、callocはNULL、または後でfreeに正常に渡すことができる一意のポインター値を返します。

// ——以下mallocについて——
// 整数のオーバーフローは検出されない。
// その場合は、誤ったサイズのメモリブロックが割り当てられる。

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
