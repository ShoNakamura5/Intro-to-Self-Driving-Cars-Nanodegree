#include <vector>

class Matrix 
{

        private:

            std::vector< std::vector<float> > grid;
            std::vector<float>::size_type rows;
            std::vector<float>::size_type cols;

        public:

            // constructor function declarations
            Matrix ();
            Matrix (std::vector< std::vector<float> >);
            
            
            
            /* TODO: Declare the setGrid(), getGrid(), getRows(), 
            **       and getCols() functions. 
            **
            **  Here are the inputs and outputs of each function:
            **  setGrid()
            **  INPUTS: 2D vector
            **  OUPUTS: void
            **
            **  getGrid()
            **  INPUTS: void
            **  OUPUTS: 2D vector
            **
            **  getRows()
            **  INPUTS: void
            **  OUTPUTS: std::vector<float>::size_type
            **
            **  getCols()
            **  INPUTS: void
            **  OUPUTS: std::vector<float>::size_type
            */
            
            // set functions
            void setGrid(std::vector< std::vector<float> >);
            
            // get functions
            std::vector< std::vector<float> > getGrid();
            std::vector<float>::size_type getRows();
            std::vector<float>::size_type getCols();
};
