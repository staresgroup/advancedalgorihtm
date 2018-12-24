#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <sstream>
#include <cstring>
using namespace std;
void input_vector (vector< vector<int> >&);
int maximalRectangle(vector< vector<int> > &matrix) {
    if(matrix.size()<1){
        return 0;
    }
        int max=0;
        int mask[matrix.size()][matrix[0].size()];
        memset(mask,0,sizeof(mask));
        for(int i=0;i<matrix.size();i++){
            int count=0;
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==1){
                    count++;
                    mask[i][j]=count;
                }else{
                    count=0;
                    mask[i][j]=0;
                }
            }
        }
 bool isvisit[matrix.size() - 1][matrix[0].size()];
        memset(isvisit,1,sizeof(isvisit));
        for(int j=0;j<matrix[0].size();j++){
            for(int i=0;i<matrix.size();i++){
                if(!isvisit[i][j]){
                    continue;
                }
                int lpos=i-1;
                int rpos=i+1;
                while(lpos>=0&&mask[lpos][j]>=mask[i][j]){
                    if(mask[lpos][j]==mask[i][j]){
                        isvisit[lpos][j]=false;
                    }
                    lpos--;
                }
                while(rpos<(matrix.size())&&mask[rpos][j]>=mask[i][j]){
                    if(mask[rpos][j]==mask[i][j]){
                        isvisit[rpos][j]=false;
                    }
                    rpos++;
                }

                int ans=(rpos-lpos-1)*mask[i][j];
                max=max>ans?max:ans;
            }
        }

        return max;
}
int main ()
{
    vector<vector<int> > vec;
    input_vector(vec);
//    vector<vector<int> >::iterator it = vec.begin ();
//    for (; it != vec.end (); ++it) {
//        vector<int>::iterator i = it->begin ();
//        while (i != it->end ()) {
//            cout << *i++ << " ";
//        }
//        cout << endl;
//    }
    int count1 = maximalRectangle(vec);
    cout << count1 << endl;
    return 0;
}

void input_vector (vector<vector<int> >& vec)
{
    vector<int> v;
    int n;
    while (!cin.eof()) {
        int tmp(0);
        v.clear();
        string line;
        getline(cin, line);
        istringstream ss(line);
        while (ss >> tmp) {
            v.push_back(tmp);
        }
        vec.push_back(v);
    }
    //vec.resize(vec.size() - 1);
//    cout << vec.size() << endl;
//    cout << vec[0].size()  << endl;
//
//    for (int i = 0;i < vec.size();i++) {
//        for (int j = 0;j < vec[0].size();j++) {
//            cout << vec[i][j] << " ";
//        }
//        cout << endl;
//    }
}
