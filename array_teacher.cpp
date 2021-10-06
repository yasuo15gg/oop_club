#include<iostream>
#include<string.h>
using namespace std;

class GV{
private:
	char ht[30];
	char bc[15];
	char cn[20];
	float bl;
	int t;
public:
	void nhap(){
        cout<<"Nhap ho ten: ";
        fflush(stdin);
        cin.getline(this->ht,30);
        cout<<"Nhap tuoi: ";cin>>t;
        fflush(stdin);
        cout<<"Nhap bang cap: ";
        fflush(stdin);
        cin.getline(this->bc,15);
        fflush(stdin);
        cout<<"Nhap chuyen nganh: ";
        cin.getline(this->cn,20);
        fflush(stdin);
		cout<<"Nhap bac luong: ";cin>>bl;
    }
    void xuat(){
    	cout<<"\nHo ten: "<<ht<<endl;
    	cout<<"Tuoi: "<<t<<endl;
    	cout<<"Bang cap: "<<bc<<endl;
    	cout<<"Chuyen nganh: "<<cn<<endl;
    	cout<<"Bac luong: "<<bl<<endl;
    	cout<<"Luong co ban: "<<lcb()<<endl;
	}
	int lcb(){
		return bl*610;
	}
	void tim(GV x[], int n){
		cout<<"\nDanh sach giao vien tien luong < 2000:"<<endl;
		for(int i=0;i<n;i++){
			if((x[i].bl*610)<2000){
				cout<<"\nHo ten: "<<x[i].ht<<endl;
		    	cout<<"Tuoi: "<<x[i].t<<endl;
		    	cout<<"Bang cap: "<<x[i].bc<<endl;
		    	cout<<"Chuyen nganh: "<<x[i].cn<<endl;
		    	cout<<"Bac luong: "<<x[i].bl<<endl;
		    	cout<<"Luong co ban: "<<x[i].lcb()<<endl;
			}
		}
	}
	void sapxep(GV x[],int n){
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(strcmp(x[i].bc,x[j].bc)==1){
                    GV tg=x[i];
                    x[i]=x[j];
                    x[j]=tg;
                }
            }
        }
	}
};
int main(){
	int n, i;
	cout<<"Nhap so luong giao vien: ";cin>>n;
    GV* x=new GV[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Nhap thong tin giao vien thu "<<i+1<<endl;
        x[i].nhap();
    }
    for(int i=0;i<n;i++)
    {
    	cout<<"Thong tin giao vien thu "<<i+1<<endl;
        x[i].xuat();
    }
    x[i].tim(x,n);
    x[i].sapxep(x,n);
    cout<<"\nThong tin giao vien sau khi sap xep: "<<endl;
    for(int i=0;i<n;i++){
    	x[i].xuat();
	}
    return 0;
}
