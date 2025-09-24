#include <iostream>

using namespace std;
/*implemente un programa que use:
 int i {0};
 int j {0};
 while(i<70 || j % 25 ==0){
    i++;
    j++;
    }

*/
int i{0};
int j{0};
void recursion(){
       if (i>70)
          return ;
        cout << "i = " << i << endl;
        cout << "j " << "% " << j % 25 << endl;
        i++;
        j++;
        recursion();

    }



int main()
{
    recursion();
    return 0;
}
