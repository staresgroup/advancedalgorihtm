#include<iostream>
using namespace std;
int main()
{
  int arr[100];
  int w;
  int length = 0;
  int sum = 0;
  int max = 0;
  while(cin >> arr[length]){
    length++;
  }
  length = length - 1;
  w = arr[length];
  for(int i = 0;i < length -  w + 1;i++){
    max = arr[i];
    for(int j = i;j < i + w;j++){
        max = max > arr[j] ? max : arr[j];
    }
    //cout << max << endl;
    sum = sum + max;
  }
  cout << sum << endl;
  return 0;
}
