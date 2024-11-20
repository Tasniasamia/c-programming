#include<iostream>
using namespace std;
class demo{
public:
int add(int a, int b){
 return a+b;
}
double add(double a,double b){
return a+b;
}
};
int main(){
demo obj;
cout<<obj.add(12,22)<<endl;
cout<<obj.add(12.3,22.33)<<endl;


}
