#include <iostream>

using namespace std;

int main() {
    double sales, commissionRate, commission;

    cout<<"Enter value of sales: ";
    cin>>sales;

    if(sales<=10000) {
        commissionRate = 0.1;
    } else if(sales<=15000) {
        commissionRate = 0.15;
    } else {
        commissionRate = 0.2;
    }

    commission = commissionRate*sales;

    cout << "the commision for sales is: " << commission << endl;

    
    return 0;
}
