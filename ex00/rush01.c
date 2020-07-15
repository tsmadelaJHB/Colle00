/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsmadela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 10:45:04 by tsmadela          #+#    #+#             */
/*   Updated: 2020/07/15 11:44:51 by tsmadela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(int c);

void	rush(int x, int y)
{
		int x1;
		int y1;

		y1 = 0;
		while(y1 < y)
		{
			x1 = 0;
			while(x1 < x)
			{
				if((x1 == 0 && y1 == 0) || (y1 + 1 == y && x1 + 1 == x && y != 1))
					ft_putchar('/');
				else if((y1 + 1 == y && x1 == 0) || (y1 ==  0 && x1 + 1 == x))
					ft_putchar('\\');
				else if((x1 > 0 && x1 < x  && y1 == 0) || (x1 > 0 && x1 < x && y1 + 1 == y))
					ft_putchar('*');
				else if((y1 > 0 && y1 < y && x1 == 0) || (y1 > 0 && y1 < y && x1 + 1 == x))
					ft_putchar('*');
				else
				   	ft_putchar(' ');
				x1++;
			}
			ft_putchar('\n');
			y1++;
		}
}
