/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 09:48:26 by nkannan           #+#    #+#             */
/*   Updated: 2023/06/17 11:45:16 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// # Explanation
// Allocate a block of size bytes from the heap memory,
// and the allocated block is zero-filled.
// If count or size is 0,
// calloc returns NULL or a unique pointer value
// that can be successfully passed to free later.

// ——About malloc——
// Integer overflow is not detected.
// In such cases, a memory block of incorrect size will be allocated.

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (!count || !size)
	{
		count = 1;
		size = 1;
	}
	if (count > SIZE_MAX / size)
		return (NULL);
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
