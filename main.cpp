#include <iostream>
using namespace std;

class BTS{
private:
    int memNum;
public:
    
    void setNum(int num){
        if(0<=num<=9){
            memNum=num;
        }
    }
    int getNum(){
        return memNum;
    }
};

int main(void){
    
    BTS bts;
    bts.setNum(5);
    cout<<bts.getNum();
    
    return 0;
}
 
