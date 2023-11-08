/*
 * Author:Mekan Klichov
 * Date: 08.11.2023
 * Name: Mekan Klichov
 */

int evaluatePostfix(string expression) {
    stack<int> operands;

    for (char c : expression) {
        if (isdigit(c)) {
            operands.push(c - '0');
        } else {
            int operand2 = operands.top();
            operands.pop();
            int operand1 = operands.top();
            operands.pop();

            switch(c) {
                case '+':
                    operands.push(operand1 + operand2);
                    break;
                case '-':
                    operands.push(operand1 - operand2);
                    break;
                case '*':
                    operands.push(operand1 * operand2);
                    break;
                default:
                    break;
            }
        }
    }

    return operands.top();
}