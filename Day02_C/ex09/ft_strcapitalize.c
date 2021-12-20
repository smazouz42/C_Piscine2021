/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_capitaliz.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazouz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 09:51:44 by smazouz           #+#    #+#             */
/*   Updated: 2021/06/30 18:17:52 by smazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
int	ft_is_lower(char s)
{	
	if (s >= 'a' && s <= 'z')
	{
		return (1);
	}
	return (0);
}

int	ft_is_upper(char s)
{
	if (s >= 'A' && s <= 'Z')
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (ft_is_upper(str[x]))
			str[x] = str[x] + 32;
		x++;
	}
	x = 0;
	if (ft_is_lower(str[x]))
		str[x] = str[x] - 32;
	while (str[x] != '\0')
	{
		if (ft_is_lower(str[x]))
		{
			if (!((str[x - 1] >= 'a' && str[x - 1] <= 'z')
					|| (str[x - 1] >= 'A' && str[x - 1] <= 'Z')
					|| (str[x - 1] >= '0' && str[x - 1] <= '9')))
				str[x] = str[x] - 32;
		}
		x++;
	}
	return (str);
}
