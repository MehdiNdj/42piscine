/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnedjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 04:10:12 by mnedjar           #+#    #+#             */
/*   Updated: 2022/07/28 00:33:44 by mnedjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
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
