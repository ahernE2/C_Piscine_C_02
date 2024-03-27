/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 19:56:18 by alejhern          #+#    #+#             */
/*   Updated: 2024/03/27 22:17:21 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	return_condition(char condition, char c)
{
	if (condition == 'a')
		return (c >= 'a' && c <= 'z');
	if (condition == 'A')
		return (c >= 'A' && c <= 'Z');
	if (condition == '1')
		return (c >= '0' && c <= '9');
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	capitalize_next;

	capitalize_next = 1;
	i = 0;
	while (str[i])
	{
		if (capitalize_next && return_condition('a', str[i]))
		{
			str[i] -= 32;
			capitalize_next = 0;
		}
		if (!capitalize_next && return_condition('A', str[i]))
			str[i] += 32;
		if (!(return_condition('a', str[i]) || return_condition('A', str[i])))
			capitalize_next = 1;
		i++;
	}
	return (str);
}
