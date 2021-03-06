///  ~~~~~Bismillah'hir Rah'manir Rahim~~~~~  ///

/*  "  Allah(SWT) blesses with knowledge whom he wants. "   */
/*  " Indeed with Hardship, comes Ease. "    */


#include<bits/stdc++.h>
using namespace std ;

#define   Fast      ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define   ULL       unsigned long long
#define   LL         long long
#define   ST          string
#define   F           first
#define   S           second
#define   PB        push_back
#define   MP       make_pair
#define   pi         acos(-1.0)
#define   NL       "\n"
#define    _           " "

/// ---for Unordered map---
/* mpp.max_load_factor(0.25); mpp.reserve(1024); */
/* cout << fixed << setprecision(12);*/
/// ---for Setprecision---
/* cout<< fixed << showpoint << setprecision(9) << */

int dx4 [ ] = {-1,   0,   0,  +1} ;
int dy4 [ ] = { 0,  -1,  +1,  0} ;
int dx [ ] = {-1,  -1,  -1,   0,   0,  +1,  +1,  +1} ;
int dy [ ] = {-1,   0,  +1,  -1,  +1,  -1,   0,  +1} ;


int main ()
{
    string S, P ;
    cout<<"Get the String : " ;
    cin>>S ;
    cout<<"Get the Pattern : " ;
    cin>>P ;
    int LS= S.size(), LP=P.size() ;

    int MAX = LS-LP ;    //maximum i'th index of S that we should compare with the indices of P so that comparison doesn't overflow
    bool flag ;
    for(int i=0; i<=MAX; i++)
    {
            flag = true ;
            for(int j=0; j<LP; j++)
            {
                    if(P[j] != S[j+i])
                    {
                            flag = false ;
                            break ;
                    }
            }
            if(flag) {
                cout<<"Found in index number : "<<i ;
                break ;
            }
    }
    if(!flag) cout<<"Not found" ;

    return 0 ;
}
