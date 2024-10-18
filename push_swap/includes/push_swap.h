/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcapalan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:15:35 by pcapalan          #+#    #+#             */
/*   Updated: 2024/10/13 12:59:33 by pcapalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libft.h"

typedef struct stack
{
	int				val;
	struct stack	*next;
}					t_stack;

t_stack				*lst_last(t_stack *stack);
t_stack				*create_stack_node(int val);
t_stack				*ft_process(int ac, char **av, int i, int j);

int					ft_check_dup(t_stack **a);
int					ft_stack_len(t_stack *node_top);
int					ft_stack_sorted(t_stack *stack_a);
int					ft_atoi2(const char *nptr, char **split);

int					ft_bigger_value(t_stack *node_top);
int					ft_smaller_value(t_stack *node_top);
int					ft_find_index(int val, t_stack *node_top);
int					ft_find_index_to_put(int number, t_stack *a);

void				ft_error(t_stack *stack);
void				ft_split_error(char **str);
void				ft_free_str(char **str);
void				ft_free_stack(t_stack *stack);
void				ft_display_stack(t_stack *stack);
void				add_stack_back(t_stack **stack, int val);
void				ft_general_error(t_stack *stack, char **split);

// Operations
void				ft_sa(t_stack **a);
void				ft_sb(t_stack **b);
void				ft_pa(t_stack **a, t_stack **b);
void				ft_ss(t_stack **a, t_stack **b);
void				ft_pb(t_stack **b, t_stack **a);

void				ft_ra(t_stack **a);
void				ft_rb(t_stack **b);
void				ft_rra(t_stack **a);
void				ft_rr(t_stack **a, t_stack **b);

void				ft_rrb(t_stack **b);
void				ft_rrr2(t_stack **b);
void				ft_rrr(t_stack **a, t_stack **b);

// Algoritm
void				ft_sort_three(t_stack **a);
void				ft_last_change(t_stack **a);
void				ft_sort_stack(t_stack **a, t_stack **b);

int					ft_apply_rarb(t_stack **a, t_stack **b, int nbr);
int					ft_apply_rrarb(t_stack **a, t_stack **b, int nbr);
int					ft_apply_rarrb(t_stack **a, t_stack **b, int nbr);
int					ft_apply_rrarrb(t_stack **a, t_stack **b, int nbr);

int					min_operations_for_push(t_stack *a, t_stack *b);
int					ft_case_rarb(t_stack *a, t_stack *b, int nbr);
int					ft_case_rarrb(t_stack *a, t_stack *b, int nbr);
int					ft_case_rrarb(t_stack *a, t_stack *b, int nbr);
int					ft_case_rrarrb(t_stack *a, t_stack *b, int nbr);

#endif
