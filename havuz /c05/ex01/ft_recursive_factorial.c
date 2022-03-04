/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyuksel <eyuksel@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 18:40:22 by eyuksel           #+#    #+#             */
/*   Updated: 2022/02/23 18:44:20 by eyuksel          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb > 0)
	{
        nb *=  ft_recursive_factorial(nb - 1);
	}
	if (nb <= 0)
		return (1);
	return (nb);
}
#include <stdio.h>
int main()
{
    int nb;
    nb=5;
    printf("%d",ft_recursive_factorial(nb));
    
}
