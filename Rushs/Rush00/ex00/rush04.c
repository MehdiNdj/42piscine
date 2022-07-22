/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnedjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 19:45:00 by mnedjar           #+#    #+#             */
/*   Updated: 2022/07/10 20:38:25 by mnedjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	inside(int i, int j, int x, int y)
{
	if (i > 0 && i < x - 1 && j > 0 && j < y - 1)
	{	
		ft_putchar(' ');
	}
}

void	line(int i, int j, int x, int y)
{
	if ((j == 0 || j == y - 1) && i > 0 && i < x -1)
	{
		ft_putchar('B');
	}
}

void	colonne(int i, int j, int x, int y)
{
	if ((i == 0 || i == x - 1) && j > 0 && j < y - 1)
	{
		ft_putchar('B');
	}
}

void	corner(int i, int j, int x, int y)
{
	if (i == 0 && j == 0)
	{
		ft_putchar('A');
	}
	else if (i == x - 1 && j == 0)
	{
		ft_putchar('C');
	}
	else if (i == 0 && j == y - 1)
	{
		ft_putchar('C');
	}
	else if (i == x - 1 && j == y - 1)
	{
		ft_putchar('A');
	}
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < x && j < y)
	{
		line(i, j, x, y);
		colonne(i, j, x, y);
		inside(i, j, x, y);
		corner(i, j, x, y);
		i++;
		if (i == x)
		{
			ft_putchar('\n');
			j++;
			i = 0;
		}
	}
}	
