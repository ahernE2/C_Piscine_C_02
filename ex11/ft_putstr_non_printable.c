/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 01:08:55 by alejhern          #+#    #+#             */
/*   Updated: 2024/03/29 02:34:38 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	aux[4096];

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			aux[i] = '\\';
			aux[i + 1] = "0123456789abcdef"[str[i] >> 4];
			aux[i + 2] = "0123456789abcdef"[str[i] & 0x0F];
			i += 2;
		}
		else
			aux[i] = str[i];
		i++;
	}
	aux[i] = '\0';
	i = 0;
	while (aux[i])
	{
		str[i] = aux[i];
		i++;
	}
	str[i] = '\0';
}
