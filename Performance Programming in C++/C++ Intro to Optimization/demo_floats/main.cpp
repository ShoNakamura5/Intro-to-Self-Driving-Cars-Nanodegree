#include <stdio.h>
#include <iostream>
#include <bitset>
#include <cstring>


int main() {
    
    // Float represented with 32 bits
    float example = 97.148;
    char binary[sizeof(float)];
    
    memcpy(binary, &example, sizeof(float));
    
    std::cout << "\n 32-bit float 97.148:  " << "\n";
    
    for (int i = 0; i < sizeof(float); ++i) {
        std::cout << std::bitset<sizeof(char)*8 >(binary[i]);
    }
    
    std::cout << "\n";

    // Float represented with 32 bits
    example = 97.1485945;
    
    memcpy(binary, &example, sizeof(float));

  std::cout << "\n 32-bit float 97.1485945:  " << "\n";
  
    for (int i = 0; i < sizeof(float); ++i) {
        std::cout << std::bitset<sizeof(char)*8 >(binary[i]);
    }
    
    std::cout << "\n";
    
    
    
    // Float represented with 32 bits
    example = 97.148594576678755667;
    
    memcpy(binary, &example, sizeof(float));
  
  	std::cout << "\n 32-bit float 97.148594576678755667:  " << "\n";

    for (int i = 0; i < sizeof(float); ++i) {
        std::cout << std::bitset<sizeof(char)*8 >(binary[i]);
    }
    
    std::cout << "\n";

    return 0;
}