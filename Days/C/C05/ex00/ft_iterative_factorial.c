/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnedjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 02:24:50 by mnedjar           #+#    #+#             */
/*   Updated: 2022/07/26 02:56:08 by mnedjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	ret;
	
	i = 1;
	ret = 1;
	
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		ret = ret * i;
		i++;
	}
	return (ret);
}

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	int	ret = ft_iterative_factorial(atoi(argv[1]));
	printf("%d\n", ret);
}
