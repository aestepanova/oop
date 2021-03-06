﻿#include <cstdio>
#include <malloc.h>
#include <iostream>
#include "bigNumber.h"
#include "Stack.h"

using namespace Prog3a;
using namespace Stack1;

int main() {
    class Stack s(3);
    int i;
    std::cout << "----This is console calculator program with reverse polish notation----"<<std::endl;
    std::cout << "For using this program enter numbers and operators with this rules:" << std::endl << "1. Enter space after numbers" <<std::endl<< "2. To get negative number use - before number without space" <<std::endl <<"3. Enter only number with 47 digits and less "<<std::endl<<"4. Enter Ctrl+Z to exit"<<std::endl<<"5. Use only operators from list:" << std::endl;
    std::cout << "   1. '+' - to sum" << std::endl << "   2. '^' - to substracting" << std::endl << "   3. '*' - to increase number by one digit" << std::endl << "   4. '/' - to decrease number by one digit" <<std::endl<< "   5. '=' - to get result"<<std::endl;
    std::cout << "----------------------Let's start calculations!------------------------" << std::endl;
    while (!feof(stdin)) {
        int c = getchar();
        char x[47];
        switch (c) {
        case EOF: break;
        case '\n':
        case ' ': break;
        case '=': {std::cout << "result:"; s.PrinstStack(); break; }
        case '+': {
             try { 
                 s.push1(s.pop().Sum(s.pop())); 
             }
             catch (const std::exception& msg) {
                 std::cout << msg.what() << std::endl;
             }
        break; }
        case '^': {
            try {
                s.push1(s.pop().Sub(s.pop()));
            }
            catch (const std::exception& msg) {
                std::cout << msg.what() << std::endl;
            }
            break; }
        case '*': {
            try {
                s.push1(s.pop().Inc10());
            }
            catch (const std::exception& msg) {
                 std::cout << msg.what() << std::endl;
            }
            break;
        }
        case '/': s.push1(s.pop().Dec10()); break;
        default:
            ungetc(c, stdin);
            std::cin >> x;
            s.push(x);
            break;
        }
    }
    return 0;
}