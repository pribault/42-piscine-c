/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 23:28:33 by pribault          #+#    #+#             */
/*   Updated: 2016/08/22 23:10:51 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **tab, int (*f)(char *))
{
	int		result;
	int		i;

	i = 0;
	result = 0;
	while (tab[i])
	{
		if (f(tab[i]))
			result = 1;
		i++;
	}
	return (result);
}
