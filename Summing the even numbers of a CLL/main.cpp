#include "clist.h"
#include <iostream>


int main()
{
    clist object;
    object.build();		//builds a circular LL
    object.display();	//displays the list

    //PLEASE PUT YOUR CODE HERE to call the function assigned
    int sum = 0;
    object.sumEven(object.getHead(), sum);

    cout << "Here's a sum of all the even numbers in the CLL: " << sum << endl;

    object.display(); //resulting list after your function call!
    
    return 0;
}
