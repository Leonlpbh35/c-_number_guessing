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
    cout << "wähle eine Zahl zwischen 1 und 100" << endl;
    while(!found){
        cin >> input;
        if(input == randomNM) {
            tries += 1;
            cout << "Du hast die Zahl erraten es war: " << randomNM << " und du hast " << tries << " versuche gebraucht" << endl;
            return 0;
        }
        else if(input > randomNM) {
            tries += 1;
            cout << "Die Zahl ist niedriger" << endl;
        }
        else if(input < randomNM) {
            tries += 1;
            cout << "Die Zahl ist höher" << endl;
        }
    }
    return 0;
}
