//TODO: include the iostream and vector libraries
#include <iostream>
#include <vector>

//TODO: Use the standard namespace
using namespace std;

int main() {
    
    // Part 1: declare and define a vector with values
    //        {5.0, 5.0, 5.0} and print 
    //         the vector to the terminal using cout
    // Hint: the syntax vector<datatype> varname(length, value) might help
    vector<float> vectorvar(3, 5.0);
  
    for (int i = 0; i < vectorvar.size(); i++) {
        cout << vectorvar[i] << " ";
    }
  
    cout << endl;

    // Part 2: Use push back to add the values 3.0, 2.5, 1.4 
    //      to the back of the vector
    vectorvar.push_back(3.0);
    vectorvar.push_back(2.5);
    vectorvar.push_back(1.4);

    // Part 3: Print out the vector again using cout
    for (int i = 0; i < vectorvar.size(); i++) {
        cout << vectorvar[i] << " ";
    }
    cout << "\n";

    // Part 4: Use the vector assign method to override the current vector. 
    // The overriden vector should have 3 elements with 
    // the values {5.0, 5.0, 5.0}
    vectorvar.assign(3, 5.0);

    // Part 5: Print out the vector
    for (int i = 0; i < vectorvar.size(); i++) {
        cout << vectorvar[i] << " ";
    }
  
    cout << "\n";

    return 0;
}