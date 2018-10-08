#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,box;
    int student[] = {70,90,60,50,85,75,65,98,45,100};
    
    for(int i=0; i < 10; i++){
        for(int j=0; j < 10; j++){
            if(student[i]<student[j]){
                box = student[i];
                student[i]=student[j];
                student[j] = box;
            }
        }
    }
    for(int i = 0; i < 10; i++){
        printf("%d \t",student[i]);
    }
    return 0;
}
