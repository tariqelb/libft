/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:28:11 by tel-bouh          #+#    #+#             */
/*   Updated: 2021/11/15 13:51:06 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*buff;
	size_t	i;

	buff = NULL;
	buff = malloc(size * count);
	if (buff == NULL)
		return (NULL);
	i = 0;
	while (i < (count * size))
	{
		((char *)buff)[i] = 0;
		i++;
	}
	return (buff);
}
