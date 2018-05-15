#include <iostream>	
#include <string>
using namespace std;
		
		
int main()                            
{
  
  int age;  
  string typeofmovie;
  cout<<"Hello and welcome to Jai's movie theatre!"<<endl;
  cout<<endl;
  cout<<"We offer 3D and regular movies to watch so the choice is up to you!"<<endl;
  cout<<endl;
  cout<<"So without any further or do lets get started!"<<endl;
  cout<<endl;
  cout<<"What is your age?"<<endl;
  cin>>age;
  if (age < 4) {
    cout<<"Sorry, you are too young to be in this theatre!"<<endl; 
    cout<<"Please come back when you are older!!"<<endl;
  }
  else if (age < 15) { 
    cout<<"You will be charged at a discounted price because you're a child!"<<endl;
    cout<<"What kind of movie will you like to see today!"<<endl;
    cout<<endl;
    cin>>typeofmovie;
    
    if (typeofmovie == "3d"){
      cout<<"You will be charged $14.95 including tax"<<endl;
      cout<<"Please don't forget the 3D glasses!"<<endl;
      cout<<"Have a great day"<<endl;
      cout<<endl;
    }
    else if (typeofmovie == "regular") {
      cout<<"You will be charged $12.95 including tax"<<endl;
      cout<<"Have a great day!"<<endl;
    }
  }
  
      
  else if (age >= 15 && age < 65){
      cout<<"You will be charged at regular price for being an adult!"<<endl;
      cout<<"This is one of the many diadvantages of being an adult"<<endl;
      cout<<endl;

      cout<<"What kind of movie will you like to see today!"<<endl;
      cin>>typeofmovie;
      
       if (typeofmovie == "3d"){
        cout<<"You will be charged $14.95 including tax"<<endl;
        cout<<"Please don't forget the 3D glasses!"<<endl;
        cout<<"Have a great day"<<endl;
        cout<<endl;
     }
       else if (typeofmovie == "regular") {
        cout<<"You will be charged $12.95 including tax"<<endl;
        cout<<"Have a great day!"<<endl;
     }
    }
  
  else if (age >= 65){
    cout<<"You will be charged at discounted price for being a senior!!!"<<endl;
    cout<<"What kind of movie will you like to see today!"<<endl;
    cout<<endl;
    cin>>typeofmovie;
     
    if (typeofmovie == "3d"){
      cout<<"You will be charged $14.95 including tax"<<endl;
      cout<<"Please don't forget the 3D glasses!"<<endl;
      cout<<"Have a great day"<<endl;
      cout<<endl;
    }
    else if (typeofmovie == "regular") {
       cout<<"You will be charged $12.95 including tax"<<endl;
       cout<<"Have a great day!"<<endl;
    }
  }

else 
  cout<<"Sorry, I didn't understand what you said!"<<endl;
}

