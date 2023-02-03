// selection sort function module in C

void display(int a[],int n){

    int i;

    for(i=0;i<n;i++)
        printf("%5d",a[i]);
    printf("\n");
  
}

void selectionSort(int a[],int n){
  int i,j,*max;
  int newMaxFound=0;
  for(j=0;j<n;j++){
    newMaxFound=0;
    max=&a[n];
    for(i=0+j;i<n;i++){
      if(*max<a[i]){
        max=&a[i];
        newMaxFound=1;
      }
      display(a,n);
    }
    //printf("\n[%d]",*max);
    if(newMaxFound==1) swap(&a[j], max);
    display(a,n);
    printf("\n\n");
  }
}



void insertion(int a[],int n){


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




