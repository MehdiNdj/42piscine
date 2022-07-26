/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnedjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 04:26:20 by mnedjar           #+#    #+#             */
/*   Updated: 2022/07/26 05:22:53 by mnedjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return(0);
	else if (power < 1)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

#include <stdio.h>
#include <stdlib.h>

int     main(int argc, char **argv)
{
        if (argc != 3)
                return (0);
        int     ret = ft_recursive_power(atoi(argv[1]), atoi(argv[2]));
        printf("%d\n", ret);
}
