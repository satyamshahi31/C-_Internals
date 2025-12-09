#include<iostream>
#include<thread>
using namespace std;

void helloworld()
{
    cout<<"hello world"<<" "<<this_thread::get_id()<<endl;

    // if there is one input output operation which takes for time then if we not write t.join() then there may be possiboility that
    //our main thread does not stop and goes to return 0;
}

int main()
{
    cout<<this_thread::get_id()<<endl;
    thread t(helloworld);  // thread created and helloworld fucntion executed parallely

    t.join();  // main thread will stop here and will not execute further and wait for t thread to complete

    return 0;


}