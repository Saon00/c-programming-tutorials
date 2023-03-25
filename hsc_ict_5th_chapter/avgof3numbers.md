### ৩ টি পূর্নসংখ্যার গড় 

## Code

```c
#include <stdio.h>
int main()
{
    int a, b, c, sum;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    sum = a + b + c;
    float avg = sum / 3;
    printf("The avg is: %f", avg);
    return 0;
}
```

## Algorithm

```
ধাপ ১ঃ প্রোগ্রাম শুরু করি।
ধাপ ২ঃ ইনপুট হিসেবে চলক a,b,c এর মান গ্রহণ করি।
ধাপ ৩ঃ sum=a+b+c সমীকরণের সাহায্যে চলক গুলোর মান যোগ করে যোগফল sum চলকে রাখি।
ধাপ ৪ঃ avg = sum / 3 সমীকরণের সাহায্যে গড় মান বের করে তা চলক avg তে রাখি।
ধাপ ৫ঃ চলক avg এর মান প্রদর্শন করি।
ধাপ ৬ঃ প্রোগ্রাম শেষ করি।
```

## Flow-chart
![](/hsc_ict_5th_chapter/flowcharts/avgof3numbers.jpg)
