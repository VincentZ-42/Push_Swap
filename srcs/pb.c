/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzhao <vzhao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 11:50:35 by vzhao             #+#    #+#             */
/*   Updated: 2020/02/05 12:04:10 by vzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/* pb: push b 
** - Moves 1st element in stack a to top of stack b
** - Do nothing if there stack a is empty.
** Args:
** t_stack **a: The head of a linked list (stack a)
** t_stack **b: The head of a linked list (stack b)
** Returns:
** Nothing, manipulates pointers
*/

void    pb(t_stack **a, t_stack **b)
{
    t_stack *first_of_a;

    if (*a == NULL)
        return ;
    first_of_a = *a;
    *a = first_of_a->next;
    first_of_a->next = *b;
    *b = first_of_a;
}