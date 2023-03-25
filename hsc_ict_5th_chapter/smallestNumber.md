### ৩ টি সংখ্যার মধ্যে সবচেয়ে ছোট সংখ্যা নির্ণয়  

## Code

```c
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter A, B, C: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if(a<b && a<c){
        printf("%d is the smallest number.", a);
    }
    else if(b<a && b<c){
        printf("%d is the smallest number.", b);
    }
    else{
        printf("%d is the smallest number.", c);
    }
    return 0;
}
```

## Algorithm

```
ধাপ ১ঃ প্রোগ্রাম শুরু করি।
ধাপ ২ঃ ইনপুট হিসেবে a,b,c চলকের মান গ্রহণ করি।
ধাপ ৩ঃ যদি, a<b এবং a<c হয়, তবে প্রদর্শন করি a ছোট, এবং ধাপ ৬ এ যাই। 
       অন্যথায় ধাপ ৪ এ যাই।
ধাপ ৪ঃ যদি, b<a এবং b<c হয়, তবে প্রদর্শন করি b ছোট, এবং ধাপ ৬ এ যাই। 
       অন্যথায় ধাপ ৫ এ যাই।
ধাপ ৫ঃ প্রদর্শন করি c ছোট।
ধাপ ৬ঃ প্রোগ্রাম শেষ করি।
```

## Flow-chart
![](/hsc_ict_5th_chapter/flowcharts/smallestnumber.jpg)
