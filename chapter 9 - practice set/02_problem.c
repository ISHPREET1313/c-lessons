#include<stdio.h>

typedef struct vector
{
    int i;
    int j;
}v;

v sum_vector(v v1,v v2);
v sum_vector(v v1,v v2){
    v v3;
    v3.i=v1.i+v2.i;
    v3.j=v1.j+v2.j;
    return v3;
}

int main(){
    struct vector v1={1,2};
    struct vector v2={2,2};
    printf("The sum of vectors is %di + %dj and %di + %dj is %di + %dj",v1.i,v1.j,v2.i,v2.j,sum_vector(v1,v2));
    
    return 0;
}