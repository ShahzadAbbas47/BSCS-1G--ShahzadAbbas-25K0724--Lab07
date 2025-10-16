#include <stdio.h>

int main()
{
    int arr[10];
    int pass[10], fail[10];
    int i, passc = 0, failc = 0;
    float passSum = 0, failSum = 0;
    
  
    for (i = 0; i < 10; i++) {
        printf("Enter the marks of quiz (0–10) or -1 to terminate: ");
        scanf("%d", &arr[i]);

        if (arr[i] == -1) {
            break;
        }

        if (arr[i] >= 5 && arr[i] <= 10) {
            pass[passc++] = arr[i];
            passSum += arr[i];
        } else if (arr[i] >= 0 && arr[i] < 5) {
            fail[failc++] = arr[i];
            failSum += arr[i];
        } else {
            printf("Invalid input! Please enter between 0–10.\n");
            i--; 
        }
    }

   
    if (passc == 0) printf("None");
    printf("\nAverage of passing students: %.2f\n", (passc > 0) ? (passSum / passc) : 0);


   
    if (failc == 0) printf("None");
    printf("\nAverage of failing students: %.2f\n", (failc > 0) ? (failSum / failc) : 0);

    return 0;
}

