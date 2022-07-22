#include<bits/stdc++.h>
#include "nocancellationhotel_com.cpp"

using namespace std;

int main()
{
    int total_combination;
    cout<<"Tell total combination of room(s) you looking for:";
    cin>>total_combination;
    vector<pair<int,int>>combinations;
    cout<<"Tell the room(s) you are looking for:";
    for(int i=0;i<total_combination;i++)
    {
        pair<int,int>p;
        int bed=0,room=0;
        cout<<"Beds=";
        cin>>bed;
        cout<<"Rooms=";
        cin>>room;cout<<endl;
        p=make_pair(bed,room);
        combinations.push_back(p);
    }
    nocancellationhotel_com qurey1(combinations);
    qurey1.avalibility(0,5);
    noworryonlyhurryhotels_com qurey2(combinations);
    qurey2.avalibility(1,3);
    noservicechargehotels_com qurey3(combinations);
    qurey3.avalibility(2,1);
    for(auto i:hotel_name1)
    {
        cout<<" "<<i.second<<" "<<i.first<<endl;
    }
    if(hotel_name1.size()==0)
    {
        cout<<"Not found.";
    }
    return 0;
}
