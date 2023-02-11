//TODO: include the iostream part of the standard library
#include <iostream>

//TODO: declare your function called distance
float distance(float velocity, float acceleration, float time_elapsed);

// Leave the main function as is
int main() {
    
    // TODO: The following are examples you can use to test your code.
    // You will need to uncomment them to get them working.
  	std::cout << distance(3, 5, 5) << std::endl;
  	std::cout << distance(7.0, 2.1, 5.4) <<std::endl;
    
    // std::cout << distance(3, 4, 5) << std::endl;  
    // std::cout << distance(7.0, 2.1, 5.4) << std::endl;
    
    return 0;   
}

//TODO: define your function
float distance(float velocity, float acceleration, float time_elapsed) {
  	return velocity * time_elapsed + 0.5 * acceleration * time_elapsed * time_elapsed;
}