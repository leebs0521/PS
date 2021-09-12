/*
	BOJ
	1064 평행사변형
	Silver 5
*/

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

// 직선 기울기 구하는 함수 y증가량/ x 증가량 
double cal_slope(int x1, int y1, int x2, int y2){
	double result;
	result = (double)(y1 - y2) / (x1 - x2);
	if(result < 0)
		result = -result;
	
	return result;
}

double cal_dist(int x1, int y1, int x2, int y2){
	double result;
	result = (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2); 
	result = sqrt((double)result);
	
	return result;
} 
int main(int argc, char** argv) {
	
	int i, j, xy[6];
	double slope[2], dist[3], result, temp;
	for(i=0; i<6; i++){
		scanf("%d",&xy[i]);
	}
	
	// 세점이 한 직선위에 있는지 체크 있으면 평행사변형 x
	
	 slope[0] = cal_slope(xy[0],xy[1],xy[2],xy[3]);
	 slope[1] = cal_slope(xy[0],xy[1],xy[4],xy[5]);
	 
	 if(slope[0] == slope[1]){
	 	printf("%lf\n",-1.0);
	 	return 0;
	 }
	 	
	// 세 점으로 만든 직선 3개 직선 중 최소+ 중간 = 최소 둘레 / 중간 + 최대 = 최대 둘레
	
	dist[0] = cal_dist(xy[0],xy[1],xy[2],xy[3]);
	dist[1] = cal_dist(xy[0],xy[1],xy[4],xy[5]);
	dist[2] = cal_dist(xy[2],xy[3],xy[4],xy[5]);
	
	// 거리 오름차순 정렬 
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			if(dist[j]>dist[j+1]){
				temp = dist[j];
				dist[j] = dist[j+1];
				dist[j+1] = temp;	
			}
		}
	} 
	
	// 최대 둘레 - 최소 둘레 = 2*(max - min) 
	result = 2*(dist[2] - dist[0]);
	printf("%.15lf\n", result);
	
	return 0;
}




