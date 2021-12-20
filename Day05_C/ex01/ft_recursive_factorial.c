/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazouz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 10:13:37 by smazouz           #+#    #+#             */
/*   Updated: 2021/07/11 09:34:11 by smazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
int	ft_recursive_factorial(int nb)
{
	int	x;

	x = 0;
	if (nb >= 0 )
	{
		if (nb == 0 || nb == 1)
			return (1);
		if (nb > x)
			return (nb * ft_recursive_factorial(nb - 1));
	}
	return (0);
}
