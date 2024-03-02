#include <stdio.h>
#include <string.h>

void reverse(char* str) {
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int to_decimal(char s, char num[]) {
    int sys_digits;
    if (s == 'b')
        sys_digits = 2;
    else if (s == 'o')
        sys_digits = 8;
    else if (s == 'h')
        sys_digits = 16;
    else
        return 1;

    int output = 0;
    for (int i = 0; i < strlen(num); i++) {
        int digit = num[i] - '0'; //subtract ASCII value of '0' from the digit to get it in int form

        //converts hexadecimal form's A,B,C,D,E,F to integers
        switch (num[i])
        {
        case 'A':
            digit = 10;
            break;
        case 'B':
            digit = 11;
            break;
        case 'C':
            digit = 12;
            break;
        case 'D':
            digit = 13;
            break;
        case 'E':
            digit = 14;
            break;
        case 'F':
            digit = 15;
            break;
        }
        
        int power = strlen(num) - i - 1;

        for (int j = 0; j < power; j++)
            digit *= sys_digits;
        
        output += digit;
    }
    return output;
}

int main() {
    char octal[101], binary[101], hexadecimal[101];
    int decimal_val = 0;

    printf("Enter binary number: ");
    scanf("%s",&binary);
    printf("Enter octal number: ");
    scanf("%s",&octal);
    printf("Enter hexadecimal number: ");
    scanf("%s",&hexadecimal);

    //binary to octal
    decimal_val = to_decimal('b',binary);
    int octal_val = 0, place_val = 1;

    while (decimal_val != 0) {
        octal_val += (decimal_val % 8) * place_val;
        place_val *= 10;
        decimal_val /= 8;
    }
    printf("\n%s in Binary is %d in Octal\n", binary, octal_val);
    

    //octal to hexadecimal
    decimal_val = to_decimal('o',octal);
    char hexadecimal_val[101] = "";
    char face_val;
    int counter = 0;

    while (decimal_val != 0) {
        if (decimal_val % 16 == 10)
            face_val = 'A';
        else if (decimal_val % 16 == 11)
            face_val = 'B';
        else if (decimal_val % 16 == 12)
            face_val = 'C';
        else if (decimal_val % 16 == 13)
            face_val = 'D';
        else if (decimal_val % 16 == 14)
            face_val = 'E';
        else if (decimal_val % 16 == 15)
            face_val = 'F';
        else
            face_val = (decimal_val % 16) + '0';    
        
        hexadecimal_val[counter] =  face_val;
        decimal_val /= 16;
        counter++;
    }
    // Reversing Hexadecimal string
    reverse(hexadecimal_val);
    
    printf("\n%s in Octal is %s in Hexadecimal\n", octal, hexadecimal_val);



    //hexadecimal to binary
    decimal_val = to_decimal('h', hexadecimal);
    int binary_val = 0;
    place_val = 1;

    while (decimal_val != 0) {
        binary_val += (decimal_val % 2) * place_val;
        place_val *= 10;
        decimal_val /= 2;
    }
    printf("\n%s in Hexadecimal is %d in Binary\n", hexadecimal, binary_val);

}

