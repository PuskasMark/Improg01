#include <stdio.h>

int main()
{
    for (int i=0;i<101;i++){
        if(i%3==0 && i%5==0){
            printf("%d %s\n",i,"fizzbuzz");
        }
        else if(i%3==0){
            printf("%d %s\n",i,"fizz");
        }
        else if(i%5==0){
            printf("%d %s\n",i,"buzz");
        }
        else{
            printf("%d\n",i);
        }
    }

    return 0;
}