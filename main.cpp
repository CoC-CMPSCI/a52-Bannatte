#include <iostream>

int main()
{
    in maximum_value, num;

    cin >> maximum_value;
    for (int i = 0; i < 9; ++i) {
        cin >> num;
        if (maximum_value < num) {
            maximum_value = num;
        }
    }

    cout << "Maximum value is: " << maximum_value << endl;
    
    return 0;
}
