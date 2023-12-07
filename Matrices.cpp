#include "Matrices.h"
using namespace std;

namespace Matrices
{
  Matrix::Matrix(int _rows, int _cols)
  {
      // initalize member functions
      rows = _rows;
      cols = _cols;

    // resize outer vector
      a.resize(_rows);

    // resize inner vectors and intailize to 0
      for (double i = 0.0; i < a.size();i++)
        {
          a[i].resize(_cols,0);
        } 
  }
    
  
    //Add each corresponding element.
    ///usage:  c = a + b;
    Matrix operator+(const Matrix& a, const Matrix& b)
    {
      if (a.getRows() != b.getRows() || a.getCols() != b.getCols())
      {
        throw runtime_error("Error: dimensions must agree");
      }  
      
      // if we get here, then the dimensions must match
        Matrix c(a.getRows(), a.getCols());
        // loop through each cell, assign each sum to cij
      for (int i = 0; i < a.getRows(); i++)
        {
          for (int j = 0; j < a.getCols(); j++)
            {
              c(i,j) = a(i,j) + b(i,j);
            }
          
        }
       return c; 
      
    }
  
  
  //Matrix multiply.  See description.
    ///usage:  c = a * b;
    Matrix operator*(const Matrix& a, const Matrix& b)
  {
    // Check a cols and b rows
    if (a.getCols() != b.getRows())
    {throw runtime_error("Error: dimensions must agree");}

    //Create matrix for product
    Matrix c(a.getRows(), b.getCols());

   // Multiply a and b elements
    for (int i = 0; i < a.getRows(); i++) 
   {
    for (int k = 0; k < b.getCols(); k++) 
    {
      double sum = 0;
      for (int j = 0; j < b.getRows(); j++) {
        sum += a(i,j) * b(j,k);
      }
    c(i,k) = sum;
    } 
  } 
    return c;
  }

    ///Matrix comparison.  See description.
    ///usage:  a == b
    bool operator==(const Matrix& a, const Matrix& b)
  {
    if (a.getRows() != b.getRows() || a.getCols() != b.getCols())
    {return false;}
    for (int i = 0; i < a.getRows(); i++)
      {
        for (int j = 0; j < a.getCols(); j++)
          {
            if(!(abs(a(i,j) - b(i,j)) < 0.001))
            //if(abs(a(i,j) - b(i,j)) == 0.0)
            
            {
              return false;
            }
          }
      }
    return true;
  }

    ///Matrix comparison.  See description.
    ///usage:  a != b
    bool operator!=(const Matrix& a, const Matrix& b)
  {
    if (a.getRows() != b.getRows() || a.getCols() != b.getCols())
    {return true;}
    for (int i = 0; i < a.getRows(); i++)
      {
        for (int j = 0; j < a.getCols(); j++)
          {
            if(!(abs(a(i,j) - b(i,j)) < 0.001))
            {
              return true;
            }
          }
      }
    //return true;
    return false;
  }

    ///Output matrix.
    ///Separate columns by ' ' and rows by '\n'
    ostream& operator<<(ostream& os, const Matrix& a)
  {
    for (int i = 0; i< a.getRows(); i++)
    {
      for (int j = 0; j < a.getCols();j++)
        {
          os << setw(10) << a(i,j) << "  ";
        } os << endl;
    }

      
    return os;
  }
}  