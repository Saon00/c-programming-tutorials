### একটি সংখ্যা জোড় না বিজোড় নির্ণয়

## Code

```c
#include<stdio.h>
int main(){

    int num;
    printf("Enter a Number: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("%d is an Even Number.", num);
    }
    else{
        printf("%d is an Odd Number.", num);
    }

    return 0;
}
```

## Algorithm

```
ধাপ ১ঃ প্রোগ্রাম শুরু করি।
ধাপ ২ঃ ইনপুট হিসেবে চলক num এর মান গ্রহণ করি।
ধাপ ৩ঃ যদি num % 2 == 0 হয়, তবে সংখ্যাটি জোড় প্রদর্শন করি, এবং ধাপ ৫-এ যাই। অন্যথায় ধাপ ৪-এ যাই। 
ধাপ ৪ঃ সংখ্যাটি বিজোড় প্রদর্শন করি, এবং ধাপ ৫-এ যাই।
ধাপ ৫ঃ প্রোগ্রাম শেষ করি।
```

## Flow-chart
![](/hsc_ict_5th_chapter/flowcharts/evenodd.jpg)
