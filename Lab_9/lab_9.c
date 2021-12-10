#include <stdio.h>

int main()
{
    int numbers = 0;
    int upper = 0;
    int lower = 0;
    char number;
    char str[1024] = {};
    printf("%s\n", "Fill the string to scan it:");
    scanf("%s", &str);
    for(int i=0; i<sizeof(str) / sizeof(char) -1; i++) {
        if(str[i] >= '0' && str[i] <= '9') {
            numbers++;
        } else if(str[i] >= 'A' && str[i] <= 'Z') {
            upper++;
        } else if(str[i] >= 'a' && str[i] <= 'z') {
            lower++;
        }
    }
    printf("Lower: %d, upper: %d, numbers: %d \n", lower, upper, numbers);

    printf("Number of spent minutes\n");
    int minutes;
    scanf("%i", &minutes);
    
    printf("Fill the cost of phone\n");
    int cost;
    scanf("%i", &cost);
    
    printf("Fill the cost of overdraft\n");
    int overdraft;
    scanf("%i", &overdraft);
    
    if ((cost / 499) >= overdraft) {
        printf("Incorrect cost of overdraft\n");
        return 0;
    }

    int totalCost;
    if (minutes <= 499) {
        totalCost = cost;
    } else {
        totalCost = ((minutes - 499) * overdraft) + cost;
    }
    printf("%s\n", "Your total cost is:");
    printf("%i\n", totalCost);
    return 0;
}