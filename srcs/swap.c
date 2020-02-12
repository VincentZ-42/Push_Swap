/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzhao <vzhao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 20:40:39 by vzhao             #+#    #+#             */
/*   Updated: 2020/02/11 20:40:41 by vzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
** sa: swap a
** - swap the first 2 elements at the top of stack a.
** - Do nothing if there is only one or no elements.
** Args:
** t_stack **a: The head of a linked list (stack a)
** t_stack **b: The head of a linked list (stack b)
** Returns:
** Nothing, manipulates pointers
*/

void		sa(t_stack **a, t_stack **b)
{
	t_stack *first;
	t_stack *second;

	if (!a || !(*a)->next)
		return ;
	if (b)
		;
	first = *a;
	second = (*a)->next;
	*a = second;
	first->next = second->next;
	second->next = first;
}

/*
** sb: swap b
** - swap the first 2 elements at the top of stack b.
** - Do nothing if there is only one or no elements.
** Args:
** t_stack **a: The head of a linked list (stack a)
** t_stack **b: The head of a linked list (stack b)
** Returns:
** Nothing, manipulates pointers
*/

void		sb(t_stack **a, t_stack **b)
{
	t_stack *first;
	t_stack *second;

	if (!(*b) || !(*b)->next)
		return ;
	if (a)
		;
	first = *b;
	second = (*b)->next;
	*b = second;
	first->next = second->next;
	second->next = first;
}

/*
** ss: swap a and b
** - perform sa and sb at the same time
** Args:
** t_stack **a: The head of a linked list (stack a)
** t_stack **b: The head of a linked list (stack b)
** Returns:
** Nothing, manipulates pointers
*/

void		ss(t_stack **a, t_stack **b)
{
	sa(a, b);
	sb(a, b);
}
