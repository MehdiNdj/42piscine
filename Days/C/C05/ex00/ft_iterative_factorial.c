/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnedjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 02:24:50 by mnedjar           #+#    #+#             */
/*   Updated: 2022/07/28 00:35:48 by mnedjar          ###   ########.fr       */
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
