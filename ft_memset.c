/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:26:21 by nkannan           #+#    #+#             */
/*   Updated: 2023/06/17 11:52:25 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Fill the first n bytes of the memory area
// pointed to by buf with the constant byte ch.
// Equivalent to memset with the second argument being ch.
// Returns the pointer buf.

void	*ft_memset(void *buf, int ch, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)buf;
	while (n--)
		*ptr++ = (unsigned char)ch;
	return (buf);
}
