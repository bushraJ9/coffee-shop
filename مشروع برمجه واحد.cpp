#include <iostream>
using namespace std;

int main() {

	int number;
	int profit;
	int discount;
	int priceone;
	int pricetwo;


	cout << " Welcome to Coffee Shop"  <<endl;
	cout << " 1- Working Hours "  <<endl;
	cout << " 2- menu "  <<endl;
	cout << " 3- discounts "  <<endl;
	cout << " 4- bill "  <<endl;
	cout << " 5- profits "  <<endl;
	cin>>number;


    switch (number) {
        case 1:
        	cout << " Working Hours All Week Except Fraidy And Thursday\nOpen 11 AM\nClose 10 PM "  <<endl;
            break;

        case 2:
		cout << " Our menu:\n1- Sandwichs\n2- Coffee "  <<endl;
		cin>>number;

		if (number == 1) {
			cout<<"1-Cheese Sandwich 5 SAR\n2-Egg Sandwich 7 SAR\n3-Chicken Sandwichs 10 SAR "<<endl;
		} else if (number == 2) {
			cout<<"1-Black Coffee 10 SAR\n2-Capuchino Coffee 15 SAR\n3-Spanish Coffee 20 SAR "<<endl;
		} else {
			main();
		}

            break;

        case 3:
    		cout<<"Enter the Price of item:"<<endl;
    		cin>>number;
    		if(number >= 100)
    		{
    			discount = (number*4/20);
    			cout<<"The Price of your bill ="<<number<<endl;
    			cout<<"Discount = %"<<discount<<endl;
    			cout<<"After Discount ="<<(number-discount)<<endl;
    		}
    		else
    		{
    			cout<<"Not Discount !!"<<endl;
    		}
            break;

        case 4:
			cout<<"Choose Sandwich "<<endl;
			cout<<"1-Cheese Sandwich 5 SAR\n2-Egg Sandwich 7 SAR\n3-Chicken Sandwich 10 SAR \n4-Nothing "<<endl;
    		cin>>priceone;
    		if (priceone == 1) {
    			priceone = 5;
    			} else if (priceone == 2) {
    				priceone = 7;
    			} else if (priceone == 3) {
    			    priceone = 10;
    			} else {
    				priceone = 0;
    			}
    		cout<<"Choose coffee "<<endl;
    	    cout<<"1-Black Coffee 10 SAR\n2-Capuchino Coffee 15 SAR\n3-Spanish Coffee 20 SAR \n4-Nothing"<<endl;
    		cin>>pricetwo;
    		if (pricetwo == 1) {
    			pricetwo = 10;
    			} else if (pricetwo == 2) {
    				pricetwo = 15;
    			} else if (pricetwo == 3) {
    				pricetwo = 20;
    			} else {
    				pricetwo = 0;
    			}
    		cout<<" Total Bill:" << priceone+pricetwo <<" SRA:" <<endl;
            break;

        case 5:
        		cout<<"Enter the invoice Price:"<<endl;
        		cin>>number;
        		profit = (number*3/100);
        		cout<<"Profit = "<<profit<< "SAR"<<endl;
        		cout<<"Equity capital ="<<(number-profit)<< "SAR"<<endl;
            break;
        default:
            cout << "Error! The operator is not correct";
            break;
    }

    return 0;

}