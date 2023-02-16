#include "headers/normalize_improved.h"
using namespace std;

// OPTIMIZATION: Pass variable by reference
vector< vector<float> > normalize_improved(vector< vector <float> > &grid) {

  	// OPTIMIZATION: Avoid declaring and defining 				
    // intermediate variables that are not needed.
	float total = 0.0;
  	int rows = grid.size();
  	int cols = grid[0].size();
	int i, j;

  	// calculate total probability
	for (i = 0; i < rows; ++i)
	{
		for (j = 0; j< cols; ++j)
		{
			total += grid[i][j];
		}
	}

	for (i = 0; i < rows; ++i) {
		for (j=0; j< cols; ++j) {
			grid[i][j] = grid[i][j] / total;
		}
	}

	return grid;
}
