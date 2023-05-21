/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 14:21:58 by nkannan           #+#    #+#             */
/*   Updated: 2023/05/21 18:49:08 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// mallocで新しい文字列を作成したものをstrlcatで繋ぐ
// *s1 と *s2 を連結した新しい文字列を返す
// ただし、割り当てに失敗した場合はNULLを返す

// 要件定義
// - s1の末尾にs2を連結する
// - s1末尾のヌル文字を消すか無視して連結しなくてはいけない
// - s1の範囲外へアクセスするような形で連結した場合と、s1とs2が重なっていた場合の動作は「未定義」なので、考慮しなくてよい
// - 戻り値はs1（連結後の値）

// ft_strlenはヌル文字を含まない文字列の長さを返す
// そのため、new_strのサイズはs1_len + s2_len + 1である

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	s1_len;
	size_t	s2_len;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	new_str = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!new_str)
		return (NULL);
	ft_strlcpy(new_str, s1, s1_len + 1);
	ft_strlcat(new_str, s2, s1_len + s2_len + 1);
	return (new_str);
}
