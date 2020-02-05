/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzhao <vzhao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 13:57:19 by vzhao             #+#    #+#             */
/*   Updated: 2020/02/05 14:23:50 by vzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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