#include <iostream>

int main() {
    
    // declare integer variables
    int a, b, c, d, e;
    a = 5;
    b = 17;
    c = 2;
    d = 40;
    e = 38;

    // print out the addresses for each variable
    // The ampersand symbol gives access to the address of a variable
    std::cout << "hexadecimal addresses on the stack: \n";
    std::cout << &a << "\n";
    std::cout << &b << "\n";
    std::cout << &c << "\n";
    std::cout << &d << "\n";
    std::cout << &e << "\n \n";

    // show the addresses in decimal notation so that they are easier to interpret
    std::cout << "same addresses in decimal: \n";
    std::cout << (long int)&a << "\n";
    std::cout << (long int)&b << "\n";
    std::cout << (long int)&c << "\n";
    std::cout << (long int)&d << "\n";
    std::cout << (long int)&e << "\n";

    // declare pointers for integer variables
    int * f;
    int * g;
    int * h;
    int * i;
    int * j;
    
    // use the new operator for dynamic memory allocation
    f = new int;
    g = new int;
    h = new int;
    i = new int;
    j = new int;
    
    // assign values to the pointers
    *f = 5;
    *g = 17;
    *h = 2;
    *i = 40;
    *j = 38;
    
    // print out the hexadecimal addresses for these variables
    std::cout << "\n hexadecimal addresses on the heap: \n";
    std::cout << f << "\n";
    std::cout << g << "\n";
    std::cout << h << "\n";
    std::cout << i << "\n";
    std::cout << j << "\n \n";
    
    
    // print out the decimal addresses for these variables
    std::cout << "same addresses in decimal: \n";
    
    std::cout << (long int)f << "\n";
    std::cout << (long int)g << "\n";
    std::cout << (long int)h << "\n";
    std::cout << (long int)i << "\n";
    std::cout << (long int)j << "\n";

    
    delete f;
    delete g;
    delete h;
    delete i;
    delete j;
    
    f = NULL;
    g = NULL;
    h = NULL;
    i = NULL;
    j = NULL;
    
    return 0;
}