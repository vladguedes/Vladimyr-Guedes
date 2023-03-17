#include <stdio.h>
#include <math.h>

int veri(float x, float y, float z){
    float v[2];
    int a;
    v[0] = (x + y + abs (x - y)) / 2;
    v[1] = (x + z + abs (x - z)) / 2;
    if(v[0] > v[1]){
        a = a + 1;
    }
    else{
        a = a + 0;
    }
    if(a == 1){
        if()
    }
    return(a);
}

int main(){
    float a, b, c;
    int x;
    scanf("%f %f %f", &a, &b, &c);
    x = veri(a, b, c);
}