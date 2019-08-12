#include <bits/stdc++.h>
using namesapce std;
class Box{
    private:
        long l;
        long b;
        long h;
   Box(){
         l = b = h =0;
   }
   Box(int length,int breadth,int height){
        l = length;
        b = breadth;
        h = height;
   }
   Box(Box B){
        l = B.l;
        b = B.b;
        h = B.h;
   }
   public:
        int getLength(){
            return l;
        }
        int getBreadth(){
            return b;
        }
        int getHeight(){
            return h;
        }
        long long calculateVolume(){
            return l*b*h;
        }

};
int main(){
    
}
