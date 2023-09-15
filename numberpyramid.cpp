/*
        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1
*/
#include <iostream>
using namespace std;
void pyramidPattern(int n)
{
  for(int i = 0 ; i < n ; i++)
  {
    int count = 1, j; 
    //for first half pyramid
    for(j = 0 ; j < n ; j++)
    {
      if(j>=n-i-1)
      {
        cout << count << " ";
        count++;
      }
      else
      {
        cout << "  ";
      }
    }
    count--;
    //for second half pyramid
    for(int k = j ; k < 2*n-1 ; k++)
    { 
      if(k < n + i)
      {
        count--;
        cout << count << " ";
      }
      else
        break;
    }
    //to go on the next row
    cout << endl;
  }
}
int main()
{
  int n;
  cout << "Enter the number of rows : " ;
  cin >> n;
  pyramidPattern(n);
  return 0;
}