/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:17:56 by tel-bouh          #+#    #+#             */
/*   Updated: 2021/11/14 22:35:50 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_put_tabi(char *tab, int n, int index, int fd)
{
	while (n)
	{
		tab[index++] = (n % 10) + 48;
		n /= 10;
	}
	while (index--)
		write(fd, &tab[index], 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	char	s[10];

	i = 0;
	if (fd >= 0)
	{
		if (n == 0)
			write(fd, "0", 1);
		else
		{
			if (n < 0)
			{
				write(fd, "-", 1);
				if (n == -2147483648)
				{
					s[i++] = 56;
					n /= 10;
				}
				n *= -1;
			}
			ft_put_tabi(s, n, i, fd);
		}
	}
}
