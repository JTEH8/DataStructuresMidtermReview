#include "dlist.h"


int main()
{
    dlist object;
    object.build();
    object.display();

    //PLEASE PUT YOUR CODE HERE to call the function assigned
    object.remove9(object.getHead());
    object.display();
    
    return 0;
}
