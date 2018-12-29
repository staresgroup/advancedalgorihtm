#include <iostream>
using namespace std;
int main()
{
  int T;
  int n;
  cin >> T;
  int count[T] = {0};
  for (int i = 0;i < T;i++) {
    cin >> n;
    int arr[n];
    for (int j = 0;j < n;j++) {
      cin >> arr[j];
    }
    for (int j = 0;j < n - 1;j++) {
      for (int k = j + 1;k < n;k++) {
        if (arr[j] > arr[k]){
            count[i]++;
        }
      }
    }
  }
  for (int i = 0;i < T;i++) {
    cout << count[i] << endl;
  }
  return 0;
}
