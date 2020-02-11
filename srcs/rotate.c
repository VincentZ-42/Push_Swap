/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzhao <vzhao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 13:48:18 by vzhao             #+#    #+#             */
/*   Updated: 2020/02/11 13:51:09 by vzhao            ###   ########.fr       */
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
    if (b)
        ;
    first_of_a = *a;
    last_of_a = *a;
    while (last_of_a->next != NULL)
        last_of_a = last_of_a->next; 

    *a = first_of_a->next;
    first_of_a->next = NULL;
    last_of_a->next = first_of_a;
}

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

    if (*b == NULL || (*b)->next == NULL)
        return ;
    if (a)
        ;
    first_of_b = *b;
    last_of_b = *b;
    while (last_of_b->next != NULL)
        last_of_b = last_of_b->next; 

    *b = first_of_b->next;
    first_of_b->next = NULL;
    last_of_b->next = first_of_b;
}

/* rr: rotates stack a and b  
** - perform ra and rb at the same time
** Args:
** t_stack **a: The head of a linked list (stack a)
** t_stack **b: The head of a linked list (stack b)
** Returns:
** Nothing, manipulates pointers
*/

void        rr(t_stack **a, t_stack **b)
{
    ra(a, b);
    rb(a, b);
}