# -*- coding: utf-8 -*-

import kNN
group,labels=kNN.createDataSet()
r0 = kNN.classify0([1.5,2.3], group, labels, 3)
r1 = kNN.classify0([2.0,3.0], group, labels, 3)
r2 = kNN.classify0([0.1,0.1], group, labels, 3)
r3 = kNN.classify0([0.3,0.2], group, labels, 3)