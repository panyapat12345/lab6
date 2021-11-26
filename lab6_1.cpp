#include<iostream>
using namespace std;

int main(){

    int num, num_even = 0, num_odd = 0;

    while(num != 0){

        cout << "Enter an integer: ";
        cin >> num;

        if(num != 0){
            if(num%2 == 0)
                num_even++;
            else
                num_odd++;
        }
    }

    cout << "#Even numbers = " << num_even << endl;
    cout << "#Odd numbers = " << num_odd;
    
    return 0;
}
