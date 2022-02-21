/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyuksel <eyuksel@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 05:54:32 by eyuksel           #+#    #+#             */
/*   Updated: 2022/02/17 01:20:52 by eyuksel          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	dnstr(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			dnstr((a / 10) + '0');
			dnstr((a % 10) + '0');
			write(1, " ", 1);
			dnstr((b / 10) + '0');
			dnstr((b % 10) + '0');
			if (a != 98 || b != 99)
				write(1, ", ", 2);
			b++;
		}
	a++;
	}
}
//
//int	main(void)
//{
//	ft_print_comb2();
//	return (0);
//}
