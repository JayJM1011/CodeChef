#include <iostream>
using namespace std;

int main()
{
    int length= 0, width= 0, Much= 0;
    int x= 0, y= 0, NoOfHits= 0;
    int i= 0, j= 0, k= 0, l= 0; 
    bool xi= true, yi= true;
    cout<<"Enter the Length of the Pool Table\n";       cin>>length;
    cout<<"Enter the Width of the Pool Table\n";        cin>>width;
    cout<<"\nEnter the Start point as X & Y Coordinates\n";     cin>>x; cin>>y;
    if(x==width)
        x--;
    if(y==length)
        y--;
    cout<<"\nEnter No. of Hits to be Recorded\n";       cin>>Much;
    for(i= 0; i<1000;i++)
    {
        if(xi&&yi)
        {
            x++;
            y++;
            if(x==width)
            {
                xi=false;
                cout<<"\nPoint of hit is "<<x<<", "<<y;
                NoOfHits++;
                if(Much==NoOfHits)
                    break;
            }
            if(y==length)
            {
                yi=false;
                if(x!=width)
                    cout<<"\nPoint of hit is "<<x<<", "<<y;
                NoOfHits++;
                if(Much==NoOfHits)
                    break;
            }
        }
        else if(xi==true && yi==false)
        {
            x++;
            y--;
            if(x==width)
            {
                xi=false;
                cout<<"\nPoint of hit is "<<x<<", "<<y;
                NoOfHits++;
                if(Much==NoOfHits)
                    break;
            }
            if(y==0)
            {
                yi=true;
                if(x!=width)
                    cout<<"\nPoint of hit is "<<x<<", "<<y;
                NoOfHits++;
                if(Much==NoOfHits)
                    break;
            }
        }
        else if(xi==false && yi==true)
        {
            x--;
            y++;
            if(x==0)
            {
                xi=true;
                cout<<"\nPoint of hit is "<<x<<", "<<y;
                NoOfHits++;
                if(Much==NoOfHits)
                    break;
            }
            if(y==length)
            {
                yi=false;
                if(x!=0)
                    cout<<"\nPoint of hit is "<<x<<", "<<y;
                NoOfHits++;
                if(Much==NoOfHits)
                    break;
            }
        }
        else
        {
            x--;
            y--;
            if(x==0)
            {
                xi=true;
                cout<<"\nPoint of hit is "<<x<<", "<<y;
                NoOfHits++;
                if(Much==NoOfHits)
                    break;
            }
            if(y==0)
            {
                yi=true;
                if(x!=0)
                    cout<<"\nPoint of hit is "<<x<<", "<<y;
                NoOfHits++;
                if(Much==NoOfHits)
                    break;
            }
        }
    }
    return 0;
}