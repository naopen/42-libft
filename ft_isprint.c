/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:22:00 by nkannan           #+#    #+#             */
/*   Updated: 2023/06/17 11:46:50 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// If c is a printable character, return 1. Otherwise, return 0.

int	ft_isprint(int c)
{
	if (c <= 126 && c >= 32)
		return (1);
	return (0);
}
