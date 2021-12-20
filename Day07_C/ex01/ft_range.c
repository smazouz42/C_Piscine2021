/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazouz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 20:11:39 by smazouz           #+#    #+#             */
/*   Updated: 2021/07/13 17:51:33 by smazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*str;
	int	i;
	int	len;

	if (min >= max)
	{
		return (NULL);
	}
	i = 0;
	len = max - min;
	str = malloc(sizeof(int) * len);
	while (i < len)
	{
		str[i] = min + i;
		i++;
	}
	return (str);
}
