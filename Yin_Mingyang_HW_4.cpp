// Mingyang Michelle Yin
// Nov. 17, 2024
// HW # 4

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

        // PART 1 //

void oddEvenFilter(int list[], int listSize) 
    {
        for(int index = 0; index < listSize; index++) // Reads the values in the loop
        {
            if( list[index] % 2 == 0) // If divisible by 2 then
            {
                cout<<list[index]<<" "; // write it as part of the even filter
            }
        }
    }

        // PART 3 //

string dna_to_rna(const string dna) // The DNA value stays constent
{
    string rna = "";
    for (int n = 0; n < dna.length(); n++) // For how ever long the DNA sting is it changes each value into the corasonding rna value
    {
        if (dna[n] == 'A') // Changes A to U
        {
            rna += 'U';
        }
        else if (dna[n] == 'C') // Changes C to G
        {
            rna += 'G';
        }
        else if (dna[n] == 'G') // Changes G to C
        {
            rna += 'C';
        }
        else if (dna[n] == 'T') // Changes T to A
        {
            rna += 'A';
        }
    }
    return rna;
}

int main() 
{
        // PART 1 //

    int myArray[8];
    cout << "Please enter 8 numbers: "; // Asks the user to enter 8 numbers
    for(int i = 0; i < 8; i++) // Adds numbers into the array 8 times
    {
        cin >> myArray[i];
    }
    cout << "The numbers: ";
    oddEvenFilter(myArray, 8); // Uses the pervious void funtion to find the even numbers
    cout << "are even." << endl;

        // PART 2 //

    // Setting variables

    int carsSold = 0;
    int salesperson = 0;
    int bestSalesperson = 0;
    int mostCarsSold = 0;
    int cars[10] = {7, 3, 6, 0, 14, 8, 1, 2, 9, 8}; // Using the given set array

    for (int i = 0; i < 10; i++) // Counts the amount of cars that each cars salesperson sold 
    {
        carsSold += cars[i]; // Finds the total amount of car sales
    }
    
    cout << "Total cars sold: " << carsSold << endl; // Prints the total amount car sales 

    for (salesperson = 0; salesperson < 10; salesperson++) // For each sales person
    {
        carsSold += cars[salesperson]; // Sets the amount of cars sold to each value in the array for each salesperson
        cout << "Salesperson " << salesperson + 1 << " has sold " << cars[salesperson] << " cars." << endl; 
        // Shows amount of cars each salesperson sold

        if (cars[salesperson] > mostCarsSold) // Finds the salesperson with the most cars sold
        {
            mostCarsSold = cars[salesperson]; // Largest amount in the cars array is set to the variable of mostCarsSold 
            bestSalesperson = salesperson + 1; // Sets them as the best
        }
    }

    cout << "The best salesperson is: salesperson " << bestSalesperson << " with " << mostCarsSold << " cars sold." << endl;
    // tells the user which salesperson has the most sales, and how many sales it is

            // PART 3 // 

    string dna;

    cout << "Enter DNA strand: "; // Asks the user a sequence of DNA 
    cin.ignore(); // Lets the user add as many values till the user presses the enter key
    getline (cin, dna); // Recives DNA values with spaces inculded
    cout << "RNA strand is: " << dna_to_rna(dna) << endl; // Uses previous funtion to see the RNA values of the DNA sequence
    
    return 0;
}

/*

        // OUTPUT //

    Please enter 8 numbers: 1 2 3 4 5 6 7 8
    The numbers: 2 4 6 8 are even.
    Total cars sold: 58
    Salesperson 1 has sold 7 cars.
    Salesperson 2 has sold 3 cars.
    Salesperson 3 has sold 6 cars.
    Salesperson 4 has sold 0 cars.
    Salesperson 5 has sold 14 cars.
    Salesperson 6 has sold 8 cars.
    Salesperson 7 has sold 1 cars.
    Salesperson 8 has sold 2 cars.
    Salesperson 9 has sold 9 cars.
    Salesperson 10 has sold 8 cars.
    The best salesperson is: salesperson 5 with 14 cars sold.
    Enter DNA strand: ACG TCGA
    RNA strand is: UGCAGCU

*/
