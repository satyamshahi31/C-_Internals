#include<iostream>
using namespace std;

class student {
    private:
    int marks[5];
    public:
    int percentage()
    {
        int temp[] = {50, 20, 30, 75, 85};
        for(int i = 0 ; i < 5 ; i++){
         marks[i]= temp[i];  
       }

        int ans= 0;
        for(int i = 0 ; i <= 4 ; i++){
            ans += marks[i];
        }
        return ans/5;
    }



};
int main()
{
    student s1;
    
    int temp[] = {50, 20, 30, 75, 85};
    // for(int i = 0 ; i < 5 ; i++){
    //     s1.marks[i]= temp[i];  //cannot assign
    // }
    cout<<s1.percentage();
    return 0;
}