#include <iostream>
#include<vector>
#include<map>
using namespace std;

#pragma warning (disable:4996)

#include"Penaly.h"


int main()
{   

    map<string,vector<Penaly>>carNo;

    //CAR 1
    carNo["10-PM-010"].push_back(Penaly("Qosa xett", "14.12.2021   14:30", 25));
    carNo["10-PM-010"].push_back(Penaly("Qirmizi isiq", "12.04.2022     15:38", 20));

    
    //CAR2
    carNo["94-AH-021"].push_back(Penaly("Dayanma Durma", "19.11.2022   17:49", 35));
    carNo["94-AH-021"].push_back(Penaly("Qosa xett", "28.01.2022     12:27", 25));


    //CAR3
    carNo["28-DS-028"].push_back(Penaly("Dayanma Durma", "21.09.2022   15:54", 35));
    carNo["28-DS-028"].push_back(Penaly("Qosa xett", "04.05.2022     18:13", 25));
    carNo["28-DS-028"].push_back(Penaly("Dayanma Durma", "05.07.2022   13:32", 35));


    for (auto&  carNum: carNo)
    {
        cout << "Car Number: " << carNum.first << endl;

        for (size_t i = 0; i < carNum.second.size(); i++)
        {
            cout << carNum.second[i] << endl;
        }
    }


}


