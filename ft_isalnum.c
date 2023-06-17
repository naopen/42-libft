/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:13:49 by nkannan           #+#    #+#             */
/*   Updated: 2023/06/17 11:46:06 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// if c is a letter or a number, return 1. Otherwise, return 0.

int	ft_isalnum(int c)
{
	if ((c <= 'z' && c >= 'a')
		|| (c <= 'Z' && c >= 'A')
		|| (c <= '9' && c >= '0'))
		return (1);
	return (0);
}
