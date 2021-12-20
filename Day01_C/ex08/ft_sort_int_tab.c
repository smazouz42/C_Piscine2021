/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazouz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 11:08:18 by smazouz           #+#    #+#             */
/*   Updated: 2021/06/27 12:26:40 by smazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	x;
	int	y;
	int	b;
	int	h;

	x = 0;
	h = size - 1;
	while (x < h)
	{
		y = x + 1;
		while (y < h)
		{
			if (tab[x] > tab[y])
			{
				b = tab[x];
				tab[x] = tab[y];
				tab[y] = b;
			}
			y++;
		}
		x++;
	}
}
