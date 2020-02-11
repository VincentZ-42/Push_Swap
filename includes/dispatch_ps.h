/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatch_ps.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzhao <vzhao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 14:11:51 by vzhao             #+#    #+#             */
/*   Updated: 2020/02/05 14:23:27 by vzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISPATCH_PS_H
# define DISPATCH_PS_H

# include "push_swap.h"
# define PS_OPERATIONS 11

typedef void    (*PS_funct)(t_stack **a, t_stack **b);

typedef struct  s_PS_types
{
    char        *type;
    PS_funct    operation;
}               t_PS_types;

t_PS_types      PS_dispatch_table[] = 
{
  {"sa", sa},
  {"sb", sb},
  {"ss", ss},
  {"pa", pa},
  {"pb", pb},    
  {"ra", ra},
  {"rb", rb},
  {"rr", rr},
  {"rra", rra},
  {"rrb", rrb},
  {"rrr", rrr}
};

#endif