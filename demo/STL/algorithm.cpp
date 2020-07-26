#include<iostream>
#include<string>
#include<algorithm> //stl算法头文件

#include<vector>
#include<deque>

using namespace std;

//demo2
void print(int elem)
{
    cout << elem << " ";
}

//demo3
template<class T>
void print1(vector<T> &a)
{
    for(vector<T>::iterator it=a.begin(); it!=a.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    //demo1
    int a[4] = {1,2,3,4};
    //vector<string> v = {"one","two","three"};
    vector<string> v;
    v.reserve(10);
    v.push_back("one");
    v.push_back("two");
    v.push_back("three");

    //reverse:是个全局函数，不是成员函数。他有两个参数，一个指向要操作的范围的头的指针，第二个是指向尾的指针
    //是否能逆置链表？
    reverse<int [4]>(a,a+4); //逆置a中所有元素
    reverse<vector<string>::iterator> (v.begin(),v.end());//逆置v中所有元素

    for(vector<string>::iterator it = v.begin(); it!= v.end(); it++)
    {
        cout << *it << " ";//输出v中元素
    }

    cout << endl;

    for(int i = 0; i < 4; i++)
    {
        cout << a[i] << endl;
    }

    //demo2
    //find,for_each两种泛型算法
    deque<int> coll;
    for(int i=1; i <=9; ++i)
    {
        coll.push_back(i);
    }

    deque<int>::iterator pos1;
    pos1 = find(coll.begin(),coll.end(),2);//获取2在coll中的存放位置

    deque<int>::iterator pos2;
    pos2 = find(coll.begin(),coll.end(),7);//获取7在coll中的存放位置

    for_each(pos1,pos2,print);//对pos1到pos2的区间元素依次执行print,打印元素值。
    cout << endl;

    deque<int>::reverse_iterator rpos1(pos1);
    deque<int>::reverse_iterator rpos2(pos2);
    for_each(rpos2,rpos1,print);
    cout << endl;

    //demo3
    vector<int> array;
    array.reserve(10);
    array.push_back(1);
    array.push_back(2);
    array.push_back(3);
    array.push_back(4);
    array.push_back(5);

    array.erase(array.begin());
    print1(array);

    vector<int>::iterator pos;
    pos = remove(array.begin(),array.end(),2);
    print1(array);

    if((pos + 1) == array.end())
    {
        cout << "(pos+1) == array.end()" << endl;
    }

    remove(array.begin(),array.end(),3);
    print1(array);

    return 0;
}

