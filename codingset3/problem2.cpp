#include<iostream>
using namespace std;
class Student 
{
    public :
    int rollno ;
    int marks ;
};
Student top(Student s1 ,  Student s2)
{
    if ( s1.marks > s2.marks )
    return s1;
    else
    return s2; 
}
int main()
{
Student s1 , s2, result ;
cout<<"enter rollno ";
cin >> s1.rollno ;
cout<<"enter marks";
cin>>s1.marks;
cout<<"enter rollno";
cin>>s2.rollno;
cout<<"enter marks";

result = top(s1 , s2);
cout<<"student with high marks";
cout<<" rollno " << result.rollno << endl;
cout<<" marks "<< result.marks << endl;
return 0;

}