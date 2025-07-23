#include <iostream>

/* @brief
 * happyBirthday : function name
 * caller is main()
 * void means, nothing to return
 */
void happyBirthday(){ 
    std::cout << "Happy Birthday to you\n";
}

/* @brief
 *   Input: 2 ints
 *   Output: sum of those 2 ints
 */
int addition(int a, int b) {
    int sum;
    //std::cout <<"Type a number: ";
    //std::cin >> a;
    //std::cout <<"Type another number: ";
    //std::cin >> b;
    sum = a + b;
    std::cout <<"The sum is:" << sum << "\n";
    return sum;
} 

int subtraction(int a, int b){
    int sub;
    sub = a - b;
    std::cout << "The answer is:" << sub << "\n";
    return sub;
}

int multiply(int a, int b) {
    int product;
    if (a==0 || b==0){
        product = a * b;
        std::cout <<"The product is:" << product << " Warning!! One of the factors is 0!!""\n";
    }
    else {
        product = a * b;
        std::cout <<"The product is:" << product <<"\n";
    }
    return product; 
}

int divide (int a, int b) {
    int quotient;
    if(b > 0) {
        quotient = a / b;
        std::cout <<"The quotient is:" << quotient <<"\n";
    }
    else if(b == 0) {
        std::cout <<"Incorrect divisor input: 0 " << "\n";
    }
    else if(b < 0) {
        quotient = a / b;
        std::cout <<"The negative quotient is:" << quotient <<"\n";
    }
    return quotient;
}


int main() {
    // Write C++ code here
    //happyBirthday();
    //std::cout << "happyBirthday() executed by me\n";
    //char ckuttu = 'k';
    //std::cout << cKuttu  << "\n";
    std::string sKuttu = "I am Kuttu ☺";
    std::cout << sKuttu <<"\n";
    addition(1, 2);
    subtraction(0, 1);
    multiply(0, 0);
    divide(2, -1);
    divide(22, 11);
    divide(35, 7);
    divide(45, 0);

    return 0;
}