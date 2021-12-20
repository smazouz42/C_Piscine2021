/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazouz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 17:15:06 by smazouz           #+#    #+#             */
/*   Updated: 2021/07/10 09:46:44 by smazouz          ###   ########.fr       */
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

	x = argc - 1;
	while (1 < argc)
	{
		j = 0;
		while (argv[x][j] != '\0')
		{
			ft_putchar(argv[x][j]);
			j++;
		}
		ft_putchar('\n');
		x--;
		argc--;
	}
	return (0);
}
