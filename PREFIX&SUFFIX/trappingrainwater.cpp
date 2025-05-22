/*trapping rainwater we have an array of name height which will show the size of 
the building we have to calculate how much rainwater will be collected */
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>height={4,2,0,5,2,6,2,3};
    int n=height.size();
    // this method has time complexity of o(n) and space complexity of o(n)
    int leftmax[n],rightmax[n];
    leftmax[0]=0;
    for(int i=1;i<n;i++){
        leftmax[i]=max(leftmax[i-1],height[i-1]);
    }
    rightmax[n-1]=0;
    for(int i=n-2;i>=0;i--){
        rightmax[i]=max(rightmax[i+1],height[i+1]);
    }
    int water=0;
    for(int i=0;i<n;i++){
        int mini=min(leftmax[i],rightmax[i]);
        if(mini-height[i]>=0){
            water+=mini-height[i];
        }
    }
    cout<<water;




    // another ,method having time complexity of o(n) and space complexity of o(1)
    int maxleft=0,maxright=0,water1=0;
    int maxheight=height[0],index=0; // this will give the building which has maximum height and index of that building

    // first we will store the building which has maximum height
    for(int i=1;i<n;i++){
        if(height[i]>maxheight){
            maxheight=height[i];
            index=i;
        }
    }
    //calculating the unit of water in the left side of the building having max height
    for(int i=0;i<index;i++){
        if(maxleft>height[i]){
            water1+=maxleft-height[i];
        }
        else maxleft=height[i];
    }
    // calculating the water in the right side of the  building having max height
    for(int i=n-1;i>index;i--){
        if(maxright>height[i]){
            water1+=maxright-height[i];
        }
        else maxright=height[i];
    }
    cout<<water;



    // another method which will traverse the array in one go and give the answer
    int start=0 , end=n-1 , water2=0;
    int maxl=0, maxr=0;
    while(start<=end){
        if(maxl<=maxr){
            if(maxl>height[start]){
                water2+=maxl-height[start];
            }
            else maxl=height[start];
            start++;
        }
        else{
            if(maxr>height[end]){
                water2+=maxr-height[end];
            }
            else maxr=height[end];
            end--;
        }
    }
    cout<<water2;
}