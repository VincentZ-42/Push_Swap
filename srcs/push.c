/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzhao <vzhao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 13:46:25 by vzhao             #+#    #+#             */
/*   Updated: 2020/02/11 20:15:45 by vzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
** pa: push a
** - Moves 1st element in stack b to top of stack a
** - Do nothing if there stack b is empty.
** Args:
** t_stack **a: The head of a linked list (stack a)
** t_stack **b: The head of a linked list (stack b)
** Returns:
** Nothing, manipulates pointers
*/

void		pa(t_stack **a, t_stack **b)
{
	t_stack	*first_of_b;

	if (*b == NULL)
		return ;
	first_of_b = *b;
	*b = first_of_b->next;
	first_of_b->next = *a;
	*a = first_of_b;
}

/*
** pb: push b
** - Moves 1st element in stack a to top of stack b
** - Do nothing if there stack a is empty.
** Args:
** t_stack **a: The head of a linked list (stack a)
** t_stack **b: The head of a linked list (stack b)
** Returns:
** Nothing, manipulates pointers
*/

void		pb(t_stack **a, t_stack **b)
{
	t_stack	*first_of_a;

	if (*a == NULL)
		return ;
	first_of_a = *a;
	*a = first_of_a->next;
	first_of_a->next = *b;
	*b = first_of_a;
}
