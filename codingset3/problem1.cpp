#include<iostream>
using namespace std;
class Addition
{
    public : 
    int num1,  num2 ;
    void add()
        {
            cout<< " sum = "<< num1 + num2 ;

        }
    
};
int main()
{
    Addition obj ;
    cout<< " enter number ";
    cin>> obj.num1 >> obj.num2;
    obj.add();
    return 0;
}
