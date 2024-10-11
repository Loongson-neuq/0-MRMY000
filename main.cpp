#include ".assignment/test.h"

// 比较三个数的大小
void CompareThreeNumbers(int a, int b, int c, Result &result)
{   
    // struct Result
    // {
    //     int min;
    //     int mid;
    //     int max;
    // };
    // Result res;
    // res.max = (((a>b) ? a:b)>c) ? ((a>b) ? a:b):c;
    // res.min = (((a<b) ? a:b)<c) ? ((a<b) ? a:b):c;
    // if (res.max != a && res.min != a){res.mid = a;}
    // if (res.max != b && res.min != b){res.mid = b;}
    // if (res.max != c && res.min != c){res.mid = c;}
    result.max = (((a>b) ? a:b)>c) ? ((a>b) ? a:b):c;
    result.min = (((a<b) ? a:b)<c) ? ((a<b) ? a:b):c;
    if((a > b && b > c)||(c > b && b > a)){result.mid = b;}
    else if ((b > a && a > c)||(c > a && a > b)){result.mid = a;}
    else if ((a > c && c > b)||(b > c && c > a)){result.mid = c;}
    
    
    // 在这里完成你的代码
}
