include<iostream>


static int variable =0;


void getNum()
{

     static int i=0;
     i++;
     std::cout<<i<<endl;

}
