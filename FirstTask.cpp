#include <iostream>
#include <vector>
#include <algorithm> 

/**
 * @brief функция проверки входных данных 
 * 
 * @param input_1 - входное число
 * @return int - 1 если число подходит, 0 в противном случае
 */
int checkInput(int input_1)
{
    if(input_1 <= 64)
    {
        return 0;
    } else
    {
        return 1;
    }
}



/**
 * @brief функция возведения в степень input_1 числа которое занесено в vector
 * 
 * 
 * @param input_1 - размер степени
 * @param vec - число которое нужно возвести в степень занесённое в вектор
 * @return std::vector<int> - число возведённое в степень
 */
std::vector<int> vozvedenie(int input_1, std::vector<int> vec)
{
    for (int i = 1; i < input_1; ++i) {
        int carry = 0;
        for (int j = 0; j < vec.size(); ++j) {
            int product = vec[j] * 2 + carry;
            vec[j] = product % 10;
            carry = product / 10;
        }
        while (carry > 0) {
            vec.push_back(carry % 10);
            carry /= 10;
        }
    }
    return vec;
}
