#include <iostream>
#include<fstream>
#include<cstdlib>
#include<string>
using namespace std;

int main()
{
  int n, roll_no[10];
  string name[50];
  cout<<"Enter Number of Students whose data is to be saved \n";

  cin>>n;
  ofstream outf;
  outf.open("std_data.txt",ios::trunc);

  for(int i = 0; i<n ; i++)
  {
    cout<<"Enter Name : \n";
    cin>>name[i];
    outf<<name[i]<<"\n";


    cout<<"Enter Roll Number:\n";
    cin>> roll_no[i];
    outf<<roll_no[i]<<"\n";

  }
  outf.close();

ifstream inf;
inf.open("stud_data.txt");
for(int i=0; i<n ; i++)

{
  while(inf)
  {
    inf>> name[i];
    inf>>roll_no[i];
    if(inf.eof()!=0)
    {
        cout<<"End of File\n";
        exit(1);
    }

      cout<<"Name is :"<<name[i]<<endl;
      cout<<"Roll Number is :"<<roll_no[i]<<endl;
    }
  }
  inf.close();
  return 0 ;

}
