/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ins_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:21:04 by ademurge          #+#    #+#             */
/*   Updated: 2022/06/02 00:28:47 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker_bonus.h"

void	print_stacks(t_stack *stacks)
{
	int	i;

	i = 1;
	printf("\n***** Stack a : *****\n");
	while (stacks->a)
	{
		printf("pos %d : %d\n", i++, stacks->a->data);
		stacks->a = stacks->a->next;
	}
	i = 1;
	printf("\n***** Stack b : *****\n");
	while (stacks->b)
	{
		printf("pos %d : %d\n", i++, stacks->b->data);
		stacks->b = stacks->b->next;
	}
}

void	ft_print_ins(char *s, char name)
{
	write (1, s, ft_strlen(s));
	write (1, &name, 1);
	write (1, "\n", 1);
}