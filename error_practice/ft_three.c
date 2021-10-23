/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_three.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 18:03:27 by rvalton           #+#    #+#             */
/*   Updated: 2021/10/23 15:25:16 by rvalton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_three(t_elem **a, t_estr **res)
{
	int		*tab;

	tab = ft_list_to_tab(*a);
	if (tab[0] > tab[1] && tab[0] < tab[2] && tab[1] < tab[2])
		*a = ft_swap(*a, 'a', res);
	else if (tab[0] > tab[1] && tab[1] > tab[2])
	{
		*a = ft_swap(*a, 'a', res);
		*a = ft_reverse_rotate(*a, 'a', res);
	}
	else if (tab[0] > tab[1] && tab[0] > tab[2] && tab[1] < tab[2])
		*a = ft_rotate(*a, 'a', res);
	else if (tab[0] < tab[1] && tab[0] > tab[2] && tab[1] > tab[2])
	{
		*a = ft_swap(*a, 'a', res);
		*a = ft_rotate(*a, 'a', res);
	}
	else if (tab[0] < tab[1] && tab[0] > tab[2] && tab[1] > tab[2])
		*a = ft_reverse_rotate(*a, 'a', res);
	free(tab);
}
