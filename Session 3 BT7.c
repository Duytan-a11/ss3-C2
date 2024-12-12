#include <stdio.h>

int main()
{
    int n, sum;
    printf("Nhap so nguyen 4 chu so: ");
    scanf("%d", &n);
    // n / 1000 :lấy ra giá trị hàng nghìn thousand
    // (n / 100) % 10 :lấy ra giá trị hàng trăm hundred
    // (n / 10) % 10 :lấy ra giá trị hàng chục ten
    // n % 10  :lấy ra giá trị hàng đơn vị unit

    sum = (n / 1000) + ((n / 100) % 10) + ((n / 10) % 10) + (n % 10);
    
    printf("Tong cua 4 so la = %d", sum);

    return 0;
}
