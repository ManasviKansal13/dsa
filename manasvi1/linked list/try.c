#include"link.h"
#include<stdio.h>
void main()
{
    struct node *START;
  START=NULL;
  InsBeg(&START,100);
  InsBeg(&START,200);
  InsBeg(&START,300);
  InsBeg(&START,400);
  InsBeg(&START,500);
  InsEnd(&START,900);
  InsBeg(&START,600);
  InsEnd(&START,700);
  Traverse(&START);
}