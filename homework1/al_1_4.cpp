/*#include <iostream>
using namespace std;
int main()
{
    int n;
    int result = 1;
    cin >> n;
    for (int i = 0;i < n;i++) {
      result = 3 * result;
    }
    result = result - 1;
    cout << result <<endl;
    return 0;
}*/
 #include <cstdio>
void hanoi ( int n, char a,  char b,  char c )         //这里代表将a柱子上的盘子借助b柱子移动到c柱子
    {  if  (1 == n)                                          //如果是一个盘子直接将a柱子上的盘子移动到c
           {
              printf("%c-->%c\n",a,c);
            }
         else
             {
              hanoi ( n-1,  a,  c,  b ) ;                  //将a柱子上n-1个盘子借助c柱子，移动到b柱子
              printf("%c-->%c\n",a , c) ;               //再直接将a柱子上的最后一个盘子移动到c
              hanoi ( n-1,  b,  a,  c ) ;                  //然后将b柱子上的n-1个盘子借助a移动到c
           }
   }
int main ()
   {  int  n ;
       printf( "Input the number of diskes:") ;
       scanf("%d",&n) ;
       hanoi ( n,  'A' ,  'B' , 'C' ) ;
       return 0;
   }

