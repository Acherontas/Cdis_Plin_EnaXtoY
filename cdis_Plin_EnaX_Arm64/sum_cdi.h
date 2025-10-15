#ifndef SUM_CDI_H
#define SUM_CDI_H

#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
using namespace std;
class sum_cdi
{
    public:
        sum_cdi();
        virtual ~sum_cdi();
        sum_cdi(const sum_cdi& other);
        sum_cdi& operator=(const sum_cdi& other);
        int cdi=0;
        int fl=0;
        int mnu=0;
        int m;
        int cto=1;
        string mn;
        int cld=0;
        int isdc[100];
        int isdcx=0;
        int klipo=0;
        int cdll=0;
        long long int cd(long long int n);
        int cdis(long long int nn,int dkp);

    protected:

    private:
};

#endif // SUM_CDI_H
