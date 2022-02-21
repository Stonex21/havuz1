/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyuksel <eyuksel@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 07:07:46 by eyuksel           #+#    #+#             */
/*   Updated: 2022/02/19 02:07:59 by eyuksel          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}	
/*
void    ft_div_mod(int a, int b, int *div, int *mod);

int        main(void)
{
    int a  = 5;
    int b  = 2;
    int *div = &a;
    int *mod = &b;

    ft_div_mod(a, b, div, mod);
    
    printf("%d",*div);
    printf("\n%d",*mod);
}
 */
