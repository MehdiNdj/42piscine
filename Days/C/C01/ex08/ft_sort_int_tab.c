/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnedjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 21:38:34 by mnedjar           #+#    #+#             */
/*   Updated: 2022/07/13 15:50:55 by mnedjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	vartmp;
	int	varbool;

	varbool = 0;
	i = 0;
	while (varbool == 0)
	{
		varbool = 1;
		j = 0;
		while (j < size - 1 - i)
		{
			if (tab[j] > tab[j + 1])
			{
				vartmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = vartmp;
				varbool = 0;
			}
			j++;
		}
		i++;
	}
}
