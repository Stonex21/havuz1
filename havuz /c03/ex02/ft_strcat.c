/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyuksel <eyuksel@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 01:49:47 by eyuksel           #+#    #+#             */
/*   Updated: 2022/02/20 14:17:21 by eyuksel          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ftr_strcat(char *dest, char *src)
{
	int	i;
	int	a;

	i = 0;
	while (dest[i] != '\0')
		i++;
	a = 0;
	while (src[a] != '\0')
	{
		dest[i] = src[a];
		i++;
		a++;
	}
	dest[i] = '\0';
	return (dest);
}
