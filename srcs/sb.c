/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzhao <vzhao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 15:34:00 by vzhao             #+#    #+#             */
/*   Updated: 2020/02/05 13:58:16 by vzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/* sb: swap b 
** - swap the first 2 elements at the top of stack b.
** - Do nothing if there is only one or no elements.
** Args:
** t_stack **a: The head of a linked list (stack a)
** t_stack **b: The head of a linked list (stack b)
** Returns:
** Nothing, manipulates pointers
*/

void        sb(t_stack **a, t_stack **b)
{
    t_stack *first;
    t_stack *second;

    if (!(*b) || !(*b)->next)
        return ;
        
    first = *b;
    second = (*b)->next;
    *b = second;
    first->next = second->next;
    second->next = first;
}