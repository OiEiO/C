#include <stdio.h>
#define BIT_PER_BYTE 8
int main() {
    float download_speed_Mb;
    float file_size_Mb;

    printf("Please enter the download speed(in Mb/s): ");
    scanf("%f", &download_speed_Mb);
    printf("Please enter the file size(in Mb): ");
    scanf("%f", &file_size_Mb);
    printf("At %.2f megabits per second, a file of %.2f megabytes\n", download_speed_Mb, file_size_Mb);
    printf("download in %.2f seconds.\n", file_size_Mb * BIT_PER_BYTE / download_speed_Mb);

    return 0;
}
