/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putcolor.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pascal <pascal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 17:46:14 by pascal            #+#    #+#             */
/*   Updated: 2020/12/20 17:48:17 by pascal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putcolor(int i)
{
	if (i == 0)
		ft_putstr("\033[0m");
	else if (i == 1)
		ft_putstr("\033[33m");
	else if (i == 2)
		ft_putstr("\033[35m");
	else if (i == 3)
		ft_putstr("\033[38m");
	else if (i == 4)
		ft_putstr("\033[36m");
	else if (i == 5)
		ft_putstr("\033[37m");
}
