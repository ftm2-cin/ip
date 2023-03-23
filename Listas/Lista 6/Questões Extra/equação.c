#include <stdio.h>
#include <math.h>

void equacao(float A, float B, float C){
    float delta = pow(B, 2) - (4 * A * C);
    if (delta < 0)
    {
        printf("0");

    }else if(delta == 0){

        float x1 = -B / (2 * A);
        printf("%.2f\n1\n", x1);

    }else if (delta > 0)
    {
        float x1 = ((-B) + sqrt(delta)) / (2 * A);
        float x2 = ((-B) - sqrt(delta)) / (2 * A);
        printf("%.2f %.2f\n2\n", x1, x2);
    } 
}

int main(){
    float A, B, C;
    scanf("%f %f %f", &A, &B, &C);
    equacao(A, B, C);
}
