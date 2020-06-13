# include <iostream >
using namespace std;


int main(){
	
	// we are adding all the numbers from the 1 to the user input intger number ;
	int x , sum =1, counter = 2 ;
	cout<< "enter a number : " ;
	cin >> x ;
	
	do{
		sum = counter + sum ;
		counter++;
		
	}while(counter <= x);
	cout << "Sum is " << " "<< sum;
} 
