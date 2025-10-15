#include "sum_cdi.h"

sum_cdi::sum_cdi(){}//ctor
sum_cdi::~sum_cdi(){}//dtor
sum_cdi::sum_cdi(const sum_cdi& other){}//copy ctor
// handle self assignment//assignment operator
sum_cdi& sum_cdi::operator=(const sum_cdi& rhs){if (this == &rhs) return *this; return *this;}


long long int sum_cdi::cd(long long int n){
    //cdi=0;
    m=n%10;
    cdi+=m;
    fl=-1;
    cto+=1;
    if(n/10==0){
        fl=1;
               if(fl==1){}
               return cdi;   //return 1;
    }
    else
    {
        cd(n/10);
    }
    B:
    return cdi;
}


int sum_cdi::cdis(long long int nn,int dkp){
         cdi=0;
         isdcx=0;
         int cdl=cd(nn);
         klipo=0;cdll=0;
         klipo=cdl;
         if(dkp==3){return cdl;}
         if(dkp==1){
         cout<<"\n";
         cout<<"Initial sum = " << cdl <<"\n";
         klipo=0;
         klipo=cdl;
         isdc[isdcx]=cdl; isdcx+=1;
         cout<<"\n";}
         cld=cdl;
         if(cdl>9){
             if(dkp==1){
             cout<<"---------Internal Sum -----------\n";}
             cdi=0;
             while(cdl>9){
                cdi=0;cdl=cd(cdl);
                    if(dkp==1){
                        cout<<"|---> " << cdl <<"\n";
                        isdc[isdcx]=cdl; isdcx+=1;
                    }
             if(cdl<=9){
                 cdll=cdl;
                 if(dkp==1){
                    cout<<"|---> Exiting with " << cdl <<"\n";
                    //isdc[isdcx]=cdl; isdcx+=1;
                    cout<<"--------End of Sum------------\n";}
               break;
               }
             }
         }
         if(dkp==1){
         cout<<"\n";}
         if(dkp==3){return cdl;}
         return cdl;
        //theloume to arxiko sum alla na tairiazei xD
        //cout<<"internal " << klipo <<" with cdl " << cdl <<"\n";
        //return klipo;
}
