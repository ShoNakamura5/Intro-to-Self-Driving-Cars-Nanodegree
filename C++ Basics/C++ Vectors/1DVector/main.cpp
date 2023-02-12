//TODO: Use this as a playground to practice with vectors
#include <iostream>
#include <vector>

using namespace std;


//TODO:
// Fill out your program's header. The header should contain any necessary
// include statements and also function declarations
vector<float> vectorsubtraction(vector<float> vector1, vector<float> vector2);

//TODO:
// Write your main program. Remember that all C++ programs need
// a main function. The most important part of your program goes
// inside the main function. 
int main() {
    
    // declare and initialize vectors
    vector<float> v1(3);
    vector<float> v2(3);
    
    v1[0] = 5.0;
    v1[1] = 10.0;
    v1[2] = 27.0;
  
    v2[0] = 2.0;
    v2[1] = 17.0;
    v2[2] = 12.0;
  
    vector<float> v3 (v1.size());
  
    // calculate the difference between the two vectors
    v3 = vectorsubtraction(v1, v2);
  
    // print out the results of the vector subtraction
    for (int i = 0; i < v3.size(); i++) {
        cout << v3[i] << " ";
    }
  
    cout << endl;
  
    return 0;
  
}

// define the function -
// INPUTS: two vectors
// OUTPUT: the difference between the two vectors
vector<float> vectorsubtraction(vector<float> vector1, vector<float> vector2) {
  
    vector<float> vectordifference (vector1.size());
  
    for (int i = 0; i < vector1.size(); i++) {
        vectordifference[i] = vector1[i] - vector2[i];
    }
  
    return vectordifference;
  
}