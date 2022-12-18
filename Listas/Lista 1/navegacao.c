#include <stdio.h>
#include <math.h>

int main()
{
    float pix, piy, ax, ay, bx, by, cx, cy, d1, d2, d3;
    scanf("%f %f", &pix, &piy);
    scanf("%f %f", &ax, &ay);
    scanf("%f %f", &bx, &by);
    scanf("%f %f", &cx, &cy);

    d1 = sqrt(pow((ax - pix), 2) + pow((ay - piy), 2));
    d2 = sqrt(pow((bx - pix), 2) + pow((by - piy), 2));
    d3 = sqrt(pow((cx - pix), 2) + pow((cy - piy), 2));

    if (d1 <= d2 && d1 <= d3)
    {
        d2 = sqrt(pow((bx - ax), 2) + pow((by - ay), 2));
        d3 = sqrt(pow((cx - ax), 2) + pow((cy - ay), 2));
        if (d2 <= d3)
        {
            printf("A B C");
        }
        else
        {
            printf("A C B");
        }
    }
    else if (d2 < d1 && d2 <= d3)
    {
        d1 = sqrt(pow((ax - bx), 2) + pow((ay - by), 2));
        d3 = sqrt(pow((cx - bx), 2) + pow((cy - by), 2));
        if (d1 <= d3)
        {
            printf("B A C");
        }else if (d3 < d1)
        {
            printf("B C A");
        }
    }
    else if (d3 < d1 && d3 < d2)
    {
        d1 = sqrt(pow((ax - cx), 2) + pow((ay - cy), 2));
        d2 = sqrt(pow((bx - cx), 2) + pow((by - cy), 2));
        if (d1 <= d2)
        {
            printf("C A B");
        }
        else
        {
            printf("C B A");
        }
    }
}