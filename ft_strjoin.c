/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 14:21:58 by nkannan           #+#    #+#             */
/*   Updated: 2023/05/21 14:29:29 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// mallocで新しい文字列を作成したものをstrcatで繋げる
// *s1 と *s2 を連結した新しい文字列を返します。
// ただし、割り当てに失敗した場合はNULLを返します。

// 要件定義
// - s1の末尾にs2を連結する
// - s1末尾のヌル文字を消すか無視して連結しなくてはいけない
// - s1の範囲外へアクセスするような形で連結した場合と、s1とs2が重なっていた場合の動作は「未定義」なので、考慮しなくてよい
// - 戻り値はs1（連結後の値）

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	i;
	size_t	j;
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	join = (char *)malloc(sizeof(char) * (len + 1));
	if (!join)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		join[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
		join[i++] = s2[j++];
	join[i] = '\0';
	return (join);
}
