/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:06:38 by tel-bouh          #+#    #+#             */
/*   Updated: 2021/11/13 20:29:25 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_trimchar(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static char	*ft_asign(char *buff, const char *s, int i, int j)
{
	int	k;

	buff = (char *) malloc(sizeof(char) * ((j - i) + 1));
	if (buff == NULL)
		return (NULL);
	k = 0;
	while (i < j)
	{
		buff[k] = s[i];
		i++;
		k++;
	}
	buff[k] = '\0';
	return (buff);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	index_i;
	size_t	index_j;
	char	*buff;

	if (s1 == NULL || set == NULL)
		return (NULL);
	buff = NULL;
	index_i = 0;
	index_j = ft_strlen(s1);
	while (s1[index_i] && ft_trimchar(s1[index_i], set))
		index_i++;
	if (index_i == index_j)
	{
		buff = (char *) malloc(sizeof(char) * 1);
		if (buff == NULL)
			return (NULL);
		buff[0] = '\0';
		return (buff);
	}
	while (index_j && ft_trimchar(s1[index_j - 1], set))
		index_j--;
	buff = ft_asign(buff, s1, index_i, index_j);
	return (buff);
}
