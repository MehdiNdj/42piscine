/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnedjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 19:36:48 by mnedjar           #+#    #+#             */
/*   Updated: 2022/07/27 19:50:49 by mnedjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_prime(int nb)
{
        int     n;

        n = 2;
        if (nb < 2)
                return (0);
        while (n * n <= nb)
        {
                if (nb % n == 0)
                        return (0);
        n++;
        }
        return (1);
}

int ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return(2);
	while (ft_is_prime(nb) != 1)
		nb++;
	return(nb);
}

#include <stdio.h>
#include <stdlib.h>

int     main(int argc, char **argv)
{
        if (argc != 2)
                return (0);
        int     ret = ft_find_next_prime(atoi(argv[1]));
        printf("%d\n", ret);
}
