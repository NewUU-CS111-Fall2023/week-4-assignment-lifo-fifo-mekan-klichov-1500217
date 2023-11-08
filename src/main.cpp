/*
 * Author:
 * Date:
 * Name:
 */

#include <iostream>
#include "task_1.h"
#include "task_2.h"
#include "task_3.h"
#include "task_4.h"
#include "task_5.h"

int main() {
    std::cout << "Task 1" << std::endl;


    Stack stack1;

    stack1.push(5);
    stack1.push(10);
    stack1.push(15);

    cout << "Top element: " << stack1.topElement() << endl;

    stack1.pop();
    stack1.pop();
    stack1.pop();
    stack1.pop(); // Trying to pop from an empty stack

    if (stack1.isEmpty()) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Stack is not empty." << endl;
    }


    std::cout << "Task 2" << std::endl;

    int n;
    cin >> n;


    vector<int> order(n);
    for (int i = 0; i < n; ++i) {
        cin >> order[i];
    }

    moveCars(n, order);

    string brackets;
    cin >> brackets;

    if (isValidExpression(n, brackets)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    std::cout << "Task 3" << std::endl;

    string expression;
    getline(cin, expression);

    int result = evaluatePostfix(expression);
    cout << result << endl;

    std::cout << "Task 4" << std::endl;
    // call for task 4
    std::cout << "Task 5" << std::endl;
    // call for task 5
    return 0;
}
