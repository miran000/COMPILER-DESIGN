#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cctype>

// Function to check if a character is an arithmetic operator
bool isArithmeticOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '%' || c == '=');
}

// Function to check if a string is a valid identifier (e.g., variable names)
bool isValidIdentifier(const std::string &str) {
    if (str.empty() || (!isalpha(str[0]) && str[0] != '_')) {
        return false;
    }
    for (int i = 1; i < str.length(); i++) {
        if(!isalnum(str[i]) && str[i] != '_') {
            return false;
        }
    }
    return true;
}

// Function to check if a string is a numeric constant
bool isNumericConstant(const std::string& input) {
    for (char c : input) {
        if (!isdigit(c)) {
            return false;
        }
    }
    return true;
}

// Function to tokenize a line of text into words and classify
void tokenizeAndClassify(const std::string& line) {
    std::string token = "";
    for (size_t i = 0; i < line.size(); ++i) {
        char currentChar = line[i];

        // If current character is a space, continue to next character
        if (isspace(currentChar)) {
            if (!token.empty()) {
                // Process the current token
                if (isNumericConstant(token)) {
                    std::cout << token << " is a Numeric Constant" << std::endl;
                } else if (isArithmeticOperator(token[0]) && token.size() == 1) {
                    std::cout << token << " is an Arithmetic Operator" << std::endl;
                } else if (isValidIdentifier(token)) {
                    std::cout << token << " is a Valid Identifier" << std::endl;
                } else {
                    std::cout << token << " is an Unknown Token" << std::endl;
                }
                token = ""; // Reset token
            }
            continue;
        }

        // If the current character is an operator, treat it as a separate token
        if (isArithmeticOperator(currentChar)) {
            if (!token.empty()) {
                // Process the current token
                if (isNumericConstant(token)) {
                    std::cout << token << " is a Numeric Constant" << std::endl;
                } else if (isValidIdentifier(token)) {
                    std::cout << token << " is a Valid Identifier" << std::endl;
                } else {
                    std::cout << token << " is an Unknown Token" << std::endl;
                }
                token = ""; // Reset token
            }
            std::cout << currentChar << " is an Arithmetic Operator" << std::endl;
            continue;
        }

        // Otherwise, build up the current token (it could be part of a number, operator, or identifier)
        token += currentChar;
    }

    // Process the last token after the loop finishes
    if (!token.empty()) {
        if (isNumericConstant(token)) {
            std::cout << token << " is a Numeric Constant" << std::endl;
        } else if (isArithmeticOperator(token[0]) && token.size() == 1) {
            std::cout << token << " is an Arithmetic Operator" << std::endl;
        } else if (isValidIdentifier(token)) {
            std::cout << token << " is a Valid Identifier" << std::endl;
        } else {
            std::cout << token << " is an Unknown Token" << std::endl;
        }
    }
}

int main() {
    // Open the input.txt file
    std::ifstream inputFile("input.txt");

    if (!inputFile.is_open()) {
        std::cerr << "Unable to open file" << std::endl;
        return 1;
    }

    std::string line;
    // Process each line of the file
    while (std::getline(inputFile, line)) {
        std::cout << "Processing line: " << line << std::endl;
        tokenizeAndClassify(line); // Tokenize and classify each line
    }

    inputFile.close();
    return 0;
}
