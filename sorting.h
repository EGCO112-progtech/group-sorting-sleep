// selection sort function module in C

void display(int a[],int n){

    int i;

    for(i=0;i<n;i++)
        printf("%5d",a[i]);
    printf("\n");
  
}

void selectionSort(int data[], int length) 
{ 
	int i, j, m, mi; 
	
     display(data,length);
     
	
} 
void insertion(int a[],int n)
{
    int i,j,v;
    for(i = 1;i<n;i++)
  {
     v= a[i];
     for (j=i-1; j>= 0 && a[j]<v;j--)
     {
       a[j+1] = a[j];
       display(a,n);
     }
   a[j+1] = v;
   display(a,n);
    printf("\n");
   }
}

void swap(int *a,int *b){
 int temp;
  temp=*a;
  *a=*b;
  *b=temp;
  
}

void bubbleSort(int a[],int n){

int i,j;
int sorted;
// how may pair to compare?
for(j=1;j<=n-1;j++){
 
  display(a,n);
 }
  
}




