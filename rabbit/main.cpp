#include <iostream>

using namespace std;

int main()
{
    int ini_rabbits;
    cout<<"Initial number of rabbits: ";
    cin>>ini_rabbits;
    if (ini_rabbits <=0 ){
        cout<<"Initial number of rabbits must be strict positive";
        return -1;
    }

    int dead_rabbits;
    cout<<"Number of dead rabbits: ";
    cin>>dead_rabbits;
    if (dead_rabbits > ini_rabbits){
        cout<<"Number of dead rabbits can't be more than the rabbits we have ";
        return -1;
    }

    cout<<"Number of new rabbits: ";
    int new_rabbits;
    cin>>new_rabbits;

    cout <<ini_rabbits+new_rabbits-dead_rabbits<< endl;
    return 0;
}
