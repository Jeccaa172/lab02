#pragma once
#include <ctime>    // для time()
#include <cstdlib>  // для srand(), rand()
#include <cstdint>  // для стандартних типів (на майбутнє)


// Варіант 2: тип long, розмір 15, діапазон [-100, 100].

typedef long t_rand_val;   // тип елементів послідовності
const int N = 15;          // розмір послідовності

// Функція генерації послідовності псевдовипадкових чисел
// A — вказівник на масив для зберігання
// cnt — кількість елементів
// L, H — нижня та верхня межі діапазону
void make_rnd_vals(t_rand_val* A, int cnt, t_rand_val L, t_rand_val H);

