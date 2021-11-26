/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:22:37 by tel-bouh          #+#    #+#             */
/*   Updated: 2021/11/13 20:25:56 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	index;

	if (s != NULL && f != NULL)
	{
		index = 0;
		while (s[index])
		{
			f(index, &s[index]);
			index++;
		}
	}
}
