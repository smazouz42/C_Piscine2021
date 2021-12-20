/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazouz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 17:46:05 by smazouz           #+#    #+#             */
/*   Updated: 2021/07/10 09:47:37 by smazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(int argc, char *argv[])
{
	int		x;
	int		j;
	char	*temp;

	j = 1;
	while (j < argc)
	{
		x = j + 1;
		while (x < argc)
		{
			if (ft_strcmp(argv[j], argv[x]) > 0)
			{
				temp = argv[j];
				argv[j] = argv[x];
				argv[x] = temp;
			}
			x++;
		}
		j++;
	}
	x = 0;
	while (++x < argc)
		ft_putstr(argv[x]), ft_putchar('\n');
	return (0);
}
