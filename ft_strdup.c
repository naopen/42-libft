/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 14:02:39 by nkannan           #+#    #+#             */
/*   Updated: 2023/05/20 14:15:52 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// # 説明
// strdup() は、文字列 str の複製を作成し、
// それを指すポインターを返す。メモリの割り当てに失敗した場合は NULL を返す。

// strdup() は、strdupa() と同じですが、
// strdupa() は、メモリの割り当てに失敗した場合には、
// プログラムを終了させます。
// それに対して、strdup() は、メモリの割り当てに失敗した場合には、
// NULL を返します。

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	len;

	len = ft_strlen(s1);
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s1, len + 1);
	return (ptr);
}
