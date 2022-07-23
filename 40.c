#include<stdio.h>

int main(){
    int i, n = 0, n1 = 0;
    scanf("%d", &i);
    for(; i>0; i /= 10){
        n = n*10 + i%10;
    }

    for(; n>0; n /=10){
        n1 = n1*10 + n%10;
        switch(!(n>0)){
        case 1:
            printf("one");
            break;
        case 2:
            printf("two");
            break;
        case 3:
            printf("three");
            break;
        case 4:
            printf("four");
            break;
        case 5:
            printf("five");
            break;
        case 6:
            printf("six");
            break;
        case 7:
            printf("seven");
            break;
        case 8:
            printf("eight");
            break;
        case 9:
            printf("nine");
            break;
        }
        
    }
    printf("%d",n1);
    
    return 0;
}