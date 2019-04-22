
#include <iostream>
using namespace std;

class Number{
	public:
		Number(int f,int m){
			x=f;
		}
		Number converto(int p){
			Number n(0,0);
			//int a[10];
			for(int i=0;;i++){
				a[i]=x%p;
				x=x/p;
				n.a[i]=a[i];
				count++;
				if(x==0){
					n.count=count;
					break;
				}
			}
			return n;
		}
		void show(){
			for(int q=0;q<count;q++)
			cout<<a[q];
			cout<<endl;
		}
	private:
		int x,a[10],count=0;
};
int main() {

    int n, n1, n2;

    std::cin >> n;

    for(int i = 0; i < n; ++i) {

        std::cin >> n1 >> n2;

        Number no1(n1, 10);     

        Number no3 = no1.converto(n2);  

        no3.show();     

    }

}






