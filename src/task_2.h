/*
 * Author:Mekan Klichov
 * Date: 08.11.2023
 * Name: Mekan Klichov
 */

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void moveCars(int n, vector<int>& order) {
    stack<int> track1, track2;
    vector<pair<int, int>> actions;

    int expectedCar = 1;
    int currentCarIndex = 0;

    while (!track2.empty() || currentCarIndex < n) {
        if (!track2.empty() && track2.top() == expectedCar) {
            track2.pop();
            actions.push_back({2, 1});
            ++expectedCar;
        } else if (currentCarIndex < n) {
            track1.push(order[currentCarIndex]);
            actions.push_back({1, 1});
            ++currentCarIndex;
        } else {
            break;
        }

        while (!track1.empty() && track1.top() == expectedCar) {
            track2.push(track1.top());
            track1.pop();
            actions.push_back({2, 1});
            ++expectedCar;
        }
    }

    if (expectedCar - 1 == n) {
        for (auto action : actions) {
            cout << action.first << " " << action.second << endl;
        }
    } else {
        cout << "0" << endl;
    }
}

bool isValidExpression(int n, string brackets) {
    stack<char> stk;
    for (int i = 0; i < n; ++i) {
        char current = brackets[i];
        if (current == '(' || current == '[' || current == '{') {
            stk.push(current);
        } else {
            if (stk.empty()) return false;
            char top = stk.top();
            if ((current == ')' && top != '(') ||
                (current == ']' && top != '[') ||
                (current == '}' && top != '{')) {
                return false;
            }
            stk.pop();
        }
    }
    return stk.empty();
}