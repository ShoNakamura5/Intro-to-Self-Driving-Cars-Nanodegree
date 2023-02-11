#include <iostream>

int main() {
    
    /* 
    * TODO: Use this as a playground for writing if, else if and else statements
    * To get you started here, are some ideas:
    * 
    * 1. Create an integer variable and a set of if, elseif and else statements that
    * output whether the number is positive or negative.
    * 
    * 2. Create a character variable containing 'a' for acceleration, 'b' for braking, 
    * 'p' for parked, or 'n' for neutral and outputs whether or not the vehicle is accelerating, braking, 
    * parked or in neutral.
    *
    * Practice Using Boolean Logic
    *
    * You can see an example solution in the solution.cpp file
    */
  
  	int x = 5;
  	if (x > 0) {
      	std::cout << "Positive Number" << std::endl;
    }
  	else if (x < 0) {
      	std::cout << "Negative Number" << std::endl;
    }
  	else {
      	std::cout << "Zero" << std::endl;
    }
  
  
  	char status = 'a';
  
  	if (status == 'a') {
      	std::cout << "Accelerating" << std::endl;
    }
  	else if (status == 'b') {
      	std::cout << "Braking" << std::endl;
    }
  	else if (status == 'p') {
      	std::cout << "Parking" << std::endl;
    }
  	else if (status == 'n') {
      	std::cout << "Neutral" << std::endl;
    }
  	else {
      	std::cout << "Unknown" << std::endl;
    }
    
    return 0;
}
