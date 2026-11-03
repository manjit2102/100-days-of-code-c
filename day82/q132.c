/*
name:manjit
roll:590041123
day:82 question:132
date:30-10-2026

Q132: Define an enum for traffic lights (RED, YELLOW, GREEN)
and print 'Stop', 'Wait', or 'Go' based on its value.
*/

#include <stdio.h>

enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main() {
    enum TrafficLight light = GREEN;

    if (light == RED)
        printf("Stop");
    else if (light == YELLOW)
        printf("Wait");
    else
        printf("Go");

    return 0;
}
