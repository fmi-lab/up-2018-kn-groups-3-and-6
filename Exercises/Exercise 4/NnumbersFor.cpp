#include<iostream>

using namespace std;
int main()
{

    int N;
    cin>>N;
    if(N<=0)
    {
        cout<<"greshen vhod\n";
        return 0;
    }
    int number;
    cin>>number;
    double maximum, minimum;
    int counter = 0;
    maximum = minimum = number;
    if(number % 3 == 1)
    {
        counter ++;
    }
    N--;
    for (int i = 0; i<N; i++)
    {
        cin>>number;
        if(maximum < number)
        {
            maximum = number;
        }
        else if (minimum > number)
        {
            minimum = number;
        }
        if(number % 3 == 1)
        {
            counter ++;
        }
    }

    cout<<"maximum = "<<maximum<<"\nminimum = "<<minimum<<"\ncounter = "<<counter;
}
