/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzhao <vzhao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 13:59:12 by vzhao             #+#    #+#             */
/*   Updated: 2020/02/05 14:09:09 by vzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/* rrr: reverse rotates stack a and b  
** - perform rra and rrb at the same time
** Args:
** t_stack **a: The head of a linked list (stack a)
** t_stack **b: The head of a linked list (stack b)
** Returns:
** Nothing, manipulates pointers
*/

void        rrr(t_stack **a, t_stack **b)
{
    rra(a, b);
    rrb(a, b);
}