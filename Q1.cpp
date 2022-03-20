#include<iostream>
#include<fstream>
#include<string>
using namespace std

int main() {
    ifstream plate("data.txt");
    int count = 0;
    string search = "the";
    string temp;
    while (plate >> temp) {
        if (temp == search) {
            ++count;
        }
    }
    cout << count << endl;
    return 0;
}
