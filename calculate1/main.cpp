#include "calculate1.h"
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
	calculate1 cal;
	int k,N,i;        //N为输入题目数量，k为随机选取题目类型 
	srand((unsigned)time(NULL));
	cin>>N;
	for(i=0;i<N;i++)
	{
	
	    srand((unsigned)time(NULL));
	    k=rand()%4; 
	    switch(k)
	    {
		    case 0 : cal.A1();break;
		    case 1 : cal.B1();break;
		    case 2 : cal.B3();break;
		    case 3 : cal.C1();break;
	     }
	}
	return 0;
}
