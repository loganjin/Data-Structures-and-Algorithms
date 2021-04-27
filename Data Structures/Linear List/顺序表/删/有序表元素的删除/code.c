算法思想：先寻找值大于等于s的第一个元素（第一个删除的元素），然后寻找值大于t的第一个元素（最后一个删除的元素的下一个元素）。要将这段元素删除，只需直接将后面的元素前移。（因为是有序表，所以删除的元素必然是相连的整体。）



bool Del_s_t(SqList &L,ElemType s,ElemType t){
    if(s>=t||L.length==0)
        return false;

    for (int i = 0; i < L.length && L.data[i] <= s;i++);//寻找第一个删除的元素
    if(i>=L.length)//所有元素值都小于s
        return false;
    for (int j = i; j < L.length && L.data[j] <= t;j++);//寻找最后一个删除的元素的下一个元素
    for (; j < L.length; i++,j++)
        L.data[i] = L.data[j];//前移，填补被删元素位置
    L.length = i;

    return true;
}
