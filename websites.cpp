#include<bits/stdc++.h>
#include "hotel.cpp"
using namespace std;

map<int,string>hotel_name1;

class nocancellationhotel_com{
    vector<pair<int,int>>combination;
    string hotel_name;
    int total_rent=INT_MAX;
public:
    nocancellationhotel_com(vector<pair<int,int>>conbinations)
    {
        combination=conbinations;
    }
    void avalibility(int k ,int n);
};
void nocancellationhotel_com:: avalibility(int k,int n)
{
    for(int i=0;i<combination.size();i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(hotel[k][j].beds==combination[i].first && hotel[k][j].rooms>combination[i].second)
            {
                hotel_name1[hotel[k][j].rent]=hotel[k][j].name;
            }
        }
    }
}







class noservicechargehotels_com{
    vector<pair<int,int>>combination;
    string hotel_name;
    int total_rent=INT_MAX;
public:
    noservicechargehotels_com(vector<pair<int,int>>conbinations)
    {
        combination=conbinations;
    }
    void avalibility(int k ,int n);
};
void noservicechargehotels_com:: avalibility(int k,int n)
{
    for(int i=0;i<combination.size();i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(hotel[k][j].beds==combination[i].first && hotel[k][j].rooms>combination[i].second)
            {
                hotel_name1[hotel[k][j].rent]=hotel[k][j].name;

            }
        }
    }
}






class noworryonlyhurryhotels_com{
    vector<pair<int,int>>combination;
    string hotel_name;
    int total_rent=INT_MAX;
public:
    noworryonlyhurryhotels_com(vector<pair<int,int>>conbinations)
    {
        combination=conbinations;
    }
    void avalibility(int k ,int n);
};
void noworryonlyhurryhotels_com::avalibility(int k,int n)
{
    for(int i=0;i<combination.size();i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(hotel[k][j].beds==combination[i].first && hotel[k][j].rooms>combination[i].second)
            {
                hotel_name1[hotel[k][j].rent]=hotel[k][j].name;

            }
        }
    }
}
