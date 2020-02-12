/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzhao <vzhao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 16:25:30 by vzhao             #+#    #+#             */
/*   Updated: 2020/02/11 21:28:45 by vzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/global.h"
# include <limits.h>

typedef struct      s_stack
{
    int             n;
    struct s_stack  *next;
}                   t_stack;

enum 			e_file_descriptors
{
				standard_in = 0,
				standard_out = 1,
				standard_error = 2
};

void            sa(t_stack **a, t_stack **b);
void            sb(t_stack **a, t_stack **b);
void            ss(t_stack **a, t_stack **b);
void            pa(t_stack **a, t_stack **b);
void            pb(t_stack **a, t_stack **b);
void            ra(t_stack **a, t_stack **b);
void            rb(t_stack **a, t_stack **b);
void            rr(t_stack **a, t_stack **b);
void            rra(t_stack **a, t_stack **b);
void            rrb(t_stack **a, t_stack **b);
void            rrr(t_stack **a, t_stack **b);

t_stack*        create_elem(int n);
int             check_duplicate(t_stack **a, int number);
int             atoi_check(char *str, int *error);
void            create_stack(t_stack **a, int ac, char **av);

void            ft_ps_exit(char *msg, int file_number);
void			ft_printstack(t_stack **a);

#endif 