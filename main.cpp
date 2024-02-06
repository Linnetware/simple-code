#include <iostream>

const int Pen{0};
const int Eraser{1};

int basicsum(int sumand1, int sumand2){
    return (sumand1 + sumand2);
}

int main(){
    int num1{3};
    int num2{7};
    int* totalsum{nullptr};

    char charmemvalue{'a'};

        //totalsum = new int{7};
        totalsum = new int;
        std::cout << *totalsum << std::endl;
        std::cout << "Please enter two integer numbers: " << std::endl;
        std::cin >> num1;
        std::cin >> num2;
        *totalsum = basicsum(num1, num2);
        std::cout << *totalsum << std::endl;

        std::cout << std::boolalpha;
        std::cout << "Is first input greater than second? " << (num1 > num2) << std::endl;

        std::cout << "Char value in variable: " << charmemvalue << std::endl;
        std::cout << "Char value in memory: " << static_cast<int>(charmemvalue) << std::endl;

    delete totalsum;
    totalsum = nullptr;
    
    /*Swicth exercise*/

    int tool{Pen};

    switch(tool){
        case Pen: {
            std::cout << "The tool is a " << tool << std::endl;
        }
        break;
        case Eraser: {
            std::cout << "The tool is an Eraser" << std::endl;
        }
        break;
        default: {
            std::cout << "The tool is whatever" << std::endl;
        }
    }

    return (0);

}