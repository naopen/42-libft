/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 16:31:46 by nkannan           #+#    #+#             */
/*   Updated: 2023/05/21 16:52:29 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// mallocを使用して割り当て、文字列 *str の各文字に関数 f を適用した新しい文字列を作成する。
// f は文字列内の文字のインデックスを引数に取り、新しい文字を返す。
// f の割当が失敗した場合は NULL を返す。

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	char			*new_str;
	unsigned int	i;

	if (!str || !f)
		return (NULL);
	new_str = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!new_str)
		return (NULL);
	i = 0;
	while (str[i])
	{
		new_str[i] = f(i, str[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
