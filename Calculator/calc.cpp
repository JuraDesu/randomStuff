#include <iostream>
#include <cmath>

float basicArithmetics(float numberA,float numberB, char mathOperator);

int main(){
    float numberA;
    float numberB;
    char mathOperator;
    char yesNo;

    do
    {
        std::cout << "Enter number A: ";
        std::cin >> numberA;

        std::cout << "Enter operator: ";
        std::cin >> mathOperator;

        std::cout << "Enter number B: ";
        std::cin >> numberB;

        std::cout << "Result: " << basicArithmetics(numberA, numberB, mathOperator) << '\n';

        std::cout << "Do you want to continue? (Y/n)";
        std::cin >> yesNo;

    } while(yesNo = 'Y' || 'y');
}

float basicArithmetics(float numberA,float numberB, char mathOperator){

    float rootExponent = 1 / numberB;

        switch(mathOperator){
        case '+':
            return numberA + numberB;
            break;
        case '-':
            return numberA - numberB;
            break;
        case '*':
            return numberA * numberB;
            break;
        case '/':
            return numberA / numberB;
            break;
        case '^':
            return std::pow(numberA, numberB);
        case 'r':
            return std::pow(numberA, rootExponent);
        default:
            std::cout << "Not a valid operator";
            return -1;
    }
}
