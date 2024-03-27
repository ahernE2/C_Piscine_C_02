/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 19:12:00 by alejhern          #+#    #+#             */
/*   Updated: 2024/03/27 19:12:52 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		if (src[i] >= 'A' && src[i] <= 'Z')
			src[i] = src[i] + 32;
		i++;
	}
	return (src);
}
