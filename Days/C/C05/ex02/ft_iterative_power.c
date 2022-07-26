/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnedjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 04:10:12 by mnedjar           #+#    #+#             */
/*   Updated: 2022/07/26 04:22:27 by mnedjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
	int	i;
	int	ret;

	i = power;
	ret = 1;
	if (power < 0)
		return (0);
	while (i > 0)
	{
		ret = ret * nb;
		i--;
	}
	return (ret);
}

#include <stdio.h>
#include <stdlib.h>

int     main(int argc, char **argv)
{
        if (argc != 3)
                return (0);
        int     ret = ft_iterative_power(atoi(argv[1]), atoi(argv[2]));
        printf("%d\n", ret);
}
