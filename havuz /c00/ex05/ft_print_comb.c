/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyuksel <eyuksel@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 05:26:37 by eyuksel           #+#    #+#             */
/*   Updated: 2022/02/13 05:48:02 by eyuksel          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	birler;
	char	onlar;
	char	yuzler;

	birler = '0';
	while (birler <= '7')
	{
		onlar = birler + 1;
		while (onlar <= '8')
		{
			yuzler = onlar + 1;
			while (yuzler <= '9')
			{
				write(1, &birler, 1);
				write(1, &onlar, 1);
				write(1, &yuzler, 1);
				if (birler != '7' || onlar != '8' || yuzler != '9')
					write(1, ", ", 2);
				yuzler++;
			}
			onlar++;
		}
		birler++;
	}
}
//
//int	main(void)
//{
//	ft_print_comb();
//}
