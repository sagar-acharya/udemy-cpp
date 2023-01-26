#include <iostream>
using namespace std;

int main() {
    //----WRITE YOUR CODE BELOW THIS LINE----
    int age {15};
    const int driving_age {16};
    
    if (age >= driving_age)
        cout << "Yes - you can drive!";
    else 
        cout << "Sorry, come back in " << driving_age - age << " years";
        
    //----WRITE YOUR CODE ABOVE THIS LINE----
    return 0;
}