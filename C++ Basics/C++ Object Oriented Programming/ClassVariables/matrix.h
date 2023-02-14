#include <vector>

// Header file for the Matrix class

/* 
**  TODO:
**    Declare the following private variables:
**      a 2D float vector variable called grid
**      a vector size_type variable called rows
**      a vector size_type variable called cols
*/

class Matrix 
{
    
    	private:
        
        	std::vector< std::vector<float> > grid;
            std::vector<float>::size_type rows;
            std::vector<float>::size_type cols;  
};