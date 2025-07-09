#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    char you, comp;
    srand(time(0));
    int num = rand()%100+1;
    if (num<33){
        comp = 'r';
    }
    else if(33<=num<66){
        comp = 'p';
    }
    else{
        comp = 's';
    }
    printf("Enter 'r' for rock, 'p' for paper and 's' for scissors\n");
    scanf("%c", &you);
    if (you == comp){
        printf("It's a TIE!!\n");
    }
    else if ((you=='s'&&comp=='p')||(you=='p'&&comp=='r')||(you=='r'&&comp=='s')){
        printf("YAY!!You WIN!!!\n");
    }
    else{printf("You Loose!!\n");}
    return 0;
}