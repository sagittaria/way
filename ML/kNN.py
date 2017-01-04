# -*- coding: utf-8 -*-
from numpy import array
from numpy import tile
import operator

def createDataSet():
    group =array([[1.0,1.1],[1.0,1.0],[0.,0.],[0.,0.1]])
    #如果这句报错only 2 non-keyword arguments accepted，把Spyder关掉再开一次就好了
    labels=['A','A','B','B']
    return group,labels
    

def classify0(inX, dataSet, labels, k):
    dataSetSize = dataSet.shape[0]
    diffMat = tile(inX, (dataSetSize,1)) - dataSet
    sqDiffMat = diffMat**2
    sqDistances = sqDiffMat.sum(axis=1)
    distances = sqDistances**0.5
    sortedDistIndicies = distances.argsort()
    classCount={}
    
    for i in range(k):
        voteIlabel = labels[sortedDistIndicies[i]]
        classCount[voteIlabel] = classCount.get(voteIlabel,0) + 1
        sortedClassCount = sorted(classCount.iteritems(),
        key=operator.itemgetter(1), reverse=True)
        
    return sortedClassCount[0][0]