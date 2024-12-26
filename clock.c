/*

Digital Clock
26-December-2024
07:25 am


*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main()
{

    int hour, minute, second;
    hour = minute = second = 0;

    while (1)
    {   
        // clearing the terminal
        system("cls"); // you can use cls or clear both according to your computer

        // printing the timeing
        printf("%02d : %02d : %02d", hour, minute, second);
        fflush(stdout);
        // conditions to the clock
        second++;
        if (second == 60)
        {
            minute += 1;
            second = 0;
        }
        if (minute == 60)
        {
            hour += 1;
            minute = 0;
        }
        if (hour == 60)
        {
            hour = 0;
            minute = 0;
            second = 0;
        }
        sleep(1);
    }
    return 0;
}