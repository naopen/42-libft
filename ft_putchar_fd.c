/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 15:22:31 by nkannan           #+#    #+#             */
/*   Updated: 2023/06/17 11:52:33 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Outputs the character ’c’ to the given file descriptor.

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
