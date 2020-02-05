/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzhao <vzhao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 12:06:09 by vzhao             #+#    #+#             */
/*   Updated: 2020/02/05 12:15:44 by vzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/* ra: rotate a 
** - Shift up all elements of stack a by 1 (1st element becomes last)
** - Do nothing if there is only one or no elements.
** Args:
** t_stack **a: The head of a linked list (stack a)
** t_stack **b: The head of a linked list (stack b)
** Returns:
** Nothing, manipulates pointers
*/

void       ra(t_stack **a, t_stack **b)
{
    t_stack *first_of_a;
    t_stack *last_of_a;

    if (*a == NULL || (*a)->next == NULL)
        return ;
    first_of_a = *a;
    last_of_a = *a;
    while (last_of_a->next != NULL)
        last_of_a = last_of_a->next; 

    *a = first_of_a->next;
    first_of_a->next = NULL;
    last_of_a->next = first_of_a;
}