//查找最小值元素并记住其位置



算法思想：搜索整个顺序表，查找最小值元素并记住其位置，搜索结束后用最后一个元素填补空出的原最小值元素的位置。



bool Del_Min(SqList &L,Elemtype &e){
  if(L.length==0)//表空，中止操作返回
    return false;
  
  e=L.data[0];//假设0号元素的值最小
  int pos=0;
  for(int i=1;i<L.length;i++){
    if(L.data[i]<e){
      e=L.data[i];
      pos=i;
    }
  }
  L.data[pos]=L.data[length-1];
  L.length--;
  return true;
}
