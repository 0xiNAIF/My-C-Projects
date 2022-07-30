/* 
    Author : Naif Alghamdi
    Description : This is part of my learning C language :)

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declare The Variables
    float minEntered = 0;
    double minInYears = 525600; // => 60min * 24day * 365year
    double result = 0.0;
    // Get Input From User
    printf("Enter Your Minutes: ");
    scanf("%f", &minEntered);
    // Perform Calculations
    result = minEntered / (minInYears);
    // Print The Result
    printf("\nThe minutes you entered are: %0.5f and equals to %f years", minEntered, result);
    return 0;
}