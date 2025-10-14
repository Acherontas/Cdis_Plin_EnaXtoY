#include <iostream>
#include <iomanip>
#include <math.h>
#include "sum_cdi.h"
using namespace std;

int main(int argc,char** argv)
{
    long long int main_number;
    long long int ar_ofres[10];int refof=0;
    long long int result;
    cout<<"enter ur number ";
    main_number=stoll(argv[1]);
    sum_cdi *smcd=new sum_cdi();
    smcd->cdi=0;
    smcd->cdis(main_number,3);
    result=smcd->cdis(main_number,3);
    long long int rttl;
    cout<<"the result is " << result <<"\n"; //22
    ar_ofres[refof]=main_number-result; refof+=1; //2763
    rttl=ar_ofres[refof-1];
    cout<<"of " << main_number << " - " << result << " ::== " << ar_ofres[refof-1] <<" the sum of digits \n";
    ar_ofres[refof]=result; refof+=1; //22
    result=smcd->cdis(ar_ofres[refof-1],3);
    long long int res_one;
    res_one=ar_ofres[1]-result;
    cout<<"of " <<ar_ofres[1] << " - " << result << " ::== " << res_one <<"\n";
    ar_ofres[refof]=result;refof+=1;
    long long int res_two;
    long long int stbl=9;
    cout<<"of assumption " << ar_ofres[2] << " - " << ar_ofres[2] << " ::== " << stbl <<"\n";
    res_two=stbl-ar_ofres[2];
    long long int asump;
    asump=ar_ofres[0] + res_one + stbl;
    cout<<"with assumption of addition " << ar_ofres[0] << " + " << res_one << " + " << stbl << " ::== " << asump <<"\n";
    cout<<"of assumption " << stbl << " - " << ar_ofres[2] << " ::== " << res_two <<"\n";
    long long int resultt;
    resultt=asump-res_two;
    cout<<"and final of " << asump << " - " << res_two << " ::== " << resultt <<"\n";
    ar_ofres[refof]=res_two; refof+=1;
    cout<<"\n";


    long long int ts_loop;
    result=rttl;
    cout<<"And of number " << result <<"\n";
    cout<<"\n";
    while(result>9){
       result=smcd->cdis(result,3);
       cout<<"internal result " << result <<"\n";
       if(result>9){
                    ts_loop=smcd->cdis(result,3);
                    cout<<"with ts_loop of " << ts_loop <<"\n";
       }
       cout<<result <<  " - " << ts_loop << " ::== " << result-ts_loop <<"\n";
       if(result-ts_loop>=9){result=result-ts_loop; cout<<"continue with " << result <<"\n";}
       if(result-ts_loop<9){break;}
    }

    return 0;
}
