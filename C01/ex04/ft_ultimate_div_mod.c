/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeaulat <abeaulat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 12:52:19 by abeaulat          #+#    #+#             */
/*   Updated: 2022/07/21 11:01:57 by abeaulat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	fr_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	if (*b != 0)
	{
		div = *a / *b;
		mod = *a % *b;
		*a = div;
		*b = mod;
	}
}

int	main(void)
{
	void	fr_ultimate_div_mod(int *a, int *b);
}
