/*
The distance between two cities (in km.) is input through the keyboard. Write a program to convert and print this distance in meters, feet, inches and centimeters.
*/
#include <stdio.h>

int main() {
    float distanceKm;
    printf("Enter the distance between two cities in kilometers: ");
    scanf("%f", &distanceKm);

    float distanceMeters = distanceKm * 1000;
    float distanceFeet = distanceKm * 3280.84;
    float distanceInches = distanceKm * 39370.1;
    float distanceCentimeters = distanceKm * 100000;

    printf("Distance in meters: %f\n", distanceMeters);
    printf("Distance in feet: %f\n", distanceFeet);
    printf("Distance in inches: %f\n", distanceInches);
    printf("Distance in centimeters: %f\n", distanceCentimeters);

    return 0;
}
