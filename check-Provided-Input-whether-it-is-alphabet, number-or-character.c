#include<stdio.h>
#include<ctype.h>

//Input : check whether a input is Alphabet or Digit or special character

//Output : number/alphabet/special character

int main(){

    char input;
    scanf("%c", &input);

    /*
    if((input >= 'A' && input <= 'Z') || (input >= 'a' && input <= 'z')){
        printf("It's an Alphabet!");
    }else if(input >= '0' && input <= '9'){
        printf("It's a Number!");
    }else{
        printf("It's a Special Character!");
    }
    */

    if(isalpha(input)){
        printf("It's an Alphabet!");
    }else if(isdigit(input)){
        printf("It's a Number!");
    }else{
        printf("It's a Special Character!");
    }

return 0;
}
