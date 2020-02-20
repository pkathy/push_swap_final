/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkathy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 19:56:02 by pkathy            #+#    #+#             */
/*   Updated: 2020/02/20 19:56:03 by pkathy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_valid(char *str)
{
	int c;

	c = 0;
	if ((*str == '-' || *str == '+') && *(str + 1))
		str++;
	while (*str)
	{
		if (!ft_isdigit(*str) || c > 10)
			return (0);
		str++;
		c++;
	}
	return (1);
}

static int	is_duplicate(int *arr, int arr_size, int new)
{
	int	i;

	i = 0;
	while (i < arr_size)
		if (new == arr[i++])
			return (1);
	return (0);
}

static int	handle_error(int *p)
{
	free(p);
	return (0);
}

int			stack_from_source(t_stack *stack, char **source, size_t source_size)
{
	long	tmp;
	int		i;

	if ((i = 0) == 0 && !source)
	{
		stack->data = 0;
		stack->size = 0;
		return (1);
	}
	if (source_size == 1)
		return (handle_one_arg(stack, source[0]));
	if (!(stack->data = ft_memalloc(source_size * sizeof(int))))
		return (0);
	stack->size = source_size;
	while (source_size-- > 0 && source[source_size])
	{
		if (!is_valid(source[source_size]))
			return (handle_error(stack->data));
		tmp = ft_atol(source[source_size]);
		if ((long)tmp != (int)tmp || is_duplicate(stack->data, i, tmp))
			return (handle_error(stack->data));
		stack->data[i++] = tmp;
	}
	return (1);
}
