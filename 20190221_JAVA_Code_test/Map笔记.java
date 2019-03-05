1.Set的特点
	1.无序
	2.元素不能重复
	3.没有索引
2.HashSet 的去重的标准
	1. 当hashCode 和equls方法同时相同的时候就是重复元素;

	HashSet的contains()方法和我们List的contains方法不太一样, 他首先比较的是hashcode,然后在比较equals
	而List中contains方法只比较Equals;
3.Map 是专门处理对应关系的数据
	Map 夫妻俩集合,键值对数据;
	Collection 这个是单身汉集合;
	HashMap中键其实就是一个HashSet集合;右边就是一个Collection集合;

	也就是键是唯一的(键的唯一性和HashSet判断唯一性的规则一样)
4.Map遍历方法
	map本身没有遍历方法,只能通过转成单列集合,
	有两种:
		1.找到所有的丈夫, 通过丈夫去找妻子;
		2.找到所有的孩子,通过孩子去找老爸,老妈;

 


