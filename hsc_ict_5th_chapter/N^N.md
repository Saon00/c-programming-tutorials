### 1^1 + 2^2 + 3^3 + ............. + N^N সিরিজের যোগফল নির্ণয়

## Code

```c
#include<stdio.h>
#include<math.h>
int main(){

    int n, sum=0;
    printf("Enter N: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        sum = sum + pow(i, i);
    }
    printf("The sum is: %d", sum);

    return 0;
}

```

## Algorithm

```
ধাপ ১ঃ প্রোগ্রাম শুরু করি।
ধাপ ২ঃ চলক sum=0 এবং চলক i=1 নির্ধারণ করি।
ধাপ ৩ঃ ইনপুট হিসেবে চলক n এর মান গ্রহণ করি।
ধাপ ৪ঃ i এর সাথে n এর মান তুলনা করি। যদি i<=n এই শর্ত মেনে চলে তবে ধাপ ৫-এ যাই, অন্যথায় ধাপ ৭-এ যাই।
ধাপ ৫ঃ sum চলকের মান sum = sum + pow(i,i) বৃদ্ধি করি, এবং ধাপ ৬-এ যাই।
ধাপ ৬ঃ i চলকের মান i = i + 1 বৃদ্ধি করি, এবং পুনঃরায় ধাপ ৪-এ যাই।
ধাপ ৭ঃ sum চলকের মান প্রদর্শণ করি।
ধাপ ৮ঃ প্রোগ্রাম শেষ করি।
```

## Flow-chart
![](/hsc_ict_5th_chapter/flowcharts/n^n.jpg)
