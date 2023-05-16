 #include <iostream>
using namespace std;
//Linear Search

int main() {

        int arr[6]={1,7,3,6,5,6};
        int suml=0;
        int sumr=0;
        

        int k=0;
        while(k<6){
             
            //sum of left elements
            for(int i=0;i<k;i++){
                 suml=suml+arr[i];
                 
            }
      
            //sum of the right elements
            for(int j=k+1;j<6;j++){
                 sumr=sumr+arr[j];
    
            }
        
            //condtional block
             if(k>0 && (suml==sumr)){
                cout<<k;
                break;
            } 
          else{
           
          }

        k++;
        suml=0;
        sumr=0;
        }
    

return 0;    
}
 