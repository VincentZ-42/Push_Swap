/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzhao <vzhao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 13:59:26 by vzhao             #+#    #+#             */
/*   Updated: 2020/02/05 14:06:23 by vzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/* rra: reverse rotate a 
** - Shift down all elements of stack a by 1 (last element becomes 1st)
** - Do nothing if there is only one or no elements.
** Args:
** t_stack **a: The head of a linked list (stack a)
** t_stack **b: The head of a linked list (stack b)
** Returns:
** Nothing, manipulates pointers
*/

void       rra(t_stack **a, t_stack **b)
{
    t_stack *last_of_a;
    t_stack *second_last_of_a;

    if (*a == NULL || (*a)->next == NULL)
        return ;
    last_of_a = *a;
    while (last_of_a->next != NULL)
    {
        if (last_of_a->next->next == NULL)
            second_last_of_a = last_of_a;
        last_of_a = last_of_a->next; 
    }
    last_of_a->next = *a;
    *a = last_of_a;
    second_last_of_a->next = NULL;
}