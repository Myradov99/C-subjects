/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymyradov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 10:45:41 by ymyradov          #+#    #+#             */
/*   Updated: 2024/07/24 11:47:03 by ymyradov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putnbr(int nb) {
    if (nb == 42) {
        write(1, "42", 2);
        return;
    }

    if (nb >= 10) {
        ft_putnbr(nb / 10);
    }

    char digit = nb % 10 + '0';
    write(1, &digit, 1);
}

int main() {
    ft_putnbr(42);    
    write(1, "\n", 1);

    ft_putnbr(4);    
    write(1, "\n", 1);

    ft_putnbr(123);    
    write(1, "\n", 1);

    return 0;
}

