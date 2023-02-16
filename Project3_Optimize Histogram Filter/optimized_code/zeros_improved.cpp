#include "headers/zeros_improved.h"

using namespace std;

vector < vector <float> > zeros_improved(int height, int width) {
	int i;
  
	// OPTIMIZATION: Reserve space in memory for vectors
	vector < vector <float> > newGrid;
  	newGrid.reserve(height);
  
	vector <float> newRow;
  	newRow.assign(width, 0);

  	// OPTIMIZATION: nested for loop not needed
    // because every row in the matrix is exactly the same
	for (i=0; i<height; i++) {
		newGrid.push_back(newRow);
    }
  
  	return newGrid;
}