#include <iostream>
#include <random>

using namespace std;

int main() {
    random_device dev;
    mt19937 rng(dev());
    uniform_int_distribution<std::mt19937::result_type> dist6(1,100);

    int input;
    bool found = false;
    int randomNM = dist6(rng);
    int tries = 0;

    cout << randomNM << endl;
    cout << "choose a number between 1 and 100" << endl;
    while(!found){
        cin >> input;
        if(input == randomNM) {
            tries += 1;
            cout << "you guessed the number it was: " << randomNM << "you tried" << tries << " times" << endl;
            return 0;
        }
        else if(input > randomNM) {
            tries += 1;
            cout << "the number is lower" << endl;
        }
        else if(input < randomNM) {
            tries += 1;
            cout << "the number is higher" << endl;
        }
    }
    return 0;
}
