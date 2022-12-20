#include <iostream>
#include "cMatrix3.h"

using namespace std;


int main()
{
    int h;
    cout<< "how many matrix do you have??"<<endl;
    cin>>h;

    if (h==1){
                double a1[9];
                for(int i=0; i<9; i++)
                {
                    cout<<"enter terms"<<endl;
                    cin>>a1[i];
                }
                cMatrix3 m1(a1);
                cMatrix3  m4,m5,m8,m7,m9;
                    cout<<"enter option"<< endl;
                    cout<<"inverse - 1"<< endl;
                    cout<<"adjoint - 2"<< endl;
                    cout<<"rank - 3"<< endl;
                    cout<<"scalar - 4";

                int p;
                cout<<""<<endl;
                cin>>p;
                double  q =2;
                switch(p)
                {
                    case 1: m9 = m1.inver();            m9.show(); break;
                    case 2: m8 = m1.adjoint();          m8.show();break;
                    case 3: cout<<m1.ranks();   break;
                    case 4: m7 = m1.trans();            m7.show();break;
                    case 5: m4 = m1.scalarmul(q);  m4.show();break;
                    default: cout<<"incorrect case";
                }
    }


    if (h==2){
                double a1[9] , a2[9];
                for(int i=0; i<9; i++)
                {
                    cout<<"enter terms for m1"<<endl;
                    cin>>a1[i];
                }
                for(int i=0; i<9; i++)
                {
                    cout<<"enter terms for m2"<<endl;
                    cin>>a2[i];
                }
                cMatrix3 m1(a1), m2(a2);
                cMatrix3 m3, m4,m5,m6,m8,m9;
                //show list
                int q;
                cout<<"enter option\ncase 1 m1 add m2 (enter 1) \ncase 2 m1 sub m2 (enter 2) \nsace 3 m1 multiplication m2   (enter 3)\n "<<endl;
                cin>>q;
                switch(q)
                {
                    case 1: m3 = m1.add(m2);       m3.show();break;
                    case 2: m5 = m1.sub(m2);       m5.show();break;
                    case 3: m6 = m1.multi(m2);       m6.show(); break;

                    default: cout<<"incorrect case";

                }

    }











    return 0;
}
