/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 21:17:24 by tel-bouh          #+#    #+#             */
/*   Updated: 2021/11/13 20:28:58 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	long int	len;
	size_t		i;

	len = -1;
	i = 0;
	while (s[i])
	{
		if ((char) c == s[i])
			len = i;
		i++;
	}
	if (len != -1)
		return ((char *)s + len);
	if ((char) c == s[i])
		return ((char *)s + i);
	return (NULL);
}
