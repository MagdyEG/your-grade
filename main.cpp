#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
    int y,z;
    float x1,x2,x3,x4,x5,x6,sum,av;

    cout <<"Enter 6 integer number you want\n";
    cin>>x1>>x2>>x3>>x4>>x5>>x6;

    sum=x1+x2+x3+x4+x5+x6;
    av=sum/6.0;
    y=av/10;

    cout<<sum<< "\\" << "\\" <<"The Summation\n";
    cout<<av<< "\\"<< "\\" <<"The Average\n";
    cout<<"enter your grade\n";
    cin >> z;
switch(z)
{
    case 10:cout<<"Excellent\n";
    break;

    case 9:cout<<"Excellent\n";
    break;

    case 8:cout<<"Very good\n\a";
    break;

    case 7:cout<<"Good\n";
    break;

    case 6:cout<<"Medium\n";
    break;

    case 5:cout<<"Pass\n";
    break;

    case 4:cout<<"Failed\n";
    break;

    case 3:cout<<"Failed\n";
    break;

    case 2:cout<<"Failed\n";
    break;

    case 1:cout<<"Failed\n";
    break;

    case 0:cout<<"Failed\n";
    break;
     }

    cout << "thanks"<<endl;
    return 0;
}
