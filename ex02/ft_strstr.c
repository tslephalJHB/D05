/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tslephal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 10:33:30 by tslephal          #+#    #+#             */
/*   Updated: 2020/07/17 10:33:56 by tslephal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strstr(char *str, char *to_find)
{
	int count_1;
	int count_2;
	char *dest;

	count_1 = 0;
	count_2 = 0;
	while(str[count_1])
	{
		if (str[count_1] == to_find[count_2])
		{
			dest[count_2] = str[count_1];
			count_2++;
		}
		count_1++;
	}
	return(dest);
}
