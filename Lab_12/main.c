#include <stdio.h>
#include <time.h>

int main()
{
    FILE *out_file = fopen("array.txt", "w");

    int times[10][3];
    time_t seconds = time(NULL);
    long long temporary_sec = 0;

    for(int i=0; i<10; i++) {
        temporary_sec = seconds + 24 * 3600 * i;

        struct tm *current = localtime(&temporary_sec);
        // year month day
        times[i][0] = current -> tm_year+1900;
        times[i][1] = current -> tm_mon;
        times[i][2] = current -> tm_mday;
    }

    for(int i=0; i<10; i++) {
       fprintf(out_file, "%d-%d-%d \n", times[i][0], times[i][1], times[i][2]);
    }

}
