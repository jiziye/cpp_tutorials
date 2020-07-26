//关联容器map
/*
标准的STL关联容器（包括set和map以及set的衍生体multise和map的衍生体multimap）的内部结构是一个平衡二叉树。
平衡二叉树：
AVL—tree;
RB-tree;
AA-tree;

STL的底层机制是以RB-tree（红黑树）完成的。RB-tree也是一个独立容器。但并不给外界使用。红黑树是由于树的每个结点
都被上了红色或者黑色，节点所着的颜色被用来检测树的平衡性。在对节点插入和删除的操作中，可能会被旋转来保持树的平衡性。
平均和最坏的情况下，插入，删除，查找时间都是O（lgn);
一个红黑树 是一棵二叉查找树，除了二叉树的要求外，还有以下属性：
结点为红色或者黑色。
所有叶子结点都是空结点，并且为黑色。
如果父结点是红色的，那么子结点都是黑色的。
结点到其子孙结点的每条简单路径上都包含相同数目的黑色结点。
根结点是黑色的。
map的底层是以红黑树实现的。

map和hashmap的区别：
底层数据结构不同，map是红黑树，hashmap是哈希表。
map的优点在于元素可以自动按照键值排序，而hash map的优点在于它的各项操作的平均时间复杂度接近常数。
map属于标准的一部分，而hashmap不是。
 */

#include<iostream>
#include<map>
#include<string>

using namespace std;

int main()
{
    map<int,string> mapstring;
    mapstring.insert(pair<int,string>(1,"one"));
    mapstring.insert(pair<int,string>(2,"two"));
    mapstring.insert(pair<int,string>(3,"three"));
    mapstring.insert(pair<int,string>(4,"four"));
    
    cout << mapstring[1] << endl;

    mapstring[5] = "five";
    cout << mapstring[5] << endl;

    mapstring.erase(2);
    map<int,string>::iterator f = mapstring.find(2);

    if(f != mapstring.end())
    {
        mapstring.erase(f);
    }

    map<int,string>::iterator it = mapstring.begin();
    while(it != mapstring.end())
    {
        cout << (*it).first << " " << (*it).second << endl;
        it++;
    }

    return 0;
}