/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 17:31:39 by nkannan           #+#    #+#             */
/*   Updated: 2023/05/19 17:40:32 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// 検索バイト数lenより短い文字列haystackの中で、
// ヌル文字 ('\0') 終端の文字列needleが最初に現れる位置へのポインタを返す
// needleが空文字列の場合は、haystackを返し、
// needleがhaystackに現れない場合はNULLを返す
// '\0' の後に現れる文字は検索されない
// len=0の場合は、0を返す

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needle_len;

	if (!*needle)
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	i = 0;
	while (haystack[i] && i + needle_len <= len)
	{
		if (ft_strncmp(&haystack[i], needle, needle_len) == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
