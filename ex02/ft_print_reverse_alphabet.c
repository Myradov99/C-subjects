/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymyradov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 05:55:17 by ymyradov          #+#    #+#             */
/*   Updated: 2024/07/24 05:55:30 by ymyradov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//write function is 
void ft_print_reverse_alphabet(void) {
    char turnback = 'z';
    while (turnback >= 'a') {//turnback gretaer than a letter
        write(1, &turnback, 1); //1 data  output. @turnback char given name  pointer , 1 byte char   
        turnback--;              
    }
}

int main() {
    ft_print_reverse_alphabet();
    return 0;
}
