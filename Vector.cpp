#include <iostream>
#include <vector>
using namespace std;
int main(){
  int n;
  cout << "Enter the lenght of array: ";
  cin >> n;
  vector<int> arr(n);
  int i;
  cout << "Enter your array: ";
  for(i = 0; i < n; i ++)
  {
    cin >> arr[i];
  }
  cout << "Your array: ";
  for(i = 0; i < n; i ++)
  {
    cout << arr[i] << " ";
  }
}
