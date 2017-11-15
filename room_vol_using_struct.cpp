/*Structure Example*/
#include <iostream>
using namespace std;
int main(){
struct Distance{
    float inch,foot;
};
struct Volume{
    Distance length,width,height; 
 } vol;
cout<<"Enter room dimensions in foot & inch consecutively \nLength: ";
cin>>vol.length.foot;
cin>>vol.length.inch;
cout<<"Width: ";
cin>>vol.width.foot;
cin>>vol.width.inch;
cout<<"Height: ";
cin>>vol.height.foot;
cin>>vol.height.inch;
float result=(vol.length.foot+vol.length.inch/12)*(vol.width.foot+vol.width.inch/12)*(vol.height.foot+vol.height.inch/12);
cout<<"\nVolume of the room = "<<result<<" cubic feet.\n";
return 0;
}