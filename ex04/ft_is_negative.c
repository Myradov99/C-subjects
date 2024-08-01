/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymyradov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 09:24:34 by ymyradov          #+#    #+#             */
/*   Updated: 2024/07/24 09:25:02 by ymyradov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_is_negative(int n) {
 if (n < 0) {
  write(1, "N", 1);
 } else {
   write(1, "P", 1);    }
}

int main() {
 ft_is_negative(-5); 
 ft_is_negative(-1); 
 ft_is_negative(0);
 ft_is_negative(10); 
    return 0;
}
