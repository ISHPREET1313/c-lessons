#include<stdio.h>

void G_morning();
void G_afternoon();
void G_night();

void G_morning(){
    printf("good morning\n");
}
void G_afternoon(){
    printf("good afternoon\n");
}
void G_night(){
    printf("good night\n");
}

int main(){
    G_morning();
    G_afternoon();
    G_night();

    return 0;
}