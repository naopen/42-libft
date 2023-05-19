/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 08:38:20 by nkannan           #+#    #+#             */
/*   Updated: 2023/05/20 08:47:34 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// - か + の符号1つとその直後に続く半角数字（ 0 から 9 ）で構成された「数字」をint型にして返す。
// 数字の前にある空白を除いて、左から順に数字以外（ヌル文字含む）が出現するまで変換し続ける。
// ——以下strtolについて——
// 変換時の数値がlong型をオーバーフローする際の挙動に注意すること。
// (オーバーフローが起きなかった場合、 strtol関数は 変換された値を返す。
// 正の方向にオーバーフローした場合には LONG_MAX が返り、 負の方向にオーバーフローした場合には LONG_MIN が返る。)

static int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || \
		c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int			sign;
	long long	num;

	sign = 1;
	num = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
		sign *= -1;
	if (*str == '-' || *str == '+')
		str++;
	while (ft_isdigit(*str))
		num = num * 10 + (*str++ - '0');
	if (num > 2147483647 && sign == 1)
		return (-1);
	if (num > 2147483648 && sign == -1)
		return (0);
	return (num * sign);
}
