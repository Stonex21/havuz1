/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyuksel <eyuksel@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 14:36:06 by eyuksel           #+#    #+#             */
/*   Updated: 2022/02/20 14:41:56 by eyuksel          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	a;

	i = 0;
	a = 0;
	while (dest[i] != '\0')
	{
		dest[i + a] = src [a];
		a++;
	}
	dest[i + a] = '\0';
	return (dest);
}
