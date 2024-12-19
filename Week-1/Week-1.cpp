// Week-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    //1:
    cout << "Enter your age: ";
    int age;
    cin >> age;
    cout << "Enter your name: ";
    string name;
    cin >> name;
    cout << "your name is : "
        << name << endl
        << "your age is : "
        << age << endl;

    //2:
    //a:
    cout << "Temprature in celsius :";
    double Temp;
    cin >> Temp;
    double Fahrenheit = (Temp * 1.8) + 32;
    cout << "Temprature in Fahrenheit : " << Fahrenheit << endl;

    //b:
    cout << "Enter distance in Kilometers : ";
    double KiloM;
    cin >> KiloM;
    double Miles = KiloM * 1.8;
    cout << "Distance in miles : " << Miles << endl;

    //c:
    cout << "Enter weight in pounds : ";
    double lbs;
    cin >> lbs;
    double Kgs = lbs / 2.2046;
    cout << "Weight in Kilograms : " << Kgs << endl;

    //d:
    cout << "Enter amountin Dollars : ";
    double Dol;
    cin >> Dol;
    double Eur = Dol * .7618;
    cout << "Amount in Euros : " << Eur << endl;


    //3:

    vector <float> VEC = { 0.23,0.42,0.6 ,1.2 };
    float Average;
    float X = 0;
    for (int i = 0; i < VEC.size(); i++)
    {
        X = X + VEC[i];
    }
    Average = X / VEC.size();
    cout << "Average is : " << Average << endl;


    //4:

    //a:
    vector <int> VEC2{};
    ;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enetr an integer: ";
        int INT;
        cin >> INT;
        VEC2.push_back(INT);

    }

    cout << "Array : ";
    for (int i = 0; i < VEC2.size(); i++)
    {
        cout << VEC2[i] << " ";

    }

    int Sum = 0;
    for (int i = 0; i < VEC2.size(); i++)
    {
        Sum = Sum + VEC2[i];

    }
    cout << "\nSum : " << Sum << endl;

    //b:
    sort(VEC2.begin(), VEC2.end(), greater<int>());

    cout << "Sorted array : ";
    for (int i = 0; i < VEC2.size(); i++)
    {
        cout << VEC2[i] << " ";

    }

    //c:
    int target;
    cout << "\nEnter the number you are searching for : ";
    cin >> target;

    auto it = find(VEC2.begin(), VEC2.end(), target);

    if (it != VEC2.end())
    {
        cout << "vector contains: " << target << endl;
    }
    else {
        cout << "vector does not contain: " << target << endl;
    }








}
