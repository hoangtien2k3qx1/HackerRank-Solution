#include<stdio.h>


// trong C thì không có tham chiếu, chỉ có C++ mới có tham chiếu, thay vào đó có thể dùng con trỏ.
void nhap(int *n) {
    printf("Nhap m: "); scanf("%d", n);
} 

int main() {
    int m;
    nhap(&m);
    printf("%d", m);
    return 0;
}