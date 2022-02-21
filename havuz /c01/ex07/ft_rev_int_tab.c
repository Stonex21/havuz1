/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyuksel <eyuksel@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:37:09 by eyuksel           #+#    #+#             */
/*   Updated: 2022/02/19 17:37:27 by eyuksel          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	a;

	i = 0;
	while (i < (size / 2))
	{
		a = tab[i];
		tab [i] = tab [size -1 - i];
		tab [size -1 - i] = a;
		i++;
	}
}
/*
int	main()
{
	int	tab[6] = {0, 1, 2, 3, 4, 5 };
	int size = 6;

	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d, %d",tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
	return (0);
}*/
