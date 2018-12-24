#include<iostream>
using namespace std;
int main()
{
  int a[100];
  int length = 0;;
  int count = 0;
  while(cin >> a[length]){
    length++;
  }
  length = length -1;
  for(int i = 0;i < length;i++){
    for(int j=i + 1;j < length;j++){
      if(a[i] + a[j] == a[length]){
        count++;
      }
    }
  }
  cout << count << endl;
  return 0;
}
