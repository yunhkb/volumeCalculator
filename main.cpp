//
//  main.cpp
//  volumeCalculator
//
//  Created by michal on 11/01/2023.
//

#include <iostream>
using namespace std;
int main() {
    
    int a;
    float x,y,z;
    
    cout<< "What do you want to calculate?"<<endl<<endl;
    cout<<"Cube     - 1"<<endl;
    cout<<"Cuboid   - 2"<<endl;
    cout<<"Sphere   - 3"<<endl;
    cout<<"Cylinder - 4"<<endl;
    cout<<"Pyramid  - 5"<<endl<<endl;
    
    cin>>a;
    cout<<endl;
    
    switch(a){
        case 1:
            cout<<"Enter the cube edge length"<<endl<<endl;
            cin>>x;
            cout<<endl;
            cout<<"The volume of your cube is "<<(x*x*x)<<"cm3"<<endl;
            break;
            
        case 2:
            cout<<"Enter the 1st edge lenght"<<endl<<endl;
            cin>>x;
            cout<<endl;
            cout<<"Enter the 2nd edge lenght"<<endl<<endl;
            cin>>y;
            cout<<endl;
            cout<<"Enter the 3rd edge lenght"<<endl<<endl;
            cin>>z;
            cout<<endl;
            cout<<"Your cuboid volume is "<<(x*y*z)<<"cm3"<<endl;
            break;
        
        case 3:
            cout<<"Enter the sphere radius"<<endl<<endl;
            cin>>x;
            cout<<endl;
            cout<<"Your sphere volume is ~ "<<(4*3.14*(x*x*x)/3)<<"cm3"<<endl;
            break;
        
        case 4:
            cout<<"Enter the base radius"<<endl<<endl;
            cin>>x;
            cout<<endl;
            cout<<"Enter the cylinder height"<<endl<<endl;
            cin>>y;
            cout<<endl;
            cout<<"Your cylider volume is ~ "<<(3.14*(x*x)*y)<<"cm3"<<endl;
            break;
            
        case 5:
            cout<<"Enter your pyramid 1st base edge lenght"<<endl<<endl;
            cin>>x;
            cout<<endl;
            cout<<"Enter your pyramid 2nd base edge lenght"<<endl<<endl;
            cin>>y;
            cout<<endl;
            cout<<"Enter your pyramid height"<<endl<<endl;
            cin>>z;
            cout<<endl;
            cout<<"Your pyramid volume is "<<(x*y*z/3)<<"cm3"<<endl<<endl;            
            
    }
    
    cout<<endl;
    cout<<"Thank you for using my program!"<<endl<<endl;
    
    return 0;
}
