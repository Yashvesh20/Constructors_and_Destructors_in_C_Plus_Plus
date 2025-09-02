Yashvesh Singh 24070123138
#include<iostream>
using namespace std;
class Vehicles{
    int yr;
    char brand[50];
    char type[50];
    double cost;
    public:
  Vehicles();
  void display();
};
Vehicles::Vehicles(){
    cout<<"Enter The Brand ";
    cin>>brand;
    cout<<"Enter The Type of Vehicle ";
    cin>>type;
    cout<<"Enter The year of manufacture ";
    cin>>yr;
    cout<<"Enter The cost of the Vehicle ";
    cin>>cost;
}
void Vehicles::display(){
    cout<<endl<<"Brand: "<<brand<<"\t"<<endl<<"Type: "<<type<<endl<<"cost: "<<cost<<endl;
}
int main(){
    Vehicles v1;
    v1.display();
    return 0;
}
output:
Enter The Brand BMW
Enter The Type of Vehicle S50
Enter The year of manufacture 2022
Enter The cost of the Vehicle 424242

Brand: BMW	
Type: S50
cost: 424242
