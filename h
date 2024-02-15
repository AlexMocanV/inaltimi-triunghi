#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int a,b,c;
    
    cin>>a>>b>>c;
    if(a>=b+c or b>=a+c or c>=a+b or a<=0 or b<=0 or c<=0)
    {
        cout<<"Imposibil";
    }
    else
    {
        float ha,hb,hc,S,p;
        p=(a+b+c)/2;
        S=sqrt(p*(p-a)*(p-b)*(p-c));
        ha=S/a*2;
        ha=ha*100;
        ha=int(ha);
        ha/=100.00;
        hb=S/b*2;
        hb=hb*100;
        hb=int(hb);
        hb/=100.00;
        hc=S/c*2;
        hc=hc*100;
        hc=int(hc);
        hc/=100.00;
        cout<<fixed<<setprecision(2)<<hb<<" "<<fixed<<setprecision(2)<<hc<<" "<<fixed<<setprecision(2)<<ha;
    }
   
    return 0;
}
