// C++ program for implementation of Newton Raphson Method for solving equations 
// 
#include<bits/stdc++.h> 
#define EPSILON 0.00001 
using namespace std; 

// An example function whose solution is determined using 
// Bisection Method. The function is x^3 - x^2 + 2 
double func(double x) 
{ 
	return 3*x - cos(x) - 1;
	//return x*x*x - x - 4;                          //   I1
} 

// Derivative of the above function which is 3*x^x - 2*x 
// https://www.derivative-calculator.net/
double derivFunc(double x) 
{ 
	return 3 + sin(x);                               //  I2
} 

// Function to find the root 
void newtonRaphson(double x) 
{ 
	double h = func(x) / derivFunc(x); 
	while (abs(h) >= EPSILON) 
	{ 
		h = func(x)/derivFunc(x); 

        cout<<" =>  x0 = "<<x<<" , f(x0) = "<<func(x)<<" , f'(x0) = "<<derivFunc(x)<<endl;
        cout<<"     x1 = "<<x<<" - ("<<func(x)<<" / "<<derivFunc(x) <<") = "<<x-h<<endl;
		// x(i+1) = x(i) - f(x) / f'(x) 
		x = x - h; 
	} 

	cout << "The value of the root is : " << x; 
} 

// Driver program to test above 
int main() 
{ 
	double x0 = 0.3;            //  I3 :  Initial values assumed 
	newtonRaphson(x0); 
	return 0; 
} 
