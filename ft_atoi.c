/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 08:38:20 by nkannan           #+#    #+#             */
/*   Updated: 2023/05/20 22:34:43 by nkannan          ###   ########.fr       */
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
	if (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

// numがオーバーフローするかどうかを判定する関数
static int	ft_is_overflow(unsigned long long num, int sign, unsigned int digit)
{
	if (num > LONG_MAX / 10 || (num == LONG_MAX / 10 && digit > LONG_MAX % 10))
	{
		if (sign == 1)
			return (1);
		else
			return (-1);
	}
	return (0);
}

static long	ft_strtol(const char *restrict str, char **restrict endptr)
{
	unsigned long long	num;
	int					sign;

	num = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
		sign *= -1;
	if (*str == '-' || *str == '+')
		str++;
	while (ft_isdigit(*str))
	{
		if (ft_is_overflow(num, sign, *str - '0'))
		{
			if (sign == 1)
				return (LONG_MAX);
			else
				return (LONG_MIN);
		}
		num = num * 10 + (*str++ - '0');
	}
	if (endptr)
		*endptr = (char *)str;
	return (num * sign);
}

int	ft_atoi(const char *str)
{
	return ((int)ft_strtol(str, NULL));
}
