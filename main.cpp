/*
 * Ali ALneyadi
 * x18 - Multiply
 * CSCI 111
 *
 */

#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
  vector< vector<int> > vec;
  
  vec.resize(12);

  for (int i = 0; i < 12; i++)
    vec[i].resize(12);

  cout<<left<<setw(5);

  cout<<"X";

  for (int i = 1; i < 13; i++)
    cout<<left<<setw(5)<<i;
  cout<<"\n";

  for (int i = 0; i < 12; i++)
    for (int j = 0; j < 12; j++)
      vec[i][j] = (i+1) * (j+1);

  for (int i = 0; i < 12; i++)
  {

    cout<<left<<setw(3)<<(i+1)<< setw(2)<< "| ";
    
    for (int j = 0; j < 12; j++)
    {
      cout<<left<<setw(3)<<vec[i][j]<< setw(2)<<"| ";
    }

    cout<<"\n";
  }
  return 0;
}
