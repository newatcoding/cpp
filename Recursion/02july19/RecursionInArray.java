import java.util.*;

public class RecursionInArray

{
    public static void display(int[] arr,int idx){
        if(idx==arr.length){
            return ;
        }
        System.out.print(arr[idx]+" ");
        display(arr,idx+1);
    }
   
    public static void Displayrev(int[] arr,int indx){
        if(indx==arr.length){
            return;
        }
        Displayrev(arr, indx+1);
        System.out.print(arr[indx]+" ");
    
    }

    public static int Findmax(int[] arr,int indx){
        if(indx==arr.length){
            return Integer.MIN_VALUE;
        }

        int ans=Findmax(arr, indx+1);
        if(ans<arr[indx]){
            ans=arr[indx];
        }

        return ans;
    }

    public static boolean lsearch(int[] arr,int idx,int key){
        if(idx==arr.length){
            return false;
        }       
        
        if(key==arr[idx] ){
            return true;
        }
        else{
            boolean br=lsearch(arr, idx+1, key);
        return br;
        }
    }

    //sub of lsearch to give index 
    public static int Firstindex(int[] arr,int idx,int key){
        if(idx==arr.length){
            return -1;

        }
        int ans;
        if(arr[idx]==key){
            return idx;
        }
        else{
        ans=Firstindex(arr, idx+1, key);
        return ans;
        }
    }

    //sub of lsearch
    public static int Lastindex(int[] arr,int idx,int key){
        if(idx==arr.length){
            return -1;
        }

        int ans=Lastindex(arr, idx+1, key);
        if(ans==-1 && arr[idx]==key){
            ans=idx;
        }
        return ans;
    }
   
    public static int[] allIndex(int[] arr,int idx,int key,int size){
        if(idx==arr.length){
            return new int[size];
        }
        if(key==arr[idx]){
            size++;
        }

        int[] ans=allIndex(arr, idx+1, key,size);
        if(key==arr[idx]){
            ans[size-1]=idx;
            size--;
        }
        return ans;

    }

    public static void main(String[] args){
        int[] arr={10,20,30,40,50};
        display(arr,0);                 System.out.println();
        Displayrev(arr, 0);             System.out.println();
        System.out.println(Findmax(arr, 0));
        System.out.println(lsearch(arr, 0, 35));
        int[] arr1={1,3,5,2,1,1,2,1,2,1};
        System.out.println(Firstindex(arr1,0, 2));
        System.out.println(Lastindex(arr1, 0, 2));
        int[] val=allIndex(arr1, 0, 1,0);
        for(int i=0;i<val.length;i++){
            System.out.print(val[i]+" ");
        }
    }
}

