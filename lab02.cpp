#include "lab02.h"
#include <iostream>
#include <iomanip>

// Функція генерує cnt псевдовипадкових чисел у діапазоні [L, H]
// і записує в масив A.
void make_rnd_vals(t_rand_val* A, int cnt, t_rand_val L, t_rand_val H)
{
    for (int i = 0; i < cnt; ++i)
    {
        int R = std::rand();                      // вихідне ПВЧ [0, RAND_MAX]
        float R0_1 = float(R) / float(RAND_MAX);  // Приведення до [0, 1] 
        // Масштабуємо в [L, H]
        
        float RL_H = R0_1 * float(H - L) + float(L);
        A[i] = t_rand_val(RL_H);                  // Наводимо до типу t_rand_val (long)
    }
}

int main()
{
    system("chcp 1251 > nul"); //підключення української мови
    // 1) Ініціалізація генератора випадкових чисел (щоб щоразу була нова послідовність)
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // 2) Оголошуємо масив і генеруємо числа
    t_rand_val R[N];
    make_rnd_vals(R, N, t_rand_val(-100), t_rand_val(100));

    // 3) Виводимо результат у консоль (зручно для звіту)
    std::cout << "Последовательность (" << N << " элементов) в диапазоне [-100, 100]:" << std::endl;
    for (int i = 0; i < N; ++i)
    {
        std::cout << R[i];
        if (i + 1 < N) std::cout << ", ";
    }
    std::cout << std::endl;


    return 0;
}
