#include <stdio.h>

void convertSize(double sizeInBytes) {
    printf("Size in Bytes: %.2f\n", sizeInBytes);
    
    double sizeInKilobytes = sizeInBytes / 1024;
    printf("Size in Kilobytes: %.2f\n", sizeInKilobytes);

    double sizeInMegabytes = sizeInKilobytes / 1024;
    printf("Size in Megabytes: %.2f\n", sizeInMegabytes);

    double sizeInGigabytes = sizeInMegabytes / 1024;
    printf("Size in Gigabytes: %.2f\n", sizeInGigabytes);
}

int main() {
    double sizeInBytes;
    printf("Enter size in bytes: ");
    scanf("%lf", &sizeInBytes);

    convertSize(sizeInBytes);

    return 0;
}
