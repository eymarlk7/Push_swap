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
# include <stdbool.h>
# include <limits.h>

typedef struct stack
{
	int				val;
	struct stack	*next; 
}	t_stack;

t_stack	*lst_last(t_stack *stack);
t_stack	*create_stack_node(int val);
t_stack	*ft_process(int ac, char **av, int i, int j);

int	ft_check_dup(t_stack **a);
int	ft_atoi2(const char *nptr, char **split);
int	ft_stack_sorted(t_stack *stack_a);
t_stack	*ft_find_max(t_stack *stack);
t_stack	*ft_find_min(t_stack *stack);
int	ft_stack_len(t_stack *stack);

void    ft_error(t_stack *stack);
void    ft_split_error(char **str);
void	ft_free_str(char **str);
void	ft_free_stack(t_stack *stack);
void	ft_display_stack(t_stack *stack);
void	add_stack_back(t_stack **stack, int val);
void	ft_general_error(t_stack *stack, char **split);

//Operations
void    ft_swap(t_stack **stack);
void   	ft_rotate(t_stack **stack);
void    ft_rotate_rev(t_stack **stack);
void    ft_ra(t_stack **a, bool print);
void    ft_rb(t_stack **b, bool print);
void    ft_sa(t_stack **a, bool print);
void    ft_sb(t_stack **b, bool print);
void    ft_rra(t_stack **a, bool print);
void    ft_rrb(t_stack **b, bool print);
void    ft_pa(t_stack **a, t_stack **b, bool print);
void    ft_pb(t_stack **b, t_stack **a, bool print);
void    ft_ss(t_stack **a, t_stack **b, bool print);
void    ft_rr(t_stack **a, t_stack **b, bool print);
void    ft_rrr(t_stack **a, t_stack **b, bool print);

//Algoritm
void	ft_sort_three(t_stack **a);

int	get_target(t_stack *a, int nbr);
int ft_index(t_stack *stack, int nbr);
int smallest_cost(t_stack *a, t_stack *b, int target_node);
int push_cost(t_stack *a, t_stack *b, int target_node, int nbr);
int get_up_cost(t_stack *a, t_stack *b, int target_node, int nbr);
int get_down_cost(t_stack *a, t_stack *b, int target_node, int nbr);
int get_cost_place(t_stack *a, t_stack *b, int target_node, int nbr);

#endif
