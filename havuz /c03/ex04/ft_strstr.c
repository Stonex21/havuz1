/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyuksel <eyuksel@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 17:32:39 by eyuksel           #+#    #+#             */
/*   Updated: 2022/02/20 18:43:45 by eyuksel          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	if (to_find[a] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + a] == to_find[a] && str[i + a] != '\0')
			a++;
		if (to_find[a] == '\0')
			return (str + i);
		i++;
		a = 0;
	}
	return (0);
}
/*
int	main()
{
	char str[] = "42 1337 Network 2021 piscine Benguerir Khouribga";
	char find[] = "piscine";
	printf("%s", ft_strstr(str, find));
}*/
