#include <iostream>
using namespace std;
#include "lib_for_while_series_minMax_Array.hpp"

/*
 Дано целое число N (> 0). Найти сумму
 1 + 1/2 + 1/3 + ... + 1/N
 (вещественное число).
 */

void taskFor_10(){
    int n;
    cout<<"N : ";
    cin>>n;
    float res=0;
    for(int i = 1; i <=n;++i){
        res +=1/(float)i;
    }
    cout<<"res : "<<res<<endl;
    
}

/*
 Дано целое число N (> 0). Используя один цикл, найти сумму
 1! + 2! + 3! + ... + N!
 (выражение N! — N–факториал — обозначает произведение всех целых
] чисел от 1 до N: N! = 1·2·...·N). Чтобы избежать целочисленного пере-
 полнения, проводить вычисления с помощью вещественных переменных и
 вывести результат как вещественное число.
 */
void taskFor_20(){
    int n;
    cout<<"N : ";
    cin>>n;
    
    
    int i;
    float rez=0,n1=1;
    
    for  (i =1; i<=n; ++i){
        n1 *=(float)i;
        rez += n1;
    }
    
    
    cout<<rez<<endl;
}




/*
 Дано целое число N (> 1) и две вещественные точки на числовой оси:
 A, B (A < B). Отрезок [A, B] разбит на N равных отрезков. Вывести H —
 длину каждого отрезка, а также значения функции F(X) = 1 – sin(X) в точ-
 ках, разбивающих отрезок [A, B]:
 F(A), F(A + H), F(A + 2·H), ..., F(B).
 */
void taskFor_30(){
    int n;
       cout<<"N:";
       cin>>n;
     
       float a;
       cout<<"A:";
       cin>>a;
     
       float b;
       cout<<"B:";
       cin>>b;
     
       float h=(b-a)/n;
       cout<<"H: "<<h<<endl;
     
       int i;
       for  (i =0; i<=n; ++i){
           cout<<(1-sin(a+i*h))<<endl;
       }
    
    
}
/*
  Даны целые числа A и B (A < B). Вывести все целые числа от A до B
 включительно; при этом число A должно выводиться 1 раз, число A + 1
 должно выводиться 2 раза и т.
 */

void taskFor_40(){
    int a,b;
    cout<<"Введите число а (a<b) : ";
    cin>>a;
    cout<<"Введите число b (b>a) : ";
    cin>>b;
    int i,i2;
    for  (i =1; i<=b-a+1; ++i){
         for (i2=1; i2<=i; ++i2) cout<<a+i-1<<endl;
        cout<<endl;
      }
}



/*
 Дано целое число N (> 1). Найти наибольшее целое число K, при ко-
 тором выполняется неравенство 3^K < N.
 */
void taskWhile_10(){
    int n;
    cout<<"N (N>1): ";
    cin>>n;
    int k=0;
    int tmp=3;
     while (tmp<n) {
          tmp*=3;
          ++k;
     }
    cout<<k<<endl;
}

/*
 Дано целое число N (> 0). С помощью операций деления нацело и взя-
 тия остатка от деления определить, имеется ли в записи числа N цифра «2».
 Если имеется, то вывести True, если нет — вывести False.
 */
void taskWhile_20(){
    int n;
    cout<<"N (N>0): ";
    cin>>n;

    while((n>0)&&((n%10)!=2)) {
           n /=10;
        

       }
    cout<<n<<endl;
    if((n>0)&&((n%10)==2)) cout<<"True"<<endl;
    else cout<<"False"<<endl;
    cout<<endl;
}

/*
 Даны положительные числа A, B, C. На прямоугольнике размера A × B
 размещено максимально возможное количество квадратов со стороной C
 (без наложений). Найти количество квадратов, размещенных на прямо-
 угольнике. Операции умножения и деления не использовать.
 */
void taskWhile_30(){
    float a,b,c;
    cout<<"Введите положительное число а  : ";
    cin>>a;
    cout<<"Введите положительное число b  : ";
    cin>>b;
    cout<<"Введите положительное число c  : ";
    cin>>c;
    int k=0;
      float tmp;
      while ((a-c)>=0) {
          a-=c;
          tmp=b;
          while (tmp-c>=0){
              tmp-=c;
              ++k;
          }
      }
    
    cout<<k<<endl;
}



/*
 Дано целое число N и набор из N целых чисел. Если в наборе имеют-
 ся положительные числа, то вывести True; в противном случае вывести
 False.
 */


void taskSeries_10(){
    int n,n1,b = 0;
    cout<<"N : ";
    cin>>n;
    for(int i =1; i<=n; ++i){
        //cout<<i<<endl;
        cout<<"n"<<i<<" : ";
        cin>>n1;
        if(n1>0) b=1;
    }
    cout<<b?"True": "False";
    cout<<endl;
}

/*
 Дано целое число N (> 1) и набор из N целых чисел. Вывести те эле-
 менты в наборе, которые меньше своего правого соседа, и количество K
 таких элементов.
 */

void taskSeries_20(){
    int n,n1,b=10000000;
    int count = 0;
    cout<<"N : ";
    cin>>n;
    for(int i =1; i<=n; ++i,b=n1){
        cout<<"n"<<i<<" : ";
        cin>>n1;
        if(b<n1){
            cout<<b<<"  меньше своего правого соседа"<<endl;
            count++;
        }
    }
    cout<<"Всего чисел которые < своих соседей : "<<count<<endl;
}


/*
 Даны целые числа K, N, а также K наборов целых чисел по N элемен-
 тов в каждом наборе. Для каждого набора вывести сумму его элементов.
 */

void taskSeries_30(){
    int k,n,n1,b=0;
    cout<<"K(кол-во наборов) : ";
    cin>>k;
    cout<<"N(кол-во элеметов) : ";
    cin>>n;
    for(int i = 1 ; i<=k; ++i ){
        for(int j =1;  j<=n; ++j,b=b+n1){
            cout<<"n"<<i<<" : ";
               cin>>n1;
            
        }
        cout<<"Сумма элементов : "<<b<<endl;
        b=0;
    }
}




/*
 Дано целое число K, а также K наборов ненулевых целых чисел. Ка-
 ждый набор содержит не менее трех элементов, признаком его завершения
 является число 0. Для каждого набора выполнить следующее действие: ес-
 ли набор является пилообразным (см. задание Series23), то вывести коли-
 чество его элементов; в противном случае вывести номер первого элемен-
 та, который не является зубцом.
 */


void taskSeries_40(){
    int k;
    cout<<"k : ";
    cin>>k;
     
        int ki,a=1,a1,a2;
        for (ki=1; ki<=k; ++ki){
           cout<<">";
           cin>>a1;
           cout<<">";
           cin>>a;
           int check=1,count=1;
           while(a!=0){
                a2=a1;
                a1=a;
                cout<<">";
                cin>>a;
                if (check){
                    ++count;
                    if (!(((a2<a1) && (a1>a)) || ((a2>a1) && (a1<a))) && (a!=0) ) check=0;
                }
            }
            cout<<count<<endl;
        }
    
}

/*
 Дано целое число N и набор из N целых чисел. Найти номер перво-
 го экстремального (то есть минимального или максимального) элемента из
 данного набора.
 */
void taskMinMax_10(){
    int n,n1,max,min,minn,maxn;
    cout<<"N : ";
    cin>>n;
    for(int i=1; i<=n; ++i){
        cout<<"n"<<i<<" : ";
        cin>>n1;
        if (i==1||n1<min|| n1==min ){
                   min=n1;
                   minn=i;
               }
               if (i==1||n1>max || n1==max){
                   max=n1;
                   maxn=i;
               }
    }
    if (minn <= maxn) cout<<minn<<endl;
    else cout<<maxn<<endl;
    
}


/*
 Дано целое число N и набор из N целых чисел. Найти общее коли-
 чество экстремальных (то есть минимальных и максимальных) элементов
 из данного набора.
 */

void taskMinMax_20(){
    int n,maxi,mini,i,r,min,max;
    
       cout<<"N: ";
       cin>>n;
    
       for (i=1; i<=n; ++i){
           cout<<"n"<<i<<" : ";
           cin>>r;
    
           if ((r<min)||(i==1)){
               min=r;
               mini=0;
           }
    
           if ((r>max)||(i==1)){
               max=r;
               maxi=0;
           }
    
           if (r==min) ++mini;
           else if (r==max) ++maxi;
    
       }
       cout<<"Кол-во экстремальных чисел  : "<<(mini+maxi)<<endl;
    
}
/*
 Дано целое число N и набор из N целых чисел. Найти минимальное
 количество подряд идущих максимальных элементов из данного набора.
 */

void taskMinMax_30(){
    int n,i,ni,nmax;
        cout<<"N:";
        cin>>n;
        int minnum=n,num=0;
        for (i=1; i<=n; ++i){
            cout<<"i:";
            cin>>ni;
            if((i==1)||(ni>nmax)) {
                nmax=ni;
                num=0;
                minnum=n;
            }
            if (ni==nmax) ++num;
            else {
                if (num<minnum) minnum=num;
                num=0;
            }
        }
        if ((num<minnum)&&(ni==nmax)) minnum=num;
     
    cout<<minnum<<endl;
}



/*
 Дан целочисленный массив размера N. Вывести вначале все содержа-
 щиеся в данном массиве четные числа в порядке возрастания их индексов,
 а затем — все нечетные числа в порядке убывания их индексов.
 */

void  taskArray_10(){
    int a[10];
      int n, i;
   
      cout<<"N: ";
      cin>>n;
      for (i=0; i<n; ++i){
          cout<<"a["<<i<<"] : ";
          cin>>a[i];
      }
    cout<<"===========ЧЕТНЫЕ==========="<<endl;

      for (i=0; i<n; ++i)
          if (a[i]%2 == 0)
              cout<<a[i]<<endl;
    
    cout<<"===========НЕЧЕТНЫЕ========="<<endl;
   
      for (i=n-1; i>=0; --i)
          if (a[i]%2 != 0)
              cout<<a[i]<<endl;
}


/*
 Дан массив размера N и целые числа K и L (1 ≤ K ≤ L ≤ N). Найти сум-
 му элементов массива с номерами от K до L включительно.
 */

void taskArray_20(){
    int a[10];
      int n, i;
    int k,l;
      cout<<"N: ";
      cin>>n;
    cout<<"K: ";
    cin>>k;
    cout<<"L: ";
    cin>>l;
    if(k>=1 && l>=k){
        for (i=0; i<n; ++i){
            cout<<"a["<<i<<"] : ";
            cin>>a[i];
        }
        int sum=0;
           for (i=k-1; i<=l-1; ++i) sum+=a[i];
        
           cout<<"sum : "<<sum<<endl;
    }
    else  cout<<"Error"<<endl;
}
/*
 Дан массив размера N. Найти номера тех элементов массива, которые
 больше своего правого соседа, и количество таких элементов. Найденные
 номера выводить в порядке их возрастания.
 */
void  taskArray_30(){
    int a[10];
    int n, i;
    int num = 0;
      cout<<"N: ";
      cin>>n;
        for (i=0; i<n; ++i){
            cout<<"a["<<i<<"] : ";
            cin>>a[i];
        
        }
    
        for (i=0; i<n-1; ++i) {
            if (a[i]>a[i+1]) {
                cout<<i+1<<" элемент > своегое правого соседа"<<endl;
                ++num;
            }
        }
        
    cout<<"Элементов которые > своего правого соседа : "<<num<<endl;
    
}

/*
 Дано число R и массив A размера N. Найти элемент массива, который
 наиболее близок к числу R (то есть такой элемент AK, для которого величи-
 на |AK – R| является минимальной).
 */
void taskArray_40(){
    int a[10];
    int r,n;
    cout<<"R : ";
    cin>>r;
    cout<<"N : ";
    cin>>n;
    for(int i =0;i<n; ++i){
     
            cout<<"a["<<i<<"]";
            cin>>a[i];
        
    }
    int min = abs(a[0]-r), k=0;
     
        for (int i=1;i<n;++i){
            if ((abs(a[i]-r))<min){
                min = (abs(a[i]-r));
                k = i;
            }
        }
    cout<<a[k]<<endl;
    
}


/*
 Дан целочисленный массив A размера N, являющийся перестановкой
 (определение перестановки дано в задании Array49). Найти количество ин-
 версий в данной перестановке, то есть таких пар элементов AI и AJ, в кото-
 рых большее число находится слева от меньшего: AI > AJ при I < J.
 */

void taskArray_50(){
    int a[10];
    int n;
    cout<<"N: ";
    cin>>n;
    for(int i=0; i<n; ++i){
        cout<<"a["<<i<<"]";
        cin>>a[i];
    }
    int num=0,i2;
       for (int i=0; i<n-1;++i){
           for (i2=i+1; i2<n;++i2){             if (a[i]>a[i2]){
                   num++;
               }
           }
       }
       cout<<num<<endl;
}

/*
 Дан массив A размера N. Сформировать новый массив B того же раз-
 мера по следующему правилу: элемент BK равен сумме элементов массива
 A с номерами от K до N.
 */

void taskArray_60(){
    int a[10],b[10];
    int n,n1;
    cout<<"N: ";
    cin>>n;
    int k;
       for (k=0; k<n; ++k){
           cout<<"a["<<k<<"]";
           cin>>a[k];
       }
    
       int i;
       for (k=0; k<n; ++k){
           b[k]=0;
           for (i=k; i<n; ++i){
               b[k]+=a[i];
           }
       }
    
   cout<<"B: "<<endl;
    for (k=0; k<n; ++k) cout<<"b[k] : "<<b[k]<<endl;
}

/*
 Дан массив размера N (N — четное число). Поменять местами первую
 и вторую половины массива.
 */

void taskArray_70(){
    int a[10];
  
     int n;
  
    cout<<"N: ";
    cin>>n;
  
     int i;
     for (i=0; i<n; ++i){
         cout<<"a["<<i<<"] : ";
         cin>>a[i];
     }
  
  
     for (i=0; i<n/2;++i){
         a[i]+=a[n/2+i];
         a[n/2+i]=a[i]-a[n/2+i];
         a[i]=a[i]-a[n/2+i];
     }
  
    cout<<"A : "<<endl;
    for (i=0; i<n; ++i) cout<<"a["<<i<<"] : "<<a[i]<<endl;
    
}


/*
 Дан массив размера N. Осуществить сдвиг элементов массива влево на
 одну позицию (при этом AN перейдет в AN–1, AN–1 — в AN–2, ..., A2 — в A1,
 a исходное значение первого элемента будет потеряно). Последний эле-
 мент полученного массива положить равным 0.
 */

void taskArray_80(){
    float a[10];
    
       int n;
    
    cout<<"N: ";
    cin>>n;
    
       int i;
       for (i=0; i<n; ++i){
           cout<<"a["<<i<<"] : ";
           cin>>a[i];
       }
    
       for (i=0; i<n-1; ++i) a[i]=a[i+1];
    
       a[n-1]=0;
    
       cout<<"A : "<<endl;
    for (i=0; i<n; ++i) cout<<"a["<<i<<"] : "<<a[i]<<endl;
    
}


/*
 Дан массив размера N и целое число K (1 ≤ K ≤ N). Удалить из массива
 элемент с порядковым номером K.
 */

void taskArray_90(){
    float a[10];
   
   
      int n,k;
    cout<<"N: ";
    cin>>n;
   
    cout<<"K: ";
    cin>>k;
   
      int i;
      for (i=0; i<n; ++i){
          cout<<"a["<<i<<"] : ";
          cin>>a[i];
      }
   
      --n;
   
      for (i=k-1; i<n; ++i){
          a[i]=a[i+1];
      }
   
      printf("A: \n");
    for (i=0; i<n; ++i) cout<<"a["<<i<<"] : "<<a[i]<<endl;
}

/*
 Дан целочисленный массив размера N. Удалить из массива все эле-
 менты, встречающиеся ровно два раза, и вывести размер полученного мас-
 сива и его содержимое.
 */

void taskArray_100(){
    int a[10];
       int n;
    cout<<"N: ";
    cin>>n;
    
       int i;
       for (i=0; i<n; ++i){
           cout<<"a["<<i<<"] : ";
           cin>>a[i];
       }
    
       int ai,i2, k, num;
       for (i=0; i<n;i++){
         num=0;
         for (i2=0; i2<n; ++i2) if (a[i]==a[i2]) ++num;
    
         if (num==2){
             k=i-1;
             ai=a[i];
             for (i2=i;i2<n;++i2)
                 if (a[i2]!=ai){
                     ++k;
                     a[k]=a[i2];
                 }
             n=k+1;
             --i;
         }
      }
    
    cout<<"A : "<<n<<endl;
    for (i=0; i<n; ++i) cout<<"a["<<i<<"] : "<<a[i]<<endl;
    
}

/*
 Дан целочисленный массив размера N. Продублировать в нем все
 четные числа.
 */


void taskArray_110(){
    int a[10];
       int n;
    cout<<"N: ";
    cin>>n;
    
       int i;
       for (i=0; i<n; ++i){
           cout<<"a["<<i<<"] : ";
           cin>>a[i];
       }
    
       int i2;
       for (i=n-1; i>=0; --i){
           if (a[i]%2==0){
               ++n;
               for(i2=n-1; i2>i; --i2) a[i2]=a[i2-1];
           }
       }
    cout<<"a[i]++четные"<<endl;
    for (i=0; i<n;++i) cout<<"a["<<i<<"] : "<<a[i]<<endl;
    
}

/*
 Дан целочисленный массив размера N, содержащий по крайней мере
 одну серию, длина которой больше 1. Преобразовать массив, уменьшив
 каждую его серию на один элемент.
 */

void taskArray_120(){
    int a[10];
        int n;
    cout<<"N: ";
    cin>>n;
     
        int i;
        for (i=0; i<n; ++i){
            cout<<"a["<<i<<"] : ";
            cin>>a[i];
        }
     
        int i2;
        for (i=0;i<n;++i){
            if (i+1<n){
                if (a[i]!=a[i+1]){
                    --n;
                    for (i2=i; i2<n;++i2) a[i2]=a[i2+1];
                    --i;
                }
            }
        }
        --n;
    cout<<"a[i] при уменьшении серий : "<<endl;
    for (i=0; i<n;++i) cout<<"a["<<i<<"] : "<<a[i]<<endl;
}

/*
 Дан целочисленный массив размера N. Преобразовать массив, увели-
 чив все его серии наибольшей длины на один элемент.
 */

void taskArray_130(){
    int a[20];
        int n;
    cout<<"N: ";
    cin>>n;
     
        int i;
        for (i=0; i<n; ++i){
            cout<<"a["<<i<<"] : ";
            cin>>a[i];
        }
     
        int len=1,maxlen=1,endmaxseries=1;
     
        for (i=1; i<n; ++i){
            if (a[i-1]!=a[i]) {
                if (len>=maxlen) maxlen=len;
                len=0;
            }
            ++len;
        }
     
        int i2;
     
        for (i=1; i<n; ++i){
            if (a[i-1]!=a[i]) {
                if (len==maxlen) {
                    for (i2=++n-1; i2>i;--i2) a[i2]=a[i2-1];
                    ++i;
                }
                len=0;
            }
            ++len;
        }
     
     
    cout<<"a[i] при увиличении серий : "<<endl;
    for (i=0; i<n;++i) cout<<"a["<<i<<"] : "<<a[i]<<endl;
    
}

/*
 Дано множество A из N точек с целочисленными координатами x, y.
 Порядок на координатной плоскости определим следующим образом:
 (x1, y1) < (x2, y2), если либо x1 + y1 < x2 + y2, либо x1 + y1 = x2 + y2 и x1 < x2.
 Расположить точки данного множества по убыванию в соответствии с ука-
 занным порядком.
 */




void swap(float a1[], float a2[]){
    a1[0]+=a2[0];
    a2[0]=a1[0]-a2[0];
    a1[0]-=a2[0];
 
    a1[1]+=a2[1];
    a2[1]=a1[1]-a2[1];
    a1[1]-=a2[1];
}
 
int compare (float a1[], float a2[]){
    if ((a1[0]+a1[1]<a2[0]+a2[1])||((a1[0]+a1[1]==a2[0]+a2[1]) && (a1[0]<a2[0]))) return 1;
    else return 0;
}
 
void taskArray_140()
{
    float a[10][2];
    int n;
 
    cout<<"N: ";
    cin>>n;
 
    int i;
    for (i=0; i<n; ++i){
        cout<<"a["<<i<<"] : "<<endl;
        cout<<" x  : ";
        cin>>a[i][0];
        cout<<"  y  : ";
        cin>>a[i][1];
    }
 
    int i2, n2=n;
 
    for (i=0; i<n-1;i++){
        --n2;
        for (i2=0; i2<n2; i2++)
            if (compare(a[i2+1],a[i2])==0){
                swap(a[i2+1], a[i2]);
            }
    }
    cout<<"====================================="<<endl;
    for (i=0; i<n;i++){
    cout<<"a["<<i<<"] : "<<endl;
        cout<<"  x : "<<a[i][0]<<endl;
        cout<<"  y  :"<<a[i][1]<<endl;
    }
}
void menu(){
    int num;
    cout<<"1.taskFor_10"<<endl;
    cout<<"2.taskFor_20"<<endl;
    cout<<"3.taskFor_30"<<endl;
    cout<<"4.taskFor_40"<<endl;
    cout<<"5.taskWhile_10"<<endl;
    cout<<"6.taskWhile_20"<<endl;
    cout<<"7.taskWhile_30"<<endl;
    cout<<"8.taskSeries_10"<<endl;
    cout<<"9.taskSeries_20"<<endl;
    cout<<"10.taskSeries_30"<<endl;
    cout<<"11.taskSeries_40"<<endl;
    cout<<"12.taskMinMax_10"<<endl;
    cout<<"13.taskMinMax_20"<<endl;
    cout<<"14.taskMinMax_30"<<endl;
    cout<<"15.taskArray_10"<<endl;
    cout<<"16.taskArray_20"<<endl;
    cout<<"17.taskArray_30"<<endl;
    cout<<"18.taskArray_40"<<endl;
    cout<<"19.taskArray_50"<<endl;
    cout<<"20.taskArray_60"<<endl;
    cout<<"21.taskArray_70"<<endl;
    cout<<"22.taskArray_80"<<endl;
    cout<<"23.taskArray_90"<<endl;
    cout<<"24.taskArray_100"<<endl;
    cout<<"25.taskArray_110"<<endl;
    cout<<"26.taskArray_120"<<endl;
    cout<<"27.taskArray_130"<<endl;
    cout<<"28.taskArray_140"<<endl;
    cout<<"num : ";
    cin>>num;
    
    switch (num) {
        case 1:
            taskFor_10();
            break;
        case 2:
            taskFor_20();
            break;
        case 3:
            taskFor_30();
            break;
        case 4:
            taskFor_40();
            break;
        case 5:
            taskWhile_10();
            break;
        case 6:
            taskWhile_20();
            break;
        case 7:
            taskWhile_30();
            break;
        case 8:
            taskSeries_10();
            break;
        case 9:
            taskSeries_20();
            break;
        case 10:
            taskSeries_30();
            break;
        case 11:
            taskSeries_40();
            break;
        case 12:
            taskMinMax_10();
            break;
        case 13:
            taskMinMax_20();
            break;
        case 14:
            taskMinMax_30();
            break;
        case 15:
            taskArray_10();
            break;
        case 16:
            taskArray_20();
            break;
        case 17:
            taskArray_30();
            break;
        case 18:
            taskArray_40();
            break;
        case 19:
            taskArray_50();
            break;
        case 20:
            taskArray_60();
            break;
        case 21:
            taskArray_70();
            break;
        case 22:
            taskArray_80();
            break;
        case 23:
            taskArray_90();
            break;
        case 24:
            taskArray_100();
            break;
        case 25:
            taskArray_110();
            break;
        case 26:
            taskArray_120();
            break;
        case 27:
            taskArray_130();
            break;
        case 28:
            taskArray_140();
            break;
        case 29:
            taskFor_10();
            break;
            
        default:
            break;
    }
    
}

