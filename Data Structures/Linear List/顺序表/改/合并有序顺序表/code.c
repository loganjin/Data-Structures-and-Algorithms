算法思想：按顺序不断取下俩个有序顺序表表头较小的结点存入新的顺序表中。然后看哪个表还有剩余，将剩下部分加到新的顺序表的后面。



bool Merge(SeqList A,SeqList B, SeqList &C){
  if(A.length+B.length>C.MaxSize)
    return false;
  
  int i=0,j=0,k=0;
  while(i<A.length&&i<B.kength){//循环，俩俩比较，小者存入结果表
    if(A.data[i]<=B.data[i])
      C.data[k++]=A.data[i++];
    else
      C.data[k++]=B.data[j++];
  }
  while(i<A.length)//看哪个表还有剩余，将剩下的部分加到新的顺序表后面
    C.data[k++]=A.data[i++];
  while(i<B.length)
    C.data[k++]=B.data[j++];
  C.length=k;
  
  return true;
}
  
