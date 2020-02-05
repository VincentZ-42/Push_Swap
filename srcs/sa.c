/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzhao <vzhao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 15:28:37 by vzhao             #+#    #+#             */
/*   Updated: 2020/02/05 13:58:12 by vzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/* sa: swap a 
** - swap the first 2 elements at the top of stack a.
** - Do nothing if there is only one or no elements.
** Args:
** t_stack **a: The head of a linked list (stack a)
** t_stack **b: The head of a linked list (stack b)
** Returns:
** Nothing, manipulates pointers
*/

void    sa(t_stack **a, t_stack **b)
{
    t_stack *first;
    t_stack *second;

    if (!a || !(*a)->next)
        return ;

    first = *a;
    second = (*a)->next;
    *a = second;
    first->next = second->next;
    second->next = first;
}