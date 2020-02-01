/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzhao <vzhao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 16:25:30 by vzhao             #+#    #+#             */
/*   Updated: 2020/01/31 16:32:24 by vzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/global.h"

typedef struct      s_stack
{
    int             n;
    struct s_stack  *next;
}                   t_stack;

void    sa(t_stack **a, t_stack **b);
void    sb(t_stack **a, t_stack **b);
void    ss(t_stack **a, t_stack **b);
void    pa(t_stack **a, t_stack **b);
void    pb(t_stack **a, t_stack **b);
void    ra(t_stack **a, t_stack **b);
void    rb(t_stack **a, t_stack **b);
void    rr(t_stack **a, t_stack **b);
void    rra(t_stack **a, t_stack **b);
void    rrb(t_stack **a, t_stack **b);
void    rrr(t_stack **a, t_stack **b);

#endif 