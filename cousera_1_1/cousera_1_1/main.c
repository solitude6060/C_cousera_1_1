//
//  main.c
//  cousera_1_1
//
//  Created by 馬崇堯 on 2015/10/26.
//  Copyright © 2015年 馬崇堯. All rights reserved.
//

#include <stdio.h>
int main() {
    // insert code here...
    int hight = 0,width = 0,length = 0;
    scanf("%d",&hight);
    scanf("%d",&width);
    scanf("%d",&length);
    int w1,w2,w3;
    w1 = hight*width;
    w2 = width*length;
    w3 = hight*length;
    int total = 2*(w1+w2+w3);
    int vol = hight*width*length;
    
    printf("%d %d\n",total,vol);
    
    return 0;
}
