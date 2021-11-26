/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:53:25 by tel-bouh          #+#    #+#             */
/*   Updated: 2021/11/13 20:28:37 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	index;
	size_t	index_j;

	if (*needle == '\0')
		return ((char *)haystack);
	index = 0;
	while (haystack[index] && index < len)
	{
		index_j = 0;
		while (haystack[index + index_j] == needle[index_j])
		{
			index_j++;
			if (index + index_j > len)
				return (0);
			if (needle[index_j] == '\0')
				return (((char *)haystack) + index);
		}
		index++;
	}
	return (0);
}
