/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazouz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 17:33:44 by smazouz           #+#    #+#             */
/*   Updated: 2021/07/15 10:55:11 by smazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include "ft_stock_str.h"
#include <stdlib.h>
void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	n;

	n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putchar((n % 10) + 48);
	}
	else
		ft_putchar(n + 48);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}	
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	x;

	x = 0;
	while (par[x].str != '\0')
	{
		ft_putstr(par[x].str);
		write (1, "\n", 1);
		ft_putnbr(par[x].size);
		write (1, "\n", 1);
		ft_putstr(par[x].copy);
		write (1, "\n", 1);
		x++;
	}
}
