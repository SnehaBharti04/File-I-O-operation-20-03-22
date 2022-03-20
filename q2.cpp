#include<iostream>
#include<conio>
#include<stdio>
void main()
{

	char A[30],e;
	cout<<"input string : ";
	gets(A);
	int n=0;
	for(int j=0;A[j]!='\0';j++)
	{
	 if(A[j]==' ' && A[j+1]!=' ')
	 {
	  n++;
	 }
	}
	if(A[j]==e)
	{
	 cout<<n+1;
	}
	 getch();
}
