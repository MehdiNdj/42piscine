/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnedjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 03:11:36 by mnedjar           #+#    #+#             */
/*   Updated: 2022/07/26 03:21:58 by mnedjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return(0);
	return (nb * ft_recursive_factorial(nb - 1));
}

#include <stdio.h>
#include <stdlib.h>

int     main(int argc, char **argv)
{
        if (argc != 2)
                return (0);
        int     ret = ft_recursive_factorial(atoi(argv[1]));
        printf("%d\n", ret);
}
