/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_five.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 14:46:41 by rvalton           #+#    #+#             */
/*   Updated: 2021/10/23 16:48:36 by rvalton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_five_first_ret(t_elem **a, t_elem **b, t_estr **res)
{
	int		*atab;
	int		i;

	atab = ft_list_to_tab(*a);
	i = 0;
	if ((*b)->val > atab[2])
		*a = ft_push_x_to_y(b, *a, 'a', res);
	else
	{
		while ((*a)->val < (*b)->val)
			*a = ft_rotate(*a, 'a', res);
		*a = ft_push_x_to_y(b, *a, 'a', res);
		free(atab);
		atab = ft_list_to_tab(*a);
		while (atab[3] > (*b)->val)
		{
			*a = ft_reverse_rotate(*a, 'a' res);
			free(atab);
			atab = ft_list_to_tab(*a);
		}
		*a = ft_push_x_to_y(b, *a, 'a', res);
	}
}

void	ft_five(t_elem **a, t_elem **b, t_estr **res)
{
	int		*tab;
	int		set;
	int		*btab;

	tab = ft_list_to_tab(*a);
	tab = ft_sort(tab, 5);
	*b = ft_push_x_to_y(a, *b, 'b', res);
	*b = ft_push_x_to_y(a, *b, 'b', res);
	if ((*b)->val < (*b)->nxt->val)
		*b = ft_swap(*b, 'b', res);
	ft_three(a, res);
	ft_five_first_ret(a, b, res);
	while ((*a)->val != tab[0])
		*a = ft_rotate(*a, 'a', res);
}
