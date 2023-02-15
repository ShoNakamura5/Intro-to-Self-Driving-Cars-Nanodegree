#include <iostream>
#include <bitset>
#include <cstring>

int main() {

    std::cout << "Representations of the number 97 \n";

  	// Character 'a' represented in binary
    std::cout << "\n char: \n" << std::bitset<8>('a') << "\n";
  
  	// Integer 97 represented with 8 bits
    std::cout << "\n 8-bit integer: \n" << std::bitset<sizeof(char) * 8>(97) << "\n";
  
  // Integer 97 represented with 32 bits
    std::cout << "\n 32-bit: \n" << std::bitset<sizeof(int) * 8>(97) << "\n";
    
  // Float 97.0 represented with 32 bits
    float example = 97.0;
    char binary[sizeof(float)];
    
    memcpy(binary, &example, sizeof(float));
    
    std::cout << "\n 32-bit float 97.0:  " << "\n";
    
    for (int i = 0; i < sizeof(float); ++i) {
        std::cout << std::bitset<sizeof(char)*8 >(binary[i]);
    }
    
    std::cout << "\n";
    
    return 0;
}
