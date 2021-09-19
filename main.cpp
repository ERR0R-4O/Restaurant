/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int main()
{ int tandooriChicken; int hamburger; int tacos; int pizza; double total; double totalTax; double tax = 0.06; double totalAmount; double amountGiven; double changeGiven; 
    cout<< "This is a very simple cash register" << endl;
    cout << "This is my menu" << endl;
    cout << endl;
    cout << endl;
    cout << "1. Tandoori Chicken: $5.75" << endl;
    cout << "2. Hamburger: $2.50" << endl;
    cout << "3. Tacos: $4.25" << endl;
    cout << "4. Pizza: $12.45" << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "How many Tandoori Chickens do you wish to buy? ====>   " << endl;
    cin >> tandooriChicken;
    cout << endl;
    cout << "How many Hamburgers do you wish to buy? ====>    " << endl;
    cin >> hamburger;
    cout << endl;
    cout << "How many Tacos do you wish to buy? ====>    " << endl;
    cin >> tacos;
    cout << endl;
    cout << "Lastly, how many pizzas do you want? ====>    " << endl;
    cin >> pizza;
    cout << endl;
    cout << endl;
    total = (tandooriChicken * 5.75) + (hamburger * 2.5) + (tacos * 4.25) + (pizza * 12.45);
    cout << "Total: $ " << total << "." << endl;
    totalTax = total * tax;
    cout << "Tax: $ " << totalTax << "." << endl;
    totalAmount = total + totalTax;
    cout << "Total Amount Due: $ " << totalAmount << "." << endl;
    cout << endl;
    cout << "Amount Given: " << endl;
    cin >> amountGiven;
    cout << endl;
    changeGiven = amountGiven - totalAmount;
    cout << "Change Returned: $ " << changeGiven << "." << endl;
    cout << "Thank you for eating at my resteraunt. We hope to see you again, have a nice day!" << endl;
    
    
    
    

    return 0;
}
