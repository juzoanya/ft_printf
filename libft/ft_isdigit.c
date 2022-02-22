/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juzoanya <juzoanya@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 03:40:25 by juzoanya          #+#    #+#             */
/*   Updated: 2021/12/12 19:54:56 by juzoanya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
/*
int main(void)
{
	char    c;
	int     result;

	c = '5';
	result = ft_isdigit(c);
	printf("When %c is passed, return value is %d\n", c, result);

	c = 'W';
	result = ft_isdigit(c);
	printf("When %c is passed, return value is %d\n", c, result);

	c = 'h';
	result = ft_isdigit(c);
	printf("When %c is passed, return value is %d\n", c, result);

	c = '*';
	result = ft_isdigit(c);
	printf("When %c is passed, return value is %d\n", c, result);
}
*/