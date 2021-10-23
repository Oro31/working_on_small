/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_small.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 14:46:27 by rvalton           #+#    #+#             */
/*   Updated: 2021/10/23 15:27:17 by rvalton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_small(t_elem **a, t_elem **b, t_estr **res)
{
	int		*tab;
	int		i;

	i = ft_size_list(*a);
	if (i == 2)
	{
		tab = ft_list_to_tab(*a);
		if (tab[0] > tab[1])
			*a = ft_swap(*a, 'a', res);
			ft_print_str("sa");
	}
	else if (i == 3)
		ft_three(a);
	else if (i == 4)
		ft_four(a, b);
	else if (i == 5)
		ft_five(a, b);
}
