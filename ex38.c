#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n < 0) {
        printf("Error: n must be greater than or equal to 0");
        return 1;
    }
    // Biến lưu trữ kết quả của n!
    // Lưu ý: bạn cần khởi tạo giá trị cho biến này = 1
    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial = factorial * i;
    }
    printf("%d", factorial);
    return 0;
}