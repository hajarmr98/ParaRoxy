/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istancu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 22:46:38 by istancu           #+#    #+#             */
/*   Updated: 2020/12/06 17:03:08 by istancu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_x(int x)
{
	char	c;
	int		a;

	a = x / 10;
	c = '0' + a;
	write(1, &c, 1);
	a = x % 10;
	c = '0' + a;
	write(1, &c, 1);
	write(1, " ", 1);
}

void	ft_put_y(int x, int y)
{
	char	c;
	int		a;

	a = y / 10;
	c = '0' + a;
	write(1, &c, 1);
	a = y % 10;
	c = '0' + a;
	write(1, &c, 1);
	if (x != 98 || y != 99)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int		x;
	int		y;

	x = 0;
	y = 1;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_put_x(x);
			ft_put_y(x, y);
			y++;
		}
		x++;
	}
}
