/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzhao <vzhao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 11:49:17 by vzhao             #+#    #+#             */
/*   Updated: 2020/02/05 12:15:34 by vzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/* pa: push a 
** - Moves 1st element in stack b to top of stack a
** - Do nothing if there stack b is empty.
** Args:
** t_stack **a: The head of a linked list (stack a)
** t_stack **b: The head of a linked list (stack b)
** Returns:
** Nothing, manipulates pointers
*/

void    pa(t_stack **a, t_stack **b)
{
    t_stack *first_of_b;

    if (*b == NULL)
        return ;
    first_of_b = *b;
    *b = first_of_b->next;
    first_of_b->next = *a;
    *a = first_of_b;
}