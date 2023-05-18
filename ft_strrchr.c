/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:29:42 by nkannan           #+#    #+#             */
/*   Updated: 2023/05/18 12:32:05 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// strの中に「最後に」文字cがあれば、その現れた位置へのポインタを返す
// もし見つからなければNULLを返す
// c = '\0'の場合は、strの最後の'\0'へのポインタを返す

char	*ft_strrchr(const char *str, int c)
{
	char	*last;

	last = NULL;
	while (*str)
	{
		if (*str == (char)c)
			last = (char *)str;
		str++;
	}
	if (*str == (char)c)
		return ((char *)str);
	return (last);
}
