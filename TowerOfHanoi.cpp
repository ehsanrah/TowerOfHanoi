#include<iostream>
using namespace std;


void move(int count, char source, char dest, char aux)
{
	if (count == 0)
	{
		return;
	}
	else
	{
		move(count-1, source, aux, dest);
		cout <<"move from "<<source<<" to "<< dest <<endl;
		move(count-1,aux,dest,source);
	}
}
int main() {
	
	int n;
	cout<<"enter the number of Disk  : ";
	cin>>n;
	move(n,'A','C','B');
	return 0;
}
