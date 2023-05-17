/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:26:21 by nkannan           #+#    #+#             */
/*   Updated: 2023/05/17 14:18:51 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// *bufの先頭からnバイト分をchで埋める
// 汎用ポインタ (void *) 型として渡されたbufを、
// unsigned char型にコピーしてから処理を行う

// 型がunsigned charなのは、汎用ポインタ型のbufに対して
// どのような型のポインタでも渡せるようにするため

// これは、memset関数のマニュアルに書かれている
// 以下のような記述に対応するためである
// "The memset() function
// writes len bytes of value c (converted to an unsigned char) to the string b."

// つまり、bufにはどのような型のポインタでも渡せるが、
// その型が何であれ、unsigned char型に変換してから処理を行う

void	*ft_memset(void *buf, int ch, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)buf;
	while (n--)
		*ptr++ = (unsigned char)ch;
	return (buf);
}
