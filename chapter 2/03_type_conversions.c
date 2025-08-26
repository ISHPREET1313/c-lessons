#include<stdio.h>

int main(){
    int a = 9;
    int b=2;
    float c = a/b; // as int/int so give int i.e 4
    printf("the value of a/b is %f\n",c);

    float d = 9.0;
    int e=2;
    float f =d/e; // as float/int so give float i.e 4.5
    printf("the value of d/e is %f\n",f);

    int g =3.5;
    float h=8;
    printf("the value of g is %d\n",g);
    printf("the value of h is %f\n",h);
    return 0;
}