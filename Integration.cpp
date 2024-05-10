#include<iostream>
#include<math.h>

using namespace std ;

float area_calculator(int no_of_divisions , float upper_limit  ){
    float x = 0 , y = 0 ;
    float area_calc = 0 ;
    float dx = (upper_limit*1.0)/(no_of_divisions+1) ;
    for(int i = 0 ; i <= no_of_divisions ; i++ ){
    x += dx ;
    y = x*x ;
    area_calc += y*dx ;
    }
    return area_calc ;
}

int main(){
float upper_limit ;
cout<<" Enter upper_limit "<<endl ;
cin>>upper_limit ;
float area_actual = (pow(upper_limit , 3))/3 ;
int no_of_divisions = 1 ;+

float area_calc = area_calculator(no_of_divisions , upper_limit) ;
float error = ((area_calc - area_actual)/area_actual)*100 ;


while(error > 1){
    no_of_divisions += 1 ;
    area_calc = area_calculator(no_of_divisions , upper_limit) ;
    error = ((area_calc - area_actual)/area_actual)*100 ;
    
}

cout<<"Ready!"<<endl     ;
cout<<"No of division :"<<no_of_divisions ;


}
