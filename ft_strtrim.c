/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 14:13:41 by nkannan           #+#    #+#             */
/*   Updated: 2023/05/21 14:17:37 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// # 説明
// 文字列 *s1 の先頭と末尾から *set で指定された文字が削除されたコピーを
// mallocで確保したメモリに作り、返す。
// ただし、割り当てに失敗した場合はNULLを返す。

// # 例
// s1="1234AAA22331122”
// set="1234"
// 戻り値="AAA"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	i;
	size_t	j;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	len = ft_strlen(s1);
	while (len > i && ft_strchr(set, s1[len - 1]))
		len--;
	trim = (char *)malloc(sizeof(char) * (len - i + 1));
	if (!trim)
		return (NULL);
	j = 0;
	while (i < len)
		trim[j++] = s1[i++];
	trim[j] = '\0';
	return (trim);
}
