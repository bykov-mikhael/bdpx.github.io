
#include <iostream.h>
#include <stdarg.h>

int sum (int k, ...)
{
	va_list list;
	int s=0, x;
va_start(list, k);
for ( ; k!=0; k--) {
  x = va_arg(list, int);
  s+= x;
}
va_end(list);
return s;
}
void main( )
{
cout<<"\n�㬬�(2,4,6)= "<<sum(2,4,6); //��室�� �㬬� 4+6
cout<<"\n�㬬�(4,1,2,3,4)= "<<sum(4,1,2,3,4); //��室�� �㬬� 1+2+3+4
}
