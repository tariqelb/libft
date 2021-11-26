/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 19:57:14 by tel-bouh          #+#    #+#             */
/*   Updated: 2021/11/15 13:26:45 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	j = 0;
	dst_len = ft_strlen(dst);
	if (dstsize < dst_len)
		return (src_len + dstsize);
	i = dst_len;
	while (i + 1 < dstsize && src[j])
		dst[i++] = (char) src[j++];
	dst[i] = '\0';
	return (src_len + dst_len);
}
