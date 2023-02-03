// selection sort function module in C

void display(int a[],int n){

    int i;

    for(i=0;i<n;i++)
        printf("%5d",a[i]);
    printf("\n");
  
}

void swap(int *a,int *b){
 int temp;
  temp=*a;
  *a=*b;
  *b=temp;
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

void insertionSort(int a[],int n){
    int i,j,v;
    for(i = 1;i<n;i++){
      v= a[i];
      for (j=i-1; j>= 0 && a[j]<v;j--){
        a[j+1] = a[j];
        display(a,n);
      }
      a[j+1] = v;
      display(a,n);
      printf("\n\n");
   }
}

void bubbleSort(int a[],int n){
  int i,j;
  int sorted;
  display(a,n);
  for (i = 0; i < n ; i++){
      sorted = 0;
      for (j = 0; j < n - 1 ; j++) {
        if (a[j] < a[j + 1]) {
          swap(&a[j], &a[j + 1]);
          sorted = 1;
        }
        display(a, n);
      }
      display(a,n);
      printf("\n\n");
      if (sorted == 0) break;
  }
  
}




