#include <stdio.h>

//Checks if FPB is an integer for every FPS & BPM combination from FPS == 1 to FPS == BPM

void calculate(int BPM) { 
    int FPS = 1;
    int framesPerBeat = 0;
    char FPBstring[] = "FPB";

    if(BPM) //This if statement prevents the print from happening if the user wishes to exit the program
        printf("%-8s FPS\n", FPBstring);

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

int main() {
    int BPM;
    while(BPM) {
        printf("Enter 0 to exit or enter BPM: ");
        scanf("%d", &BPM);
        calculate(BPM);
    }
    return 0;
}