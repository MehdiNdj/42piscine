/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnedjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:39:11 by mnedjar           #+#    #+#             */
/*   Updated: 2022/07/25 04:47:34 by mnedjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	ret;

	ret = ft_strlen(src) + ft_strlen(dest);
	i = 0;
	j = 0;
	if (size == 0)
		return (0);
	if (size != 0)
	{	
		while (dest[i] != '\0' && i < size - 1)
			i++;
		while (src[j] != '\0' && i < size - 1)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
	}
	if (i != size)
		dest[i] = '\0';
	return (ret);
}
