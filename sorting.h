// selection sort function module in C

void display(int a[],int n){

    int i;

    for(i=0;i<n;i++)
        printf("%5d",a[i]);
    printf("\n");
  
}

void selectionSort(int a[],int n){
  int i,j,*min;
  int newMinFound=0;
  for(j=0;j<n;j++){
    newMinFound=0;
    min=&a[j];
    for(i=0+j;i<n;i++){
      if(*min>a[i]){
        min=&a[i];
        newMinFound=1;
      }
    }
    //printf("[%d]\n",*min);
    if(newMinFound==1) swap(&a[j], min);
    display(a,n);
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




