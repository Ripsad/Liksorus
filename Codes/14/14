#include <bits/stdc++.h>
using namespace std;



int main(){
    basic_string<char> num;
    std::string chek ="w";
    std:: string z;
    std:: string input;

    std::stack<std::string> stack;

    while(chek!="wd") {
        getline(std:: cin, input);
        std::istringstream fs(input);
        int i = 0, index = 0;



        while (input.find(' ', index) != -1) {
            index = input.find(' ', index + 1);
            i++;
        }
        if (i == 2) {
            fs >> z >> num;
            if (z == "push") {
                stack.push(num);
                cout << "ok"<<"\n";
            }

        }
        else {
            fs >> z;
            if (z == "pop") {
                std::cout << stack.top() << std::endl;
                stack.pop();
            }
            if (z == "back") {
                std::cout << stack.top() << std::endl;
            }
            if (z == "size") {
                cout <<stack.size() << "\n";
            }
            if (z == "clear") {
                while (!stack.empty()) {
                    stack.pop();
                }
                cout << "ok" <<"\n";
            }
            if (z == "exit") {
                cout << "bye"<<"\n";
                chek="wd";

            }

        }
    }




}
