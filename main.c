#include <stdio.h>
#include <stdlib.h>

//Checks if FPB is an integer for every FPS & BPM combination from FPS == 1 to FPS == BPM

void calculate(int BPM) { 
    int FPS = 1;
    int framesPerBeat = 0;

    while (FPS < BPM) //FPS can arbitrarily not go over BPM, there's probably a better way to set the range
    {
        if (((60 * FPS) % BPM) == 0) { 
            framesPerBeat = (60 * FPS) / BPM;
            printf(" %-8d %d\n", framesPerBeat, FPS);
        };
        FPS++;
    }
    return;
}

int main(int argc, char* argv[]) {
    int BPM = atoi(argv[1]);
    printf("%-8s %s\n", "FPB", "FPS");
    calculate(BPM);
    printf("program has finished, exiting...");
    return 0;
}
