#include <iostream>
#include <bitset>
#include <climits>

int main() {
    int num;
    std::cin >> num;
    
    // 使用bitset直接轉換為8位二進制
    std::bitset<8> binary(num);
    std::cout << binary << std::endl;
    
    return 0;
}