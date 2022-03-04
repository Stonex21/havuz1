/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyuksel <eyuksel@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 18:52:19 by eyuksel           #+#    #+#             */
/*   Updated: 2022/02/23 18:56:13 by eyuksel          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power > 1)
        return(nb * ft_recursive_power(nb,(power -1)));
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (result);
}
#include <stdio.h>
int main()
{
    int nb;
    nb=5;
    printf("%d",ft_recursive_power(5,2));
    
}
