
#include<stdio.h>
#include<iostream>
using namespace std;
class HanXin{
	private:
		int n;
		int n1,n2,n3;
	public:
		void line3(int b)
		{
			n1=b;
		}
		void line5(int c)
        {
        	n2=c;
		}		
		void line7(int d)
		{
			n3=d;
		}
	    void showMany()
		{
			int p;
			bool flag=false;
			for(p=10;p<100;p++)
			{
			if(p%3==n1&&p%5==n2&&p%7==n3)
			{
				
				cout<<p<<endl;
				flag=true;
				break;
			}
		   }
		   
			if(!flag)			
				cout<<"Impossible"<<endl;
			
	}
	
		 
} ;

#include <iostream>

int main() {

    int n, n1, n2,n3;

    std::cin >> n;

    for(int i = 0; i < n; ++i) {

        std::cin >> n1 >> n2 >> n3;

        HanXin hx;  //韩信

        hx.line3(n1);  //3人一排

        hx.line5(n2);   //5人一排

        hx.line7(n3);   //7人一排

        hx.showMany();

    }

}





