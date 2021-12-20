/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazouz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 15:36:15 by smazouz           #+#    #+#             */
/*   Updated: 2021/07/14 21:07:44 by smazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include<stdlib.h>
#include "ft_stock_str.h"
char	*ft_strdup(char *src)
{
	int		s;
	char	*dest;
	int		i;

	i = 0;
	s = 0;
	while (src[s] != '\0')
		s++;
	dest = malloc(sizeof(char) * (s + 1));
	while (i < s)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (str[x])
	{
		x++;
	}
	return (x);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*p;
	int					x;

	x = 0 ;
	p = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (p != NULL)
	{
		while (ac > x)
		{
			p[x].size = ft_strlen(av[x]);
			p[x].str = av[x];
			p[x].copy = ft_strdup(av[x]);
			x++;
		}
		p[x].str = 0;
		return (p);
	}
	else
		return (NULL);
}
