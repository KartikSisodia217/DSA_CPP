#include<iostream>
using namespace std;

void pattern1(int x, int y){
  for(int i=0; i<x; i++){
    for (int j=0; j<y; j++){
      cout<<"*";
    }
    cout<<"\n";
  }
}

void pattern2(int x){
  for (int i=0; i<x;i++){
    for (int j=0; j<=i;j++){
      cout<<"*";
    }
    cout<<'\n';
  }
}

void pattern3(int x){
  for (int i=0; i<x;i++){
    for (int j=0; j<=i;j++){
      cout<<j+1;
    }
    cout<<'\n';
  }
}

void pattern4(int x){
  for (int i=0; i<x;i++){
    for (int j=0; j<=i;j++){
      cout<<i+1;
    }
    cout<<'\n';
  }
}

void pattern5(int x){
  for (int i=x; i>0;i--){
    for (int j=0; j<i;j++){
      cout<<"*";
    }
    cout<<'\n';
  }
}

void pattern6(int x){
  for (int i=x; i>0;i--){
    for (int j=0; j<i;j++){
      cout<<j+1;
    }
    cout<<'\n';
  }
}









int main(){
  int pattern;
  while(true){
    cout<<"Enter pattern no (Enter 0 to stop): ";
    cin>>pattern;
    int rows,columns,size;
    if(pattern == 0){
      cout<<"Program terminated."<<endl;
      break;
    }
    switch(pattern){
      case 1:{
        cout<<"Enter no of rows: ";
        cin>>rows;
        cout<<"Enter no of columns: ";
        cin>>columns;
        pattern1(rows,columns);
        break;
      }

      case 2:{
        cout<<"enter size of pattern: ";
        cin>>size;
        pattern2(size);
        break;
      }

      case 3:{
        cout<<"enter size of pattern: ";
        cin>>size;
        pattern3(size);
        break;
      }

      case 4:{
        cout<<"enter size of pattern: ";
        cin>>size;
        pattern4(size);
        break;
      }

      case 5:{
        cout<<"enter size of pattern: ";
        cin>>size;
        pattern5(size);
        break;
      }

      case 6:{
        cout<<"enter size of pattern: ";
        cin>>size;
        pattern6(size);
        break;
      }

      default: 
        cout<<"Invalid pattern"<<endl;
    }
    cout<<'\n';
  }
  return 0;
}