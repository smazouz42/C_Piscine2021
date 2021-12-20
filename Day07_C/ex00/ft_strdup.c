/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazouz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:13:02 by smazouz           #+#    #+#             */
/*   Updated: 2021/07/13 17:50:43 by smazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include <stdlib.h>

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
