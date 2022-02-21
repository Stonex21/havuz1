/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyuksel <eyuksel@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 07:04:08 by eyuksel           #+#    #+#             */
/*   Updated: 2022/02/18 22:53:49 by eyuksel          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main()
{
	int	x;
	int	y;

	x = 2;
	y = 3;
	ft_swap(&x, &y);
	printf("%d \n", x);
	printf("%d", y);
}*/
