#include <stdio.h>

int main() {
    int UPC[12];
    int Sum_of_numbers_in_odd_position;
    int Sum_of_numbers_in_even_position;
    int digit;
    printf("Enter UPC Code : ");
    for (int i = 0; i < 12; ++i) {
        scanf("%d", &UPC[i]);
    }
    printf("The Array contains : ");
    for (int i = 0; i < 12; ++i) {
        printf("%d, ", UPC[i]);
    }
    for (int i = 0; i < 12; i = i + 2) {
        Sum_of_numbers_in_odd_position += UPC[i];
    }
    printf("\n Sum of numbers in odd position = %d",Sum_of_numbers_in_odd_position);
    Sum_of_numbers_in_odd_position = Sum_of_numbers_in_odd_position *3;
    for (int i = 1; i < 12; i = i + 2) {
        Sum_of_numbers_in_even_position += UPC[i];
    }
    printf("\n Sum of numbers in even position = %d",Sum_of_numbers_in_even_position);
    Sum_of_numbers_in_even_position = Sum_of_numbers_in_odd_position + Sum_of_numbers_in_even_position;
    printf("\n %d", Sum_of_numbers_in_even_position);
    if (Sum_of_numbers_in_even_position % 10 == 0){
        digit = Sum_of_numbers_in_even_position % 2;
        printf("\n Digit Number : %d", digit);}
    else{
        digit = 10 - (Sum_of_numbers_in_even_position % 2);
        printf("\n Digit Number : %d", digit);}
    if (digit == UPC[12] || digit == 0)
        printf("\n UPC code True");
    else
        printf("\n UPC code False");
    return 0;
}
