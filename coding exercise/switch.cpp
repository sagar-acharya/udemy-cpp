#include <iostream>
using namespace std;

int main() {
    //----WRITE YOUR CODE BELOW THIS LINE----
    int day_code{0};

    cout << "Enter Day Code " << endl;
    cin >> day_code;
    
    switch (day_code) {
        case 0: 
            cout << "Sunday";
            break;
        case 1:
            cout << "Monday";
            break;
        case 2: 
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5: 
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        default:
            cout << "Error - illegal day code";
    }
    
    
    //----WRITE YOUR CODE ABOVE THIS LINE----
    return 0;
}