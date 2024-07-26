#include<cstdio>
int search(int nums[], int size, int target) 
{
    int left = 0;
    int right = size - 1;	
    while (left <= right) {	
        int middle = left + ((right - left) / 2);
        if (nums[middle] > target) {
            right = middle - 1;	
        } else if (nums[middle] < target) {
            left = middle + 1;
        } else {	
            return middle;
        }
    }
    return -1;
}

int main(){
    int n, m, a[100002], x, b;
    scanf("%d%d",&n,&m);
    for (int i = 0; i < n; i++) scanf("%d",&a[i]);
    while (m--)
    {
        scanf("%d",&x); 
        b = search(a, n, x);
        if(b == -1) printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}