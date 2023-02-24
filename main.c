#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void createArray(char a[30][30], char b[30][8]);

void printString(char[], char a[30][30], char b[30][8]);

char* printStringOne(char[], char a[30][30], char b[30][8]);

char* printStringTwo(char[], char a[30][30], char b[30][8]);

char* printStringThree(char[], char a[30][30], char b[30][8]);

char* printStringFour(char[], char a[30][30], char b[30][8]);

char* printStringFive(char[], char a[30][30], char b[30][8]);

char* printStringSix(char[], char a[30][30], char b[30][8]);

char* printStringSeven(char[], char a[30][30], char b[30][8]);


int main(int argc, const char * argv[]) {
    int repeat = 1;
    while(repeat) {
        char number[8];
        char a[31][30];
        char b[30][8];
        printf("\nEnter number or enter -1 to exit: ");
        createArray(a, b);
        scanf("%s", number);
        if (strcmp(number, "-1") == 0) {
            printf("Exiting program...\n");
            repeat = 0;
        } else {
            printString(number, a, b);
        }
    }
    return 0;
}

void createArray(char a[31][30], char b[30][8]) {
    strcpy(a[0], "One");
    strcpy(a[1], "Two");
    strcpy(a[2], "Three");
    strcpy(a[3], "Four");
    strcpy(a[4], "Five");
    strcpy(a[5], "Six");
    strcpy(a[6], "Seven");
    strcpy(a[7], "Eight");
    strcpy(a[8], "Nine");
    strcpy(a[9], "Ten");
    strcpy(a[10], "Eleven");
    strcpy(a[11], "Twelve");
    strcpy(a[12], "Thirteen");
    strcpy(a[13], "Fourteen");
    strcpy(a[14], "Fifteen");
    strcpy(a[15], "Sixteen");
    strcpy(a[16], "Seventeen");
    strcpy(a[17], "Eighteen");
    strcpy(a[18], "Nineteen");
    strcpy(a[19], "Twenty");
    strcpy(a[20], "Thirty");
    strcpy(a[21], "Fourty");
    strcpy(a[22], "Fifty");
    strcpy(a[23], "Sixty");
    strcpy(a[24], "Seventy");
    strcpy(a[25], "Eighty");
    strcpy(a[26], "Ninety");
    strcpy(a[27], "Hundred");
    strcpy(a[28], "Thousand");
    strcpy(a[29], "Million");

    strcpy(b[0], "1");
    strcpy(b[1], "2");
    strcpy(b[2], "3");
    strcpy(b[3], "4");
    strcpy(b[4], "5");
    strcpy(b[5], "6");
    strcpy(b[6], "7");
    strcpy(b[7], "8");
    strcpy(b[8], "9");
    strcpy(b[9], "10");
    strcpy(b[10], "11");
    strcpy(b[11], "12");
    strcpy(b[12], "13");
    strcpy(b[13], "14");
    strcpy(b[14], "15");
    strcpy(b[15], "16");
    strcpy(b[16], "17");
    strcpy(b[17], "18");
    strcpy(b[18], "19");
    strcpy(b[19], "20");
    strcpy(b[20], "30");
    strcpy(b[21], "40");
    strcpy(b[22], "50");
    strcpy(b[23], "60");
    strcpy(b[24], "70");
    strcpy(b[25], "80");
    strcpy(b[26], "90");
    strcpy(b[27], "100");
    strcpy(b[28], "1000");
    strcpy(b[29], "1000000");
}

void printString(char number[8], char a[31][30], char b[30][8]) {
    if (strlen(number) == 1) {
        printStringOne(number, a, b);
    } else if (strlen(number) == 2) {
        printStringTwo(number, a, b);
    }
    else if (strlen(number) == 3) {
        printStringThree(number, a, b);
    }
    else if (strlen(number) == 4) {
        printStringFour(number, a, b);
    }
    else if (strlen(number) == 5) {
        printStringFive(number, a, b);
    }
    else if (strlen(number) == 6) {
//        printStringSix(number, a, b);
    }
    else {
//        printStringSeven(number, a, b);
    }
}

char* printStringOne(char number[8], char a[31][30], char b[30][8]) {
    int num = atoi(number);
    printf("%s ", a[num-1]);
    return a[num-1];
}

char* printStringTwo(char number[], char a[31][30], char b[30][8]) {
    int num = atoi(number);
    int foundNum = 0;
    int i = 0;
    int x = 0;
    int z = 0;
    for (i = 0; (i < 30) & (!foundNum); i++) {
        if (strcmp(number, b[i]) == 0) {
            printf("%s ", a[i]);
            foundNum = 1;
        }
    }
    if (!foundNum) {
        char numOne[100];
        char numTwo[100];
        x = (num / 10) * 10;
        z = num % 10;
        snprintf(numOne, 10, "%d", x);
        snprintf(numTwo, 10, "%d", z);
        for (i = 0; i < 30; i++) {
            if (strcmp(numOne, b[i]) == 0) {
                printf("%s ", a[i]);
            }
        }
        printStringOne(numTwo, a, b);
    }
    return a[i];
}

char* printStringThree(char number[], char a[31][30], char b[30][8]) {
    int num = atoi(number);
    int foundNum = 0;
    int i = 0;
    int x = 0;
    int z = 0;
    for (i = 0; (i < 30) & (!foundNum); i++) {
        if (strcmp(number, b[i]) == 0) {
            printf("%s\n", a[i]);
            foundNum = 1;
        }
    }
    if (!foundNum) {
        char numOne[100];
        char numTwo[100];
        x = (int)(num / 100);
        z = num % 100;
        snprintf(numOne, 10, "%d", x);
        snprintf(numTwo, 10, "%d", z);
        for (i = 0; i < 30; i++) {
            if (strcmp(numOne, b[i]) == 0) {
                printf("%s Hundred ", a[i]);
            }
        }
        printStringTwo(numTwo, a, b);
    }
    return a[i];
}

char* printStringFour(char number[], char a[31][30], char b[30][8]) {
    int num = atoi(number);
    int foundNum = 0;
    int i = 0;
    int x = 0;
    int z = 0;
    for (i = 0; (i < 30) & (!foundNum); i++) {
        if (strcmp(number, b[i]) == 0) {
            printf("One %s\n", a[i]);
            foundNum = 1;
        }
    }
    if (!foundNum) {
        char numOne[100];
        char numTwo[100];
        x = (int)(num / 1000);
        z = num % 1000;
        snprintf(numOne, 10, "%d", x);
        snprintf(numTwo, 10, "%d", z);
        for (i = 0; i < 30; i++) {
            if (strcmp(numOne, b[i]) == 0) {
                printf("%s Thousand ", a[i]);
            }
        }
        printStringThree(numTwo, a, b);
    }
    return a[i];
}

char* printStringFive(char number[], char a[31][30], char b[30][8]) {
    int num = atoi(number);
    int i = 0;
    int x = 0;
    int z = 0;
    char numOne[100];
    char numTwo[100];
    x = (int)(num / 1000);
    z = num % 1000;
    snprintf(numOne, 10, "%d", x);
    snprintf(numTwo, 10, "%d", z);
    printStringTwo(numOne, a, b);
    printf("Thousand ");
    if (z != 0) {
        printStringFour(numTwo, a, b);
    }
    return a[i];
}

//char* printStringSix(char number[], char a[30][8], char b[30][8]) {
//    int num = atoi(number);
//    int foundNum = 0;
//    int i = 0;
//    int x = 0;
//    int z = 0;
//    for (i = 0; (i < 30) & (!foundNum); i++) {
//        if (strcmp(number, b[i]) == 0) {
//            printf("%s\n", a[i]);
//            foundNum = 1;
//        }
//    }
//    if (!foundNum) {
//        char numOne[100];
//        char numTwo[100];
//        x = (int)(num / 1000);
//        z = num % 1000;
//        snprintf(numOne, 10, "%d", x);
//        snprintf(numTwo, 10, "%d", z);
//        for (i = 0; i < 30; i++) {
//            if (strcmp(numOne, b[i]) == 0) {
//                printf("%s Thousand ", a[i]);
//            }
//        }
//        printStringFive(numTwo, a, b);
//    }
//    return a[i];
//}
//
//char* printStringSeven(char number[], char a[30][8], char b[30][8]) {
//    int num = atoi(number);
//    int foundNum = 0;
//    int i = 0;
//    int x = 0;
//    int z = 0;
//    for (i = 0; (i < 30) & (!foundNum); i++) {
//        if (strcmp(number, b[i]) == 0) {
//            printf("%s\n", a[i]);
//            foundNum = 1;
//        }
//    }
//    if (!foundNum) {
//        char numOne[100];
//        char numTwo[100];
//        x = (int)(num / 1000);
//        z = num % 1000;
//        snprintf(numOne, 10, "%d", x);
//        snprintf(numTwo, 10, "%d", z);
//        for (i = 0; i < 30; i++) {
//            if (strcmp(numOne, b[i]) == 0) {
//                printf("%s Thousand ", a[i]);
//            }
//        }
//        printStringSix(numTwo, a, b);
//    }
//    return a[i];
//}
