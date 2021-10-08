#include "accounts.h" 
#include <iostream>
#include<fstream>
#include<iomanip>
#include <algorithm> 


using namespace std;

void printArray(int[], int);
void sortArrAsc(int[], int);

    int main(){

      fstream myFile;
      myFile.open("Results.txt", ios::app);//write
      if(myFile.is_open()) {
        myFile << "\nStart time for program 4: " << cpuTime() << endl;
        myFile.close();
      }

      std::cout << std::fixed;
      std::cout << std::setprecision(3);

      sort(accountBalances, accountBalances + maxAccounts, greater<int>());
      void printArray(int arrayVals[], int size); 
        cout << "\nPrinted Values in Array Sorted By Descending: " << endl; 
        for(int i = 0; i < maxAccounts; i++) { 
        cout <<  " " << accountBalances[i] << ",";
        }

    myFile.open("Results.txt", ios::app);//append
      if(myFile.is_open()) {
        myFile << "\nEnd time for program 4: " << cpuTime() << endl;
        myFile.close();
      }
      

    return 0;
}