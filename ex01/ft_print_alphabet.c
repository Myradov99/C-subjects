/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymyradov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 05:49:04 by ymyradov          #+#    #+#             */
/*   Updated: 2024/07/24 05:49:25 by ymyradov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_print_alphabet(void)
{
char ch = 'a';
while(ch <= 'z'){

	write (1,&ch,1);
	}
ch++;
}
int main()
{
    ft_print_alphabet();
    return 0;
}

