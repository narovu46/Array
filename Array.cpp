#include <iostream>
#include <windows.h>
#include <cmath>
#include <iomanip>
#include <bits/stdc++.h>
#include<conio.h>
#include<process.h>

//array operations

 using namespace std;
 
 // function to return sum of elements
// in an array of size n
double sum(double income_arr[], int n)
{
    double sum = 0; // initialize sum
 
    // Iterate through all elements
    // and add them to sum
    for (int i = 0; i < n; i++)
        sum += income_arr[i];
 
    return sum;
}

//function to find the highest income
double largest(double income_arr[], int n)
{
    return *max_element(income_arr, income_arr+n);
}

//funtion to find the lowest income
double lowest(double income_arr[], int n)
{
    return *min_element(income_arr, income_arr+n);
}
 
 int main()
 {
 
 HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE); //code for changing text colors
	
 double income_arr[12] = {3155.00, 4512.05, 3221.50, 4899.20, 5556.00, 4787.00, 5002.10, 5321.00, 6025.00, 7652.00, 8623.50, 7895.00};
 int code, n;
 int i, j, temp;
 char choice;
 
 //format size of window
    HWND console = GetConsoleWindow();
	RECT ConsoleRect;
	GetWindowRect(console, &ConsoleRect); 
 	MoveWindow(console, ConsoleRect.left, ConsoleRect.top, 1200, 600, TRUE);
 
 
 
 cout<<"\t ** Xena's Income Record 2021 ** ";
 cout<<"\n\t -----------------------------------";
 cout<<"\n\t 1 -- Find Highest Income ";
 cout<<"\n\t 2 -- Find Lowest Income ";
 cout<<"\n\t 3 -- Sum Total of Income ";
 cout<<"\n\t 4 -- Sort Lowest to Highest Income ";
 cout<<"\n\t 5 -- Sort Highest to Lowest Income ";
 cout<<"\n\t 6 -- Print Income Jan to Dec \n";
 cout<<"\n\t -----------------------------------\n";
 cout<<"\n\t Enter Code <1 - 6> to Display info: ";
 cin>>code;
 	 	  	
do 
{
 
if (code == 1)
{
	int n = sizeof(income_arr)/sizeof(income_arr[0]);
	SetConsoleTextAttribute(color,12);
    cout<<"\n\t The Highest Income Xena has earned is $";
	cout << largest(income_arr, n);
 }
 
else if(code == 2)
{
		int n = sizeof(income_arr)/sizeof(income_arr[0]);
	SetConsoleTextAttribute(color,14);	
    cout<<"\n\t The Lowest Income Xena has earned is $";
	cout << lowest(income_arr, n);	
} 
  
else if (code == 3)
 {
 	double n = sizeof(income_arr) / sizeof(income_arr[0]);
 	SetConsoleTextAttribute(color,10);
    cout << "\n\t Sum of given array is $" << sum(income_arr, n);
 }

else if (code == 4)
 {
 	for (i = 0; i<12; i++)
	 {
	 	for (j = i+1; j<12; j++)
	 	{
	 		if (income_arr[j] < income_arr[i])
	 		{
	 			temp = income_arr[i];
	 			income_arr[i] = income_arr[j];
	 			income_arr[j] = temp;
			 }
		 }
	 }
	 SetConsoleTextAttribute(color,6);
	 cout<<"\n\t Sorted Income (Lowest to Highest): \n";
	 cout<<"\t -----------------------------------\n";
	
	 for(i = 0; i<12; i++)
	 {
	 	cout<<"\t"<<income_arr[i];
		 }	
 }
 
 else if(code == 5)
 {
 	int n = sizeof(income_arr) / sizeof(income_arr[0]);
  
    sort(income_arr, income_arr + n, greater<int>());
  
  	 SetConsoleTextAttribute(color,10);
    cout << "\n\t Sorted Income (Highest to Lowest) : \n";
    cout<<"\t -----------------------------------\n";
    
	for (int i = 0; i < n; ++i){
	
        cout <<"\t"<< income_arr[i];
}
 }
 
 else if (code == 6)
 {

    sort(income_arr, income_arr + n, greater<int>());
    
     SetConsoleTextAttribute(color,10);
    cout<<"\n\t -- Xena's Monthly Income -- \n";
    cout<<"\n\t ------------------------------------------------------------------------------------------------\n";
    cout<<"\t Jan|\t Feb|\t Mar|\t April|\t May|\t June|\t July|\t Aug|\t Sept|\t Oct|\t Nov|\t Dec| \n\n";
    
    cout <<"\t"<< income_arr[i];
    
    cout<<"\n\t ------------------------------------------------------------------------------------------------\n";
 }
 
 	SetConsoleTextAttribute(color,9);
	cout<<"\n\n\t Want to enter more (y/n) ? ";
      cin>>choice;
      
      if(choice == 'y' || choice == 'Y'){
	  
	  SetConsoleTextAttribute(color, 2);
      cout<<"\n\n\t Enter code (1-6): ";
      cin>>code;
  }
     
 

} while (choice == 'y' || choice == 'Y'); 
 
 getch();
 
 /**/
 
 return 0;
 
 
	}

