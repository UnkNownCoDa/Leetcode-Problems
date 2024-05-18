#include <stdio.h>

int romanToInt(char* c) {
    int num = 0;
    for (c; *c != '\0'; ++c){
        switch (*c){
            case 'I':
                c++;
                switch (*c){
                    case 'V':
                        num += 4;
                        break;
                    case 'X':
                        num += 9;
                        break;
                    default:
                        num += 1;
                        c--;
                        break;
                }
                break;

            case 'X':
                c++;
                switch (*c){
                    case 'L':
                        num += 40;
                        break;
                    case 'C':
                        num += 90;
                        break;
                    default:
                        num += 10;
                        c--;
                        break;
                }
                break;

            case 'C':
                c++;
                switch (*c){
                    case 'D':
                        num += 400;
                        break;
                    case 'M':
                        num += 900;
                        break;
                    default:
                        num += 100;
                        c--;
                        break;
                }
                break;

            case 'V':
                num += 5;
                break;

            case 'L':
                num += 50;
                break;

            case 'D':
                num += 500;
                break;

            case 'M':
                num += 1000;
                break;
        }
    }
    return num;
}
int main(){
    int num = romanToInt("LVIII");
    printf("%d\n", num);
    return 0;
}