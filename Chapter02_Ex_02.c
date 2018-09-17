#include <stdio.h>
#define MAN 10000 //전처리기를 통해 MAN을 10000으로 치환
#define SEVEN 7 //전처리기를 통해 SEVEN을 7로 치환
int main(){
    printf("숫자를 그대로 출력 합니다.숫자 = %d\n",3); 
    printf("MAN을 그대로 출력 합니다.숫자 = %d\n",MAN);
    printf("SEVEN를 그대로 출력 합니다.숫자 = %d\n",SEVEN);

    return 0;
    
}