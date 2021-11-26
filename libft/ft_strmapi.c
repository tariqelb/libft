/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:52:32 by tel-bouh          #+#    #+#             */
/*   Updated: 2021/11/13 20:27:59 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len;
	char			*map;

	if (s == NULL || f == NULL)
		return (NULL);
	map = NULL;
	len = ft_strlen(s);
	map = (char *) malloc(sizeof(char) * (len + 1));
	if (map == NULL)
		return (NULL);
	len = 0;
	while (s[len])
	{
		map[len] = f(len, (char) s[len]);
		len++;
	}
	map[len] = 0;
	return (map);
}
