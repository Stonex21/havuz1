/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyuksel <eyuksel@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 17:19:02 by eyuksel           #+#    #+#             */
/*   Updated: 2022/02/19 17:35:57 by eyuksel          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	a;

	while (size >= 0)
	{
		i = 0;
		while (i < size -1)
		{
			if (tab[i] > tab [i +1])
			{
				a = tab [i];
				tab[i] = tab[i + 1];
				tab[i + 1] = a;
			}
			i++;
		}
		size--;
	}
}
