/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeaulat <abeaulat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 12:58:25 by abeaulat          #+#    #+#             */
/*   Updated: 2022/07/21 11:30:51 by abeaulat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char e)
{
	write(1, &e, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
		while (str[i])
		{
			ft_putchar(str[i]);
			i++;
		}
}
