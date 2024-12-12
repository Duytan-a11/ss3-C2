#include <stdio.h>

int main()
{
    float edge, height, area;
    printf("chieu dai canh day edge: ");
    scanf("%f", &edge);
    
    printf("chieu cao height: ");
    scanf("%f", &height);
    
    area = (edge * height) / 2;
    
    printf("Dien tich cua tam giac = %.2f", area);
    
    return 0;
}
