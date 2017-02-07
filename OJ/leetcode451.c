/*
Given a string, sort it in decreasing order based on the frequency of characters.

Example 1:
Input:"tree"
Output:"eert"
Explanation:
'e' appears twice while 'r' and 't' both appear once.
So 'e' must appear before both 'r' and 't'. Therefore "eetr" is also a valid answer.

Example 2:
Input:"cccaaa"
Output:"cccaaa"
Explanation:
Both 'c' and 'a' appear three times, so "aaaccc" is also a valid answer.
Note that "cacaca" is incorrect, as the same characters must be together.

Example 3:
Input:"Aabb"
Output:"bbAa"
Explanation:
"bbaA" is also a valid answer, but "Aabb" is incorrect.
Note that 'A' and 'a' are treated as two different characters.
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* frequencySort(char* s) {
	int n = strlen(s);
	int b[126-32+1] = { 0 };//���ַ����ֵ�Ƶ�Σ������ո񡢱����������ţ�
	int i,j,idx,k;
	for (i = 0; i < n; i++){
		b[s[i]-' ']++;
	}//����b�����ÿ���ַ��ĳ��ִ���

	int outCnt = 0;//�Ѿ������˼����ַ�
	char* r = (char*)malloc((n+1)*sizeof(char));
	char* const res = r;//����������return
	for (i = 0; i < n; i++){
		if (outCnt == n) break;//˵�������ַ����������
		int tmpCnt = 0;
		for (j = 0; j < (126 - 33 + 1); j++){
			if (b[j]>tmpCnt){
				tmpCnt = b[j];
				idx = j;
			}
		}
		outCnt += tmpCnt;//ÿ���ҳ������ֵ��tmpCnt=b[idx]
		for (k = 0; k < tmpCnt; k++){//��ȷ���������ַ��ŵ�r��
			*r++ = idx+' ';		
		}
		b[idx]=0;//��0����ֹ���ٴγ�Ϊ���ֵ
	}
	*r = '\0';//�ַ���ĩβ��'\0'
	return res;
}

int main(){
	char *a = "~~~a!!bb~~~~4  4!!4~4~CC~C";
	printf("%s\n", frequencySort(a));
	return 0;
}