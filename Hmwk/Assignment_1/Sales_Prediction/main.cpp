

/* The East Coast sales division of a company generates 58 percent of total sales.
 *  Based on that percentage, write a program that will predict how much the East 
 * Coast division will generate if the company has $8.6 million in sales this year.
*/

#include <iostream>

using namespace std;


int main(int argc, char** argv) {
    float sales,totalsales;
    totalsales=8600000;
    sales=totalsales*0.58;
    cout<<"the East Coast division will generate "<<sales<<endl;
    return 0;
}

