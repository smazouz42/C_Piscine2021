/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazouz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 10:10:13 by smazouz           #+#    #+#             */
/*   Updated: 2021/07/04 13:05:22 by smazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	save;
	int	k;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		save = i;
		k = i;
		while (str[k] == to_find[j] && to_find[j] != '\0' && str[k] != '\0')
		{
			k++;
			j++;
		}
		if (to_find[j] == '\0')
		{
			return (str + save);
		}
		i++;
	}
	return (0);
}
