#include<time.h>
#include<stdio.h>
int main()
{
  char *wday[] = {"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};
  time_t timep;
  struct tm *p;

  time(&timep);//获取time_t类型的当前时间

  p = localtime(&timep);
  printf("%s",asctime(gmtime(&timep))); 
  //用gmtime将time_t类型的时间转换为struct tm类型的时间(没有经过时区转换的UTC时间)
  //然后再用asctime转换为常见格式

  printf("%s",ctime(&timep));
  //用ctime转换为常见字符串格式

  //两者的时间相差较大，发现后者与date命令行时间相同，认为前者未经过时区的转换
  
  printf("%d/%d/%d ", 1900 + p->tm_year , 1 + p->tm_mon , p->tm_mday);

  printf("%s %d:%d:%d\n", wday[p->tm_wday], p->tm_hour , p->tm_min, p->tm_sec);
   
  return 0;

}
