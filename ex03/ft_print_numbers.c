/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymyradov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 05:57:49 by ymyradov          #+#    #+#             */
/*   Updated: 2024/07/24 05:58:51 by ymyradov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_print_numbers(void){
int digits = '0';
while (digits < '9' ){
write (1, &digits, 1);
digits ++;
}
}
int main (){ 
 ft_print_numbers();
return 0;
}




