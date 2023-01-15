#include<iostream>
using namespace std;
int main()
{
    //Using For Loop
    int i;
    for (i=0;i<10;i++)
    {
        cout<<i<<endl;
    }
    //Using While Loop 
    int j=0;
    while (j<10)
    {
    cout<<"Happy New Year"<<endl; 
    j++;       /* code */
    }

    // Using Do While Loop

    int sum=0, k=0;
    do{
        sum=sum+k;
        k++;
    }
    while (k<10);
    {
        cout<<"Sum is : "<<sum;
    }
    
    // Using Nasted Loop

    int a,b;
    for (a=0;a<=10;a++)
    {
        cout<<"\n";
        for (b=1;b<=a;b++)
        {
            cout<<"*";
        }
    }
    
    // Using  Break Statement
    int num=100;
    while(num<=200)
    {
        cout<<"Value is : "<<num<<endl;
        if (num==150)
        {
            break;
        }
        num=num+10;
    }
    cout<<"Out of the loop";

    //Using Continue Statement
        int con=100;
        while (con>=90)
        {
            if (con==96) 
            {
                con--;
                continue;
            }
            cout<<"Value is :"<<con<<endl; 
            con--;  /* code */
        }
        

    return 0;
}
