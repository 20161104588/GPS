//
//  main.c   Users/a20161104588/Desktop/GPS/GPS170510.log//  GPS
//
//  Created by 20161104588 on 17/6/22.
//  Copyright © 2017年 20161104588. All rights reserved.
//
#include<stdio.h>
int main(int argc,const char *argv[])
{
    FILE *fp;
    char gps1[70];
    char gps2[70];
    char lat[10];//经度
    char lng[10];//纬度
    char alt[10];//海拔
    char time[10];//时间
    int a;
    fp=fopen("//Users//a20161104588//Desktop//GPS//GPS170510.log","r+");
    fscanf(fp,"%s%s",gps1,gps2);
    printf("输出：%s\n%s\n",gps1,gps2);
    for(a=0;a<8;a++)
        lat[a]=gps1[a+16];
            lat[8]='\0';
    printf("纬度：%s\n",lat);
    for(a=0;a<8;a++)
        lat[a]=gps1[a+16];
    lat[8]='\0';
    printf("纬度：%s\n",lat);    fclose(fp);
    return 0;
 }
