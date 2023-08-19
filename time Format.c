#include <stdio.h>

int main() {
    int Hour, Minute, Second, n;

    printf("Enter the number of seconds: ");
    scanf("%d", &n);

    Hour = n/ 3600;
    Minute = (n % 3600) / 60;
    Second = n % 60;

    printf("Converted format = %d:%d:%d", Hour, Minute, Second);

    return 0;
}
