/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzhao <vzhao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 13:59:30 by vzhao             #+#    #+#             */
/*   Updated: 2020/02/05 14:07:53 by vzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/* rrb: reverse rotate b 
** - Shift down all elements of stack b by 1 (last element becomes 1st)
** - Do nothing if there is only one or no elements.
** Args:
** t_stack **a: The head of a linked list (stack a)
** t_stack **b: The head of a linked list (stack b)
** Returns:
** Nothing, manipulates pointers
*/

void       rrb(t_stack **a, t_stack **b)
{
    t_stack *last_of_b;
    t_stack *second_last_of_b;

    if (*a == NULL || (*a)->next == NULL)
        return ;
    last_of_b = *b;
    while (last_of_b->next != NULL)
    {
        if (last_of_b->next->next == NULL)
            second_last_of_b = last_of_b;
        last_of_b = last_of_b->next; 
    }
    last_of_b->next = *b;
    *b = last_of_b;
    second_last_of_b->next = NULL;
}