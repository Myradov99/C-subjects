/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puchar.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymyradov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 01:08:25 by ymyradov          #+#    #+#             */
/*   Updated: 2024/07/24 01:09:26 by ymyradov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char c) {
    write(1, &c, 1);
    }
    int  main()
{
    ft_putchar('a');
	    return	 0;
    };
    
