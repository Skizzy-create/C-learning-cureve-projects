#include<stdio.h>

int main()
{
  int units=0,Totalcharge=0,buffer=0,_buffer=0;
  char*name;
  printf("Enter Your Name : ");
  scanf("%[^\n]%*c",name);
  printf("Enter the Number of Units Consumed : ");
  scanf("%d",&units);
  if(units<=100)
  {
      Totalcharge=units*5;
      Totalcharge+=50;
  }
  else if(units>100 && units<=300)
  {
      buffer=units-100;
      Totalcharge=100*5;
      Totalcharge+=buffer*6;
      Totalcharge+=50;
  }
  else
  {
      buffer=units-100;
     _buffer=units-300;
      Totalcharge=100*5;
      buffer-=_buffer;
      Totalcharge+=buffer*6;
      Totalcharge+=_buffer*7;
      
      Totalcharge+=(15/Totalcharge)*100;
      Totalcharge+=50;
  }
   
  printf("Total Charges to be paid by %s is (Rs.) %d",name,Totalcharge);     
  return 0;
}