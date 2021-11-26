/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:28:43 by tel-bouh          #+#    #+#             */
/*   Updated: 2021/11/13 20:29:54 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	length;
	char	*sub;

	if (s == NULL)
		return (NULL);
	sub = (void *) 0;
	length = ft_strlen(s);
	if (start >= length)
		sub = (char *) malloc(sizeof(char) * (1));
	else if ((length - start) >= len)
		sub = (char *) malloc(sizeof(char) * (len + 1));
	else if ((length - start) < len && (length > start))
		sub = (char *) malloc(sizeof(char) * ((length - start) + 1));
	if (sub == (void *) 0)
		return ((void *) 0);
	i = 0;
	while (i < len && s[i] != '\0' && start < length)
	{
		sub[i++] = s[start];
		start++;
	}
	sub[i] = '\0';
	return (sub);
}
