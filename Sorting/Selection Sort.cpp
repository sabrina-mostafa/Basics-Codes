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


int main ()     //O(n^2)
{
    int n, i, j ;
    cout<<"enter number of elements : " ;
    cin>>n ;
    int arr[n+5] ;
    for(i=0; i<n; i++)
        cin>>arr[i] ;

        /// will devide the arr in 2 parts I. Sorted array II. Unsorted arry
           //  will INSERT the 1st element of Unsorted arr to the Sorted arr on its right(worth) position


    for(i=1; i<n; i++)        //  for Unsorted array
    {
        int temp = arr[i] ;            //  taking the 1st element from the Unsorted arr to INSERT it on its right pos in the Sorted arr
        for(j=i-1; arr[j]>temp && j>=0; j--)
        {
            arr[j+1] = arr[j] ;         //  right shifting while the elements are bigger than temp
        }
        arr[j+1] = temp ;       //  INSERTING temp on its right pos
    }
    for(i=0; i<n; i++)
        cout<<arr[i]<<" " ;

    return 0 ;
}
