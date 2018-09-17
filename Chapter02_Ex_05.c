#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c; 
    a = 100;
    b = a;
    c = 2*b+100;
    
    //printf("이것은 주석입니다. 출력되지 않아요~");

    printf("원래의 변숫값 : a = %d, b=%d, c=%d \n",a,b,c);

    a=b=c=8; //a,b,c값을 8로 다시 지정한다.

    printf("새로운 변숫값 : a = %d, b=%d, c=%d \n",a,b,c);

    return 0;
}
