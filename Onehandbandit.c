#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
//srand(time(NULL));
int s=0;
int size =1;
int a[size],b[size],c[size],i;
int found = 0,found1=0,found2=0 ,found3=0; //flag
printf("Введіть вашу ставку: ");
scanf("%d",&s);

for (int i = 0; i < size; i++) {
        a[i] = 3;//rand() % 9+1; // Заповнення масиву випадковими числами від 1 до 10
        b[i]=  7;//rand() % 9+1;
        c[i] = 6;//rand() % 9+1;

        if(a[i]==7 && b[i]==7 && c[i]==7){ // Якщо всі цифри 7
            found2=1;
        }
         if (a[i]==b[i] && b[i]==c[i] && a[i]==c[i]){ // Якщо всі цифри однакові 
            found1=1;
        }
            
         if (a[i]==b[i] || b[i]==c[i] || a[i]==c[i]){ // Якщо випала лише 2 з 3 чисел
            found3=1;
        }

         if (a[i] == 7 || b[i] == 7 || c[i] == 7) { // Якщо випала лише одна цифра 7
            found = 1; 
    }
}
            
        printf("[%d][%d][%d] \n", a[i],b[i],c[i]); // Виведення чисел на екран
        
     if(found2==1){
        s*=3;
        printf("Ваш вигр4аш %d \n", s); 
        found2==0; found1==0;  found3==0; found==0;
     }else if(found1==1){
        s*=2;
        printf("Ваш вигр3аш %d \n", s);  
        found2==0; found1==0;  found3==0; found==0;
     }else if(found3==1){
        printf("Ваш вигр2аш %d \n",s);
        found2==0; found1==0;  found3==0; found==0;
    }else if (found==1) {
        printf("Ваш вигр1аш %d \n", s);
        found2==0; found1==0;  found3==0; found==0;
     }else{
        printf("Ви програли ,ставка не зайшла.\n");
        
    }

    return 0;
    
}