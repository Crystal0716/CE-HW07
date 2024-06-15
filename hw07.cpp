#include <stdio.h>
#include <iomanip>
#include <iostream>
using namespace std ;
int sum2 ( int x ,int y );
int sum2 ( int x ,int y )
{
	int z ;
	z = x + y ;
	return (z);
}
int sum ( int k )
{
	return ( k ) ;
}
int main () 
{
	int e , f , g , h , a , b , c ;
	cin >> e >> f >> g >> h ;
	sum (0);
	{
	a = sum2 ( e , f );
	b = sum2 ( g , h );
	c = sum2 ( a , b );
	}
	cout << " Enter integer 1 : " << e << endl ;
	cout << " Enter integer 2 : " << f << endl ;
	cout << " Enter integer 3 : " << g << endl ;
	cout << " Enter integer 4 : " << h << endl ;
	cout << " The sum is " << setw (5) << setfill ('*') << c << endl ;
	return (0) ;
}