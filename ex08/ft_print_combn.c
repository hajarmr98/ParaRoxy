/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istancu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 21:36:49 by istancu           #+#    #+#             */
/*   Updated: 2020/12/06 17:25:45 by istancu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*numcomb(void)
{
	char x;

	x = '\0';
	return &x;
}

void	ft_print_combn(int n)
{
	char c;

	c = numcomb();
	if(n > 0)
	{	
		numcomb();		//recojo el char de numcomb para hacer un bucle del  0-9 con cada uno
		while(c <= '9')
		{	
			write(1, &c, 1);
			c++;
		}
		ft_print_combn(n - 1);	
	}
}
