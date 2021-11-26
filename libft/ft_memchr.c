/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:59:57 by tel-bouh          #+#    #+#             */
/*   Updated: 2021/11/13 20:21:00 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			index;
	unsigned char	*dup;

	dup = (unsigned char *) s;
	index = 0;
	while (index < n)
	{
		if (dup[index] == (unsigned char) c)
			return (dup + index);
		index++;
	}
	return (NULL);
}
