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
void hanoi ( int n, char a,  char b,  char c )         //�������a�����ϵ����ӽ���b�����ƶ���c����
    {  if  (1 == n)                                          //�����һ������ֱ�ӽ�a�����ϵ������ƶ���c
           {
              printf("%c-->%c\n",a,c);
            }
         else
             {
              hanoi ( n-1,  a,  c,  b ) ;                  //��a������n-1�����ӽ���c���ӣ��ƶ���b����
              printf("%c-->%c\n",a , c) ;               //��ֱ�ӽ�a�����ϵ����һ�������ƶ���c
              hanoi ( n-1,  b,  a,  c ) ;                  //Ȼ��b�����ϵ�n-1�����ӽ���a�ƶ���c
           }
   }
int main ()
   {  int  n ;
       printf( "Input the number of diskes:") ;
       scanf("%d",&n) ;
       hanoi ( n,  'A' ,  'B' , 'C' ) ;
       return 0;
   }

