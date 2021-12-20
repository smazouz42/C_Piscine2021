/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ift_ultimate_range.c                                :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: smazouz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 09:38:18 by smazouz           #+#    #+#             */
/*   Updated: 2021/07/13 17:52:22 by smazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include<unistd.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len = max - min;
	i = 0;
	*range = malloc(sizeof(int) * len);
	while (i < len)
	{
		range[0][i] = min + i;
		i++;
	}
	return (len);
}
