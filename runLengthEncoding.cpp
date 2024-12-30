#include <iostream>
#include <string>
using namespace std;

string run(string input) {
    string output = "";
    for (int i = 0; i < input.length(); i++) {
        char currentChar = input[i];
        int count = 1;

        while (i + 1 < input.length() && input[i] == input[i + 1]) {
            count++;
            i++;
        }
        output += to_string(count) + currentChar;
    }
    return output;
}

int main() {
    string input = "aaaabbbcc";
    string result = run(input); 
    cout << "Output: " << result << endl;

    return 0;
}
