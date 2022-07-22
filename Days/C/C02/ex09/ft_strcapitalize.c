/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnedjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 20:02:24 by mnedjar           #+#    #+#             */
/*   Updated: 2022/07/19 23:55:12 by mnedjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while ((str[i] != '\0'))
	{
		if (((str[i] >= 65) && (str[i] <= 90)))
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	str = ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if ((i == 0) && (str[i] >= 97) && (str[i] <= 122))
		{
			str[0] = (str[0] - 32);
		}
		else if (((str[i] < 97) || (str[i] > 122))
			&& ((str[i] < 48) || (str[i] > 57))
			&& ((str[i + 1] >= 97 && (str[i + 1] <= 122))))
		{
			str[i + 1] = (str[i + 1] - 32);
			i++;
		}
		i++;
	}
	return (str);
}
