#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv) {
    cout << "Hello world!" << endl;
    int age = 20;
    cout << "Your age is: " << age << endl;

    if(argc > 1) {
        cout << "Command line argument: " << argv[1] << endl;

        string name = argv[1];
        if(name == "world") {
            cout << "We are the world, We are the children" << endl;
        }
    }

    int sum = 0;
    for(int i=0; i <= 5; i++) {
        sum += i;
    }

    cout << "The sum of 1 to 5 is: " << sum << endl;
    return 0;
}

