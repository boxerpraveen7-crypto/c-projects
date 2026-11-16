
#include <stdio.h>

int main() {
    float maths, physics, chemistry;
    float cutoff;

    printf("===== CUTOFF CALCULATOR =====\n");

    printf("Enter Maths Mark: ");
    scanf("%f", &maths);

    printf("Enter Physics Mark: ");
    scanf("%f", &physics);

    printf("Enter Chemistry Mark: ");
    scanf("%f", &chemistry);

    cutoff = maths + (physics / 2) + (chemistry / 2);

    printf("\n===== CUTOFF RESULT =====\n");

    printf("Maths Mark     : %.2f\n", maths);
    printf("Physics Mark   : %.2f\n", physics);
    printf("Chemistry Mark : %.2f\n", chemistry);

    printf("--------------------------\n");
    printf("Your Cutoff is : %.2f / 200\n", cutoff);

    return 0;
}
