/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyuksel <eyuksel@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 05:05:23 by eyuksel           #+#    #+#             */
/*   Updated: 2022/02/13 05:18:40 by eyuksel          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
		write(1, "P", 1);
	if (n < 0)
		write(1, "N", 1);
}
//
//int	main(void)
//{
//	ft_is_negative(-42);
//}
