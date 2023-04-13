### লিপ ইয়ার 

## Code

```c

#include <stdio.h>

int main() {
    int year;
    printf("Enter the Year: ");
    scanf("%d", &year);
    
    if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)){
        printf("%d is a Leap Year", year);
    }
    else{
        printf("%d is a not Leap Year", year);
    }

    return 0;
}
```

## Algorithm

```
ধাপ ১ঃ প্রোগ্রাম শুরু করি।
ধাপ ২ঃ ইনপুট হিসেবে চলক year এর মান গ্রহণ করি।
ধাপ ৩ঃ (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) এই শর্ত সত্যি হলে ধাপ ৪ এ যাই। সত্যি না হলে ধাপ ৫ এ যাই। 
ধাপ ৪ঃ Leap Year প্রদর্শন করি।
ধাপ ৫ঃ Not a Leap Year প্রদর্শন করি।
ধাপ ৬ঃ প্রোগ্রাম শেষ করি।
```

## Flow-chart
![](/hsc_ict_5th_chapter/flowcharts/leapyear.svg)
