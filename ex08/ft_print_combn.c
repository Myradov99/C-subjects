/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymyradov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 11:47:52 by ymyradov          #+#    #+#             */
/*   Updated: 2024/07/24 11:48:32 by ymyradov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_combination(int *comb, int n) {
    char c;
    for (int i = 0; i < n; i++) {
        c = comb[i] + '0';
        write(1, &c, 1);
    }
}

void generate_combinations(int start, int n, int *comb, int depth) {
    if (depth == n) {
        print_combination(comb, n);
        if (comb[0] < (10 - n)) write(1, ", ", 2);
        return;
    }
    for (int i = start; i <= 9; i++) {
        comb[depth] = i;
        generate_combinations(i + 1, n, comb, depth + 1);
    }
}

void ft_print_combn(int n) {
    if (n <= 0 || n >= 10) return;
    int comb[10];
    generate_combinations(0, n, comb, 0);
}

int main() {
    ft_print_combn(2);
    write(1, "\n", 1);
    return 0;
}

