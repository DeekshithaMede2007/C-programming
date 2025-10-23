#include<stdio.h>
int main(){
	int num_pens,amount,recycle_cost,cost_reffils,ans;
	scanf("%d %d %d %d",&num_pens,&amount,&recycle_cost,&cost_reffils);
	int low=1;
	int high=num_pens;
	while(low<=high){
		int mid=(low+high)>>1;
		int remain_pen=num_pens-mid;
		int gain=remain_pen*recycle_cost;
		int total=gain+amount;
		if(mid*cost_reffils<=total){
			ans=(mid>ans)? mid : ans;
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
	printf("%d",ans);
	return 0;
}
