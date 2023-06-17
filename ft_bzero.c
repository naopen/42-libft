/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:48:03 by nkannan           #+#    #+#             */
/*   Updated: 2023/06/17 11:44:49 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Fill the first n bytes of the region
// starting from the byte sequence *s with '\0'.
// Equivalent to memset with the second argument being '\0'.

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
		*ptr++ = '\0';
}
