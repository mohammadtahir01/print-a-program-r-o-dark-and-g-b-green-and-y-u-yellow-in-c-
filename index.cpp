#include <iostream>
using namespace std;
int main(){
  char n;
  char n1;
  
  cout<<"enter the number (r,o,g,b,y,u):";
  cin>>n;
  cout<<"enter the number (r,o,g,b):";
  cin>>n1;
  
  if((n == 'r' && n1== 'o')||(n1=='o' && n=='r')){
      cout<<"dark";
  }else if((n=='g' && n1=='b') ||(n1=='b' && n=='g')){
      cout<<"green";
  }else if((n=='y' && n1=='u')||(n=='u' && n1=='y')){
      cout<<"yellow";
  }else{
      cout<<"wrong";
  }
}