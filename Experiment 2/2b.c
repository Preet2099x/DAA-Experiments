#include<stdio.h>

void decimaltobinary(int decimal) {
    int binary[32];
    int index = 0;
    if (decimal == 0) {
        printf("0");
    }
    while (decimal > 0) {
        binary[index] = decimal % 2;
        decimal = decimal / 2;
        index++;
    }
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
}

int main() {
    int decimal;
    printf("Enter a number: ");
    scanf("%d", &decimal);
    printf("%d in binary: ", decimal);
    decimaltobinary(decimal);
    return 0;
}