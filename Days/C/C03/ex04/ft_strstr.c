/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnedjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 00:39:26 by mnedjar           #+#    #+#             */
/*   Updated: 2022/07/25 04:42:24 by mnedjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (*str == 0 || *to_find == 0)
		return (str);
	while (*str)
	{
		i = 0;
		while (str[i] == to_find[i] && to_find[i] != '\0'
			&& str[i] != '\0')
		{
			i++;
		}
		if (to_find[i] == '\0')
		{
			break ;
		}
		str++;
	}
	return (str);
}
