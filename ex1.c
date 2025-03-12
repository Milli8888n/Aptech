#include <stdio.h>
int main()
{
    float x, y, z;
    printf("Nhap lan luot x, y va z: \n");
    scanf("%f%f%f", &x,&y,&z);
    float ketQua = x * y / z;
    printf("Ket qua: %f", ketQua);
    return 0;
}