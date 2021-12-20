/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazouz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 15:59:44 by smazouz           #+#    #+#             */
/*   Updated: 2021/07/10 11:27:46 by smazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	j;
	int	x;

	x = 1;
	while (x < argc)
	{
		j = 0;
		while (argv[x][j] != '\0')
		{
			ft_putchar(argv[x][j]);
			j++;
		}
		ft_putchar('\n');
		x++;
	}
	return (0);
}
