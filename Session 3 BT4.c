#include <stdio.h>

int main()
{
    float math, literature, english, sum, avg;
    printf("Nhap diem toan: ");
    scanf("%f", &math);
    
    printf("Nhap diem van: ");
    scanf("%f", &literature);
    
    printf("Nhap diem tieng anh: ");
    scanf("%f", &english);
    
    sum = math + literature + english;
    avg = sum / 3.0;
    
    printf("Tong diem: %.2f\n", sum);
    printf("Diem trung binh: %.2f", avg);

    return 0;
}
