#include <stdio.h>
int main(){

    int x;
    int y;
   
    scanf("%d %d",&x, &y);
    float z=y-x-0.5;
    scanf("%f",&z);
    if(x>y){
        printf("%d\n",y);
    }

  else  if(x%5==0){
            
        printf("%f\n",y-x-0.5);
        
    }
    else {
        printf("%d\n",y);
        }
    
    
        
    
    
    
    
    
return 0;
}




