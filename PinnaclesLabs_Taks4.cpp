#include<bits/stdc++.h>
using namespace std;
bool display(){
  cout<<"\n ----------ANSWER THE QUIZ---------- \n";
  cout<<"\n--------TOTAL MARKS-20,EACH QUESTIONS- 4 MARKS--------\n";
  cout<<"\n---Instruction---\n";
  cout<<"\n--Answer only in lower-case and Upper-case letter--\n";
  cout<<"\n------WARNING------\n";
  cout<<"Be careful , CHECK YOUR SPELLING \n";
   string a= " " ,b=" ",c= " ",d=" ",e=" ";
   int a1=0,b1=0,c1=0,d1=0,e1=0;
   float sum=0;
   cout<<"Q.1. What is the capital of India ? ";
   cin>>a;
   cout<<"Q.2. Which principal work in Stack data structure ? ";
   cin>>b;
   cout<<"Q.3. What is the opposite of Black ? ";
   cin>>c;
   cout<<"Q.4. What is the name of Electronic City of India ? ";
   cin>>d;
   cout<<"Q.5. No of state in India ? ";
   cin>>e;
   if(a=="Delhi"||a=="delhi"||a=="DELHI"){
    cout<<"Q.1. Correct\n";
    a1++;
   }else{
    cout<<"Q.1. Wrong: Correct answer is Delhi\n";
   }
   if(b=="FIFO"||b=="Fifo"||b=="fifo"){
    cout<<"Q.2. Correct\n";
    b1++;
   }else{
    cout<<"Q.2. Wrong: Correct answer is FIFO\n";
   }
   if(c=="White"||c=="WHITE"||c=="white"){
    cout<<"Q.3. Correct\n";
    c1++;
   }else{
    cout<<"Q.3. Wrong: Correct answer is White\n";
   }
   if(d=="Bangalore"||d=="BANGALORE"||d=="bangalore"||d=="Bangaluru"||d=="BANGALURU"||d=="bangaluru"){
    cout<<"Q.4. Correct\n";
    d1++;
   }else{
    cout<<"Q.4. Wrong: Correct answer is Bangalore or Bengaluru\n";
   }
   if(e=="28"){
    cout<<"Q.5. Correct\n";
    e1++;
   }else{
    cout<<"Q.5. Wrong: Correct answer is 28\n";
   }
   sum=4*(a1+b1+c1+d1+e1);
   cout<<"Your total score is "<<sum<<endl;
   cout<<"Your total persentage is "<<(sum/20)*100<<"%"<<endl;
}
signed main(){
  int t=1;
  while(t--){
    display();
  }
  return 0;
}