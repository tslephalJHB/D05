/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tslephal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 11:45:49 by tslephal          #+#    #+#             */
/*   Updated: 2020/07/17 11:45:52 by tslephal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int sum;
    int count;

    sum = 0;
    count = 0;
    while (count < n)
    {
        sum = sum + (s1[count] - s2[count]);
        s1++;
        count++;
    }

    return (sum);
}
