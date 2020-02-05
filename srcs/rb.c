/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzhao <vzhao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 13:54:33 by vzhao             #+#    #+#             */
/*   Updated: 2020/02/05 13:56:09 by vzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/* rb: rotate b 
** - Shift up all elements of stack b by 1 (1st element becomes last)
** - Do nothing if there is only one or no elements.
** Args:
** t_stack **a: The head of a linked list (stack a)
** t_stack **b: The head of a linked list (stack b)
** Returns:
** Nothing, manipulates pointers
*/

void       rb(t_stack **a, t_stack **b)
{
    t_stack *first_of_b;
    t_stack *last_of_b;

    if (*a == NULL || (*a)->next == NULL)
        return ;
    first_of_b = *a;
    last_of_b = *a;
    while (last_of_b->next != NULL)
        last_of_b = last_of_b->next; 

    *a = first_of_b->next;
    first_of_b->next = NULL;
    last_of_b->next = first_of_b;
}