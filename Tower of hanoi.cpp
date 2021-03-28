#include<iostream>
#include<windows.h>
#include<unistd.h>
using namespace std;

//tower of HANOI function implementation
void TOH(int n,char Sour, char Aux,char Des)
{ 
	if(n==1)
	{
		cout<<"Move Disk "<<n<<" from "<<Sour<<" to "<<Des<<endl;
		return;
	}
	
	TOH(n-1,Sour,Des,Aux);
	//unsigned int microsecond = 1000000;
	//usleep(1 * microsecond);//sleeps for 3 second
	cout<<"Move Disk "<<n<<" from "<<Sour<<" to "<<Des<<endl;
	TOH(n-1,Aux,Sour,Des);
}

//main program
int main()
{ 
	int n;
	
	cout<<"Enter no. of disks:";	
	cin>>n;
	//calling the TOH 
	TOH(n,'A','B','C');
	
	return 0;
}
