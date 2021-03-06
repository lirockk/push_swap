/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 23:37:27 by ademurge          #+#    #+#             */
/*   Updated: 2022/06/21 13:24:44 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	is_sorted(t_list *lst)
{
	while (lst && lst->next)
	{
		if (lst->nb > (lst->next)->nb)
			return (0);
		lst = lst->next;
	}
	return (1);
}

int	is_in_range(t_list *lst, int max, int nb_data)
{
	if (nb_data == NB)
	{
		while (lst)
		{
			if (lst->nb < max)
				return (1);
			lst = lst->next;
		}
	}
	else if (nb_data == DATA)
	{
		while (lst)
		{
			if (lst->data < max)
				return (1);
			lst = lst->next;
		}
	}
	return (0);
}

void	push_split2(t_stack *stacks)
{
	if (ft_lstlast(stacks->a)->data < stacks->a->data
		&& ft_lstlast(stacks->a) > ft_lstlast(stacks->b)
		&& stacks->b->data < ft_lstlast(stacks->b)->data)
		ft_double(stacks, REVERSE);
	else
		ft_reverse_rot(&stacks->b, B, SIMPLE);
}

int	find_chunk(t_stack *stacks)
{
	int	tab[4];
	int	div;
	int	i;
	int	size;

	i = 0;
	div = 1;
	size = stacks->size;
	if (size % 2 != 0)
		size--;
	while (i < 4 && div <= size)
		if (size % ++div == 0)
			tab[i++] = div;
	if (size <= 200 || i < 4)
		return (tab[1] * tab[2]);
	else
		return (tab[2] * tab[3]);
}
