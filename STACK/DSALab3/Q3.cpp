#include <iostream>
#include <string>
#include "Stack.h"
using namespace std;

int precedence(char op) {
	if (op == '+' || op == '-')
		return 1;
	if (op == '*' || op == '/')
		return 2;
	return 0;
}

string infixToPostfix(string infix, Stack<char>& s) {
	string postfix;

	for (char ch : infix) {
		if (ch >= '0' && ch <= '9') {
			postfix += ch;
		}
		else if (ch == '(') {
			s.push(ch);
		}
		else if (ch == ')') {
			while (!s.empty() && s.top() != '(') {
				postfix += s.top();
				s.pop();
			}
			if (!s.empty() && s.top() == '(') {
				s.pop();
			}
		}
		else {
			while (!s.empty() && precedence(ch) <= precedence(s.top())) {
				postfix += s.top();
				s.pop();
			}
			s.push(ch);
		}
	}

	while (!s.empty()) {
		postfix += s.top();
		s.pop();
	}

	return postfix;
}

int evaluatePostfix(string postfix, Stack<int>& s) {
	for (char ch : postfix) {
		if (ch >= '0' && ch <= '9') {
			s.push(ch - '0');
		}
		else {
			int num2 = s.top();
			s.pop();
			int num1 = s.top();
			s.pop();

			switch (ch) {
			case '+': s.push(num1 + num2); break;
			case '-': s.push(num1 - num2); break;
			case '*': s.push(num1 * num2); break;
			case '/': s.push(num1 / num2); break;
			}
		}
	}

	return s.top();
}

int main() {
	Stack<char> opStack;
	Stack<int> valStack;
	string infix, postfix;
	int result;

	cout << "Enter an infix expression: ";
	cin >> infix;

	postfix = infixToPostfix(infix, opStack);
	cout << "Postfix expression: " << postfix << endl;

	result = evaluatePostfix(postfix, valStack);
	cout << "Result: " << result << endl;

	return 0;
}
