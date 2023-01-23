#include <iostream>

using namespace std;

int main()
{
    //int room_width {0};
    //int room_length {0};

    cout << "Enter room width:";
    int room_width {0};
    cin >> room_width;

    cout << "Enter room length:";
    int room_length {0};
    cin >> room_length;

    cout << "The are of the room is " << room_width * room_length << " square feet" << endl;

    return 0;
}