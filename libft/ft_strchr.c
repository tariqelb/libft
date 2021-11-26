/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 20:39:28 by tel-bouh          #+#    #+#             */
/*   Updated: 2021/11/13 20:25:09 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	len;

	len = ft_strlen(s) + 1;
	i = 0;
	while (i < len)
	{
		if ((char) c == s[i])
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
