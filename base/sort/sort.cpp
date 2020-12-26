//
// Created by zhangyangshuo on 2020/12/15.
//

#include <iostream>
using namespace std;

void swap(int *a ,int i, int j);
void bubbleSort(int *a,int n);
void quickSort(int *a ,int n);
void display(int *a,int n);
void quickSort2(int *a,int n);

int main(){
    int a[] = { 3, 2, 5, 8, 4, 7, 6 };
    int len=sizeof(a)/sizeof(int);
    display(a,len);
    bubbleSort(a, len);
    display(a,len);
    int b[] = { 3, 2, 5, 8, 4, 7, 6 };
    quickSort(b,len);
    display(b,len);
    int c[] = { 3, 2, 5, 8, 4, 7, 6 };
    quickSort2(c,len);
    display(c,len);
    return 0;

}

void swap(int a[],int i, int j){
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}
void display(int a[],int n){
    for(int i=0;i<n;i++){
        cout << a[i]<< " ";
    }
    cout<<endl;
}
/**
 * 冒泡排序
 * @param a
 * @param n
 */
void bubbleSort(int a[],int n)
{
    for(int i =0;i<n;i++){
        for(int j =0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a,j,j+1);
            }
        }
    }
}

/**
 * 快速排序
 * @param a
 * @param left
 * @param right
 */

void quickSort(int *a ,int left,int right)
{
    if(left<right){
        int i = left,j=right,x = a[i];
        while(i<j){
            while(i<j && a[j]>x){//从右到左找到第一个小于x的数
                j--;
            }

            while(i<j && a[i]<x){//从左到右找到第一个大于x的数
                i++;
            }
            if(i<=j){
                swap(a[i],a[j]);
                i++;
                j--;
            }
        }
        //a[i] = x; //将基准拷贝到i处
        if(left<j){
            quickSort(a,left,j); //递归 左
        }
        if(i<right){
            quickSort(a,i,right); //递归 右
        }
    }
}

void quickSort(int *a ,int n){
    quickSort(a,0,n-1);
}

int partition(int *a,int left,int right){
    int i = left+1;
    int j = right;
    int x=  a[left];

    while(i<=j){
        while(a[i]<x){
            i++;
        }
        while(a[j]>x){
            j--;
        }
        if(i<j){
            swap(a[i++],a[j--]);
        }else{
            i++;
        }
    }
    swap(a[j],a[left]);
    return j;
}

void quickSort2(int *a,int left, int right){
    if(left>right ){
        return ;
    }
    int j = partition(a,left,right);
    quickSort2(a,left,j-1);
    quickSort2(a,j+1,right);
}

void quickSort2(int *a ,int n){
    quickSort2(a,0,n-1);
}