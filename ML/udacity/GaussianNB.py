# -*- coding: utf-8 -*-
"""
Created on Fri Jan 27 22:40:29 2017

@author: admin
"""
import numpy as np
X = np.array([[-1, -1], [-2, -1], [-3, -2], [1, 1], [2, 1], [3, 2]])
Y = np.array([1, 1, 1, 2, 2, 2])
#以上是训练集，以下是测试集
x_test=np.array([[-5, -5], [1, -6], [-4, -1], [-1.5, 2.4], [2.5, 3.1], [3.9, 2.3]])
y_test=np.array([2, 1, 1, 2, 2, 2]) #我故意把[-5,-5]的标签设为了2

from sklearn.naive_bayes import GaussianNB
clf = GaussianNB() #创建分类器 classifier
clf.fit(X, Y) #用训练数据拟合（训练一下）

print clf.predict([[-0.8,-1]]) #试试看用拟合过的分类器预测出什么结果 [1]

#计算准确率
#方法1
print clf.score(x_test, y_test) #这是用从x_test预测出来的标签，去与y_test比较

#方法2
pred = clf.predict(x_test)
print pred #预测结果
print y_test #测试集的标签（故意把[-5,-5]的标签设为了2的）
from sklearn.metrics import accuracy_score
print accuracy_score(pred,y_test)#拿预测值和y_test比较

#六个里错一个，准确率为83.3%
#以上【高斯-朴素贝叶斯】，“会用”达成！