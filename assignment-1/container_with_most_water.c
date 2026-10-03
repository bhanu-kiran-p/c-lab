#include <stdio.h>
int maxArea(int*,int);
int min(int, int);
int main(){
    int height[30] = {1,8,6,2,5,4,8,3,7}, max_area;
    max_area = maxArea(height, 9);
    printf("%d", max_area);
}
int maxArea(int* height, int heightSize) {
    int i, j, max_area, area;
    i = 0;
    j = heightSize - 1;
    max_area = min(height[i], height[j]) * (j-i);
    while(i<j){
        if(height[i]<height[j])
            i += 1;
        else
            j -= 1;
        area = min(height[i], height[j])*(j-i);
        if(max_area < area)
            max_area = area;
    }
    return max_area;
}
int min(int a, int b){
    if(a<b)
        return a;
    return b;
}