#include<iostream>
using namespace std;
void circlearea (int r);

main(){
	circlearea(2);
	circlearea(3);
	circlearea(4);

}

void circlearea (int r){
	float ans;
	
	ans = 3.14 * r * r;
	
	cout<<"Circle of area : "<<ans<<endl;
}
