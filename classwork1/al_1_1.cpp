#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int T;
    int N;
    cin >> T;
    for (int i = 0;i <T;i++) {
        int count = 0;
        vector<int> vec;
        cin >> N;
        int arr[N];
        int b[N];
        int c[N];
        for (int j = 0;j < N;j++) {
            cin >> arr[j];
        }
        for(int i=0;i<N;i++){
		b[i]=1;
        }
        int r=0;
        for(int i=0;i<N;i++){
          int k=0;
            if(arr[i]!=0){
                b[r]=1;
                c[r]=arr[i];
                k=1;
            }
         for(int j=i+1;j<N;j++){
            if(arr[i]==arr[j]&&arr[j]>0){
                b[r]++;//统计次数
                c[r]=arr[j];
                arr[j]=0;
                k=1;
            }
        }
		if(k==1){
			r++;
		}
        }
        int temp;
        for(int i=0;i<r;i++){
            for (int j=0;j<r-1-i;j++){
                if(b[j]<b[j+1]){
                  temp=b[j];
                  b[j]=b[j+1];
                  b[j+1]=temp;

                  temp=c[j];
                  c[j]=c[j+1];
                  c[j+1]=temp;

                }
                if(b[j+1]==b[j]){
                  if(c[j]>c[j+1]){
                    temp=c[j];
                    c[j]=c[j+1];
                    c[j+1]=temp;}
                }
            }
        }
            for(int i=0;i<r;i++){
                if(i!=r-1)
                {
                    for (int j = 0;j < b[i];j++) {
                        vec.push_back(c[i]);
                    }

                }
                //cout<<c[i]<<" "<<b[i]<<endl;

                else
                    {
                    for (int j = 0;j < b[i];j++) {
                        vec.push_back(c[i]);
                    }

                }
                //cout<<c[i]<<" "<<b[i];
            }
            for (int j = 0;j < vec.size() - 1;j++) {
                cout << vec[j] << " ";
            }
            cout << vec[vec.size() - 1] << endl;
    }
    return 0;
}
