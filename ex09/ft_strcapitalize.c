/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 19:56:18 by alejhern          #+#    #+#             */
/*   Updated: 2024/03/27 23:40:44 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	r_con(char condition, char c)
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
		if (capitalize_next && r_con('a', str[i]))
		{
			str[i] -= 32;
			capitalize_next = 0;
		}
		else if (!capitalize_next && r_con('A', str[i]))
			str[i] += 32;
		else if (r_con('1', str[i]))
			capitalize_next = 0;
		if (!(r_con('a', str[i]) || r_con('A', str[i]) || r_con('1', str[i])))
			capitalize_next = 1;
		i++;
	}
	return (str);
}
