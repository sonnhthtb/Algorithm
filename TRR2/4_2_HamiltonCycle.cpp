// Chuong trinh C++ duyet do thi su dung phuong phap DFS de quy
#include <iostream>
#include <string>
#include <fstream>
#include <stack>
#include <queue>
#define MAX 100
using namespace std;
// khai bao lop do thi de tao doi tuong do thi
class Dothi{
		int 	n;									// so dinh cua do thi
		int 	A[MAX][MAX];						// ma tran ke cua do thi
	public:
		string	myname;								// ten do thi
		bool	chuaxet[MAX];						// mang luu trang thai da xet hay chua xet cua cac dinh do thi
		int		s, t;								// dinh khoi dau (duyet, duong di v.v.)
		int		soTPLT;								// luu so thanh phan lien thong cua do thi
		int		truoc[MAX];							// mang luu duong di
		int		X[MAX];								// mang X[..] luu chu trinh Hamilton
		void	KhoiTao();							// khoi tao gia tri ban dau cho cac bien...
		void	Reset();							// dat lai gia tri ban dau cho cac bien
		void	Nhap1Dinh();						// nhap 1 dinh tu ban phim
		bool	DocDuLieu(string filename);			// doc ma tran ke tu file: true neu doc OK; false neu khong doc duoc file
		void	DFS_dequy(int u);					// duyet do thi su dung phuong phap duyet theo chieu sau DFS de quy
		void	DFS_nganxep(int u);					// duyet do thi su dung phuong phap duyet theo chieu sau DFS dung ngan xep
		void	BFS_hangdoi(int u);					// duyet do thi su dung phuong phap duyet theo be rong BFS su dung hang doi
		void	Duyet_TPLT();						// duyet, dem cac thanh phan lien thong cua do thi
		void	DuongDi(int s, int t);				// in duong di tu s den t
		bool	IsDuyetHet();						// ham nay xac dinh xem DFS(u) hoac BFS(u) co duyet het duoc cac dinh ko?
													// tra lai true neu duyet het tap dinh (hay DFS(u)=V hoac BFS(u)=V); false neu ko phai
		bool	Strongly_Connected();				// ham nay xac dinh do thi co huong da cho co lien thong manh hay khong.
													// tra lai true neu lien thong manh; false neu khong lien thong manh
		void	Duyet_Tru();						// tim cac dinh tru cua do thi
		void	Duyet_Cau();						// tim cac canh cau cua do thi
		int		IsEuler(int &u, int &v);			// kiem tra xem do thi co phai la do thi Euler khong? tra lai true neu dung, false neu sai
		void	EulerCycle(int u);					// liet ke chu trinh Euler tu dinh u tren do thi Euler
		void	Hmt(int k);							// liet ke cac chu trinh Hamilton (neu co) cua do thi cho truoc
		void	Hamilton_Cycle_listing(int v0);		// in cac chu trinh Hamilton (neu co) cua do thi cho truoc
		Dothi();									// Contructor
		void	TraLoi();							// phuong thuc bao ten doi tuong do thi
};
Dothi::Dothi(){
	myname=" \n My graph";							// proper initiation: khoi dung dung cach
}
// doc file du lieu ma tran ke cua do thi
bool Dothi::DocDuLieu(string filename){
	ifstream	filevao(filename.c_str());			// mo filevao chua du lieu ma tran ke
	if(filevao.is_open()){
		cout << "\n File vao: " << filename;
		filevao >> n;
		//filevao >> n >> s >> t;
		cout << "\n So dinh cua do thi: " << n;
		//cout << "\n Dinh bat dau duong di: " << s << "; dinh cuoi duong di: " << t;
		cout << "\n Ma tran ke:";
		for(int i=1; i<=n; i++){
			cout << "\n";
			for(int j=1; j<=n; j++){
				filevao >> A[i][j];	cout << " " << A[i][j];
			}
		}
		return true;
	}
	return false;
}
// ham khoi tao
void Dothi::KhoiTao(){
	for(int i=1; i<=n; i++){
		chuaxet[i]=true;
		truoc[i]=0;
	}
	soTPLT=0;
}
// ham dat lai gia tri cho cac bien
void Dothi::Reset(){
	for(int i=1; i<=n; i++){
		chuaxet[i]=true;
		truoc[i]=0;
	}
	soTPLT=0;
}
// nhap 1 dinh vao bien s
void Dothi::Nhap1Dinh(){
	cout << "\n Nhap dinh s = "; cin >> s;
}
// duyet do thi su dung pp. duyet theo chieu sau: DFS de quy
void Dothi::DFS_dequy(int u){
	cout << " " << u;							// duyet dinh u
	chuaxet[u]=false;							
	for(int v=1; v<=n; v++){
		if((A[u][v]==1)&&(chuaxet[v]==true)){	// A[u][v]=1 thi v la ke voi u; v chua xet
			DFS_dequy(v);
		}
	}
}
// duyet do thi su dung pp. duyet theo chieu sau: DFS ngan xep
void Dothi::DFS_nganxep(int u){
	stack<int>	nganxep;
	nganxep.push(u);							// day u vao ngan xep
	cout << " " << u;							// duyet dinh u
	chuaxet[u]=false;
	while(!nganxep.empty()){					// ngan xep chua rong
		u=nganxep.top();						// lay mot phan tu o dinh ngan xep
		nganxep.pop();							// loai 1 phan tu dinh ngan xep
		for(int t=1; t<=n; t++){
			if((A[u][t]==1)&&(chuaxet[t]==true)){// t la k cua u; t chua xet
				nganxep.push(u);				// dua dinh u vao ngan xep
				nganxep.push(t);				// dua dinh t vao ngan xep
				cout << " " << t;				// tham dinh t
				chuaxet[t]=false;				// da xet dinh t
				truoc[t]=u;						// luu dinh truoc cua dinh t tren duong di
				break;
			}
		}
	}
}
// duyet do thi theo phuong phap duyet theo be rong BFS su dung hang doi
void Dothi::BFS_hangdoi(int u){
	queue<int>	hangdoi;
	int	s;
	hangdoi.push(u);
	chuaxet[u]=false;
	while(!hangdoi.empty()){
		s=hangdoi.front();						// lay dinh dau tien cua hang doi
		hangdoi.pop();							// loai dinh dau tien
		cout << " " << s;
		for(int t=1; t<=n; t++){
			if((A[s][t]==1)&&(chuaxet[t]==true)){//t la ke voi s; t chua xet
				hangdoi.push(t);				// dua t vao hang doi
				chuaxet[t]=false;
				truoc[t]=s;						// luu dinh truoc cua dinh t tren duong di
			}
		}
	}
}
// ham duyet, dem cac thanh phan lien thong cua do thi
void Dothi::Duyet_TPLT(){
	soTPLT=0;
	for(int u=1; u<=n; u++){					// xet toan bo tap dinh cua do thi
		if(chuaxet[u]==true){
			soTPLT++;							// ghi nhan so thanh phan lien thong (tang 1)
			cout << "\n Duyet TPLT tu dinh " << u << " : ";
			DFS_dequy(u);						// duyet do thi bat dau tu dinh u == doi gia tri cua mang chua xet doi voi cac dinh lien thong voi u
		}
	}
	cout << "\n So thanh phan lien thong: " << soTPLT;
}
// ham in duong di tu s den t
void Dothi::DuongDi(int s, int t){
	if(truoc[t]==0){
		cout << "\n Khong co duong di tu " << s << " den " << t;
	}
	else{
		cout << "\n Duong di tu " << s << " den " << t << " : " << t;
		int u = truoc[t];
		while(u!=s){
			cout << " -> " << u;
			u=truoc[u];
		}
		cout << " -> " << s;
	}
}
// ham nay xac dinh xem DFS(u) hoac BFS(u) co duyet het duoc cac dinh ko?
// tra lai gia tri true neu DFS(u)=V hoac BFS(u)=V <=> chuaxet[1..n]=false
bool	Dothi::IsDuyetHet(){
	for(int i=1; i<=n; i++){
		if(chuaxet[i]!=false)	// hoac chuaxet[i]==true
			return false;									// DFS(u)<>V hoac BFS(u)<>V
	}
	return true;											// DFS(u)=V hoac BFS(u)=V
}
// ham nay xac dinh do thi co huong da cho co lien thong manh hay khong.
bool	Dothi::Strongly_Connected(){
	Reset();
	for(int u=1; u<=n; u++){								// Xet tat ca tap dinh cua do thi
		cout << "\n Duyet BFS tu dinh " << u << " : ";
		BFS_hangdoi(u);
		if(!IsDuyetHet()){
			cout << "\n Do thi khong lien thong manh";
			return false;
		}
		Reset();
	}
	cout << "\n Do thi lien thong manh";
	return true;
}
// tim cac dinh tru cua do thi
void	Dothi::Duyet_Tru(){
	Reset();
	for(int u=1; u<=n; u++){
		chuaxet[u]=false;									// loai u khoi qua trinh duyet
		if(u==1){
			cout << "\n Duyet DFS ngan xep tu dinh 2:";		// duyet DFS tu dinh v bat ky <> u
			DFS_nganxep(2);
		}
		else{
			cout << "\n Duyet DFS ngan xep tu dinh 1:";		// duyet DFS tu dinh v bat ky <> u
			DFS_nganxep(1);
		}
		if(!IsDuyetHet()){
			cout << "\n Dinh " << u << " la dinh tru";
		}
		else
			cout << "\n Dinh " << u << " khong phai la dinh tru";
		Reset();
	}
}
// tim cac canh cau cua do thi
void	Dothi::Duyet_Cau(){
	Reset();
	for(int i=1; i<n; i++){
		for(int j=i+1; j<=n; j++){
			if(A[i][j]==1){
				A[i][j]=0;	A[j][i]=0;
				cout << "\n Duyet DFS de quy tai dinh 1";
				DFS_dequy(1);
				if(!IsDuyetHet())
					cout << "\n Canh (" << i << ", " << j << ")" << " la canh cau";
				//else
				//	cout << "\n Canh (" << i << ", " << j << ")" << " khong phai la canh cau";
				A[i][j]=1;	A[j][i]=1;
				Reset();
			}
		}
	}
}
// kiem tra xem do thi co phai la do thi Euler khong? tra lai true neu dung, false neu sai
// gia thiet do thi da cho la LIEN THONG
int	Dothi::IsEuler(int &u, int &v){
	int dem=0;													// dem so dinh bac le
	for(int i=1; i<=n; i++){									// kiem tra tat ca cac hang cua ma tran ke == tap dinh cua do thi
		int sum=0;
		for(int j=1; j<=n; j++){								// lay tong cac phan tu tren hang
			sum+=A[i][j];
		}
		if(sum%2==1){											// dem so dinh bac le trong do thi
			dem++;
			if(dem==1) u=i;										// lay dinh bac le thu nhat
			if(dem==2) v=i;										// lay dinh bac le thu nhat
		}
	}
	if(dem==0)	return 1;										// 1: do thi Euler, tat ca cac dinh deu bac chan;
	if(dem==2)	return 2;										// 2: do thi nua Euler;
	return 0;													// khong co 0 hoac 2 dinh bac le => do thi ko phai la nua Euler
}
// liet ke chu trinh Euler tu dinh u tren do thi Euler
void	Dothi::EulerCycle(int u){
	stack<int>	nganxep;
	stack<int>	CE;												// CE: luu chu trinh Euler
	nganxep.push(u);
	while(!nganxep.empty()){									// ngan xep chua rong
		int s=nganxep.top();									// lay 1 dinh tu dinh ngan xep
		int t;
		for(t=1; t<=n; t++){									// tim dinh ke dau tien cua s
			if(A[s][t]==1){										// dinh t ke voi dinh s
				nganxep.push(t);								// day t vao dinh ngan xep
				A[s][t]=0;	A[t][s]=0;							// xoa bo canh (s,t)
				break;
			}
		}
		if(t>n){												// Ke(s) = rong
			int s=nganxep.top();								// lay dinh ngan xep
			nganxep.pop();										// loai bo dinh ngan xep
			CE.push(s);											// dua s vao CE
		}
	}
	// In chu trinh Euler
	while(!CE.empty()){											// lay tu dinh CE, moi lan 1 phan tu
		if(CE.size()>1){
			cout << CE.top() << " -> ";
			CE.pop();
		}
		else{
			cout << CE.top();
			CE.pop();
		}
	}
}
// liet ke cac chu trinh Hamilton (neu co) cua do thi cho truoc
void	Dothi::Hmt(int k){
	for(int y=1; y<=n; y++){									// XET toan bo tap dinh cua do thi
		if(A[X[k-1]][y]==1){									// y la dinh ke cua dinh X[k-1]
			if((k==n+1)&&(y==X[1])){							// in chu trinh Hamilton
				cout << "\n Chu trinh Hamilton: ";
				for(int i=1; i<=n; i++){
					cout << X[i] << " -> ";
				}
				cout << X[1];
			}
			else{												// thu nhan X[k] va goi de quy Hmt(k+1)
				if(chuaxet[y]==true){
					X[k]=y;										// thu nhan X[k]
					chuaxet[y]=false;							// danh dau y da xet
					Hmt(k+1);
					chuaxet[y]=true;							// Quay lui: tra lai trang thai chuaxet cho y
				}
			}
		}
	}
}
// in cac chu trinh Hamilton (neu co) cua do thi cho truoc
void	Dothi::Hamilton_Cycle_listing(int v0){
	KhoiTao();
	X[1]=v0;
	chuaxet[v0]=false;
	Hmt(2);
}
// bao ten do thi
void Dothi::TraLoi(){
	cout << myname;
}
// ham main
int main(){
	int u, v;
	Dothi	G;									// G: graph object
	G.TraLoi();
	//if(G.DocDuLieu("3_1_DFS.in")){
	//if(G.DocDuLieu("3_2_BFS.in")){
	//if(G.DocDuLieu("3_3_TPLT.in")){
	//if(G.DocDuLieu("3_4_Path_DFS_BFS.in")){
	//if(G.DocDuLieu("3_5_StronglyConnected.in")){
	//if(G.DocDuLieu("3_5_StronglyConnected_T.in")){
	//if(G.DocDuLieu("3_5_StronglyConnected_Bai4.in")){
	//if(G.DocDuLieu("3_7_CanhCau.in")){
	//if(G.DocDuLieu("4_1_EulerCycle.in")){
	//if(G.DocDuLieu("4_1_EulerCycle_cohuong.in")){
	//if(G.DocDuLieu("4_1_EulerPath.in")){
	//if(G.DocDuLieu("Test_C16.in")){
	if(G.DocDuLieu("DOTHI.IN")){
		//cout << "\n Doc file OK";
		G.KhoiTao();							// chuaxet[1..n]=true;
		G.Nhap1Dinh();							// nhap dinh s
		//cout << "\n Duyet DFS de quy tu dinh " << G.s << ": ";
		//G.DFS_dequy(G.s);						// duyet de quy tu dinh s
		//G.Reset();								// chuaxet[1..n]=true;
		//cout << "\n Duyet DFS ngan xep tu dinh " << G.s << ": ";
		//G.DFS_nganxep(G.s);						// duyet DFS ngan xep tu dinh s
		//G.Reset();								// chuaxet[1..n]=true;
		//cout << "\n Duyet BFS ngan xep tu dinh " << G.s << ": ";
		//G.BFS_hangdoi(G.s);						// duyet BFS hang doi tu dinh s
		//G.Reset();								// chuaxet[1..n]=true;
		//cout << "\n Duyet, dem cac thanh phan lien thong:";
		//G.Duyet_TPLT();							// duyet, dem cac thanh phan lien thong
		//cout << "\n Duyet DFS:";
		//G.Reset();								// chuaxet[1..n]=true;
		//G.DFS_nganxep(G.s);
		//G.DuongDi(G.s, G.t);						// duyet, dem cac thanh phan lien thong
		// cout << "\n Duyet BFS:";
		// G.Reset();								// chuaxet[1..n]=true;
		// G.BFS_hangdoi(G.s);
		// G.DuongDi(G.s, G.t);						// duyet, dem cac thanh phan lien thong
		//cout << "\n Kiem tra tinh lien thong manh cua do thi co huong:";
		//G.Strongly_Connected();					// Ktra tinh lien thong manh
		//cout << "\n Tim cac dinh tru cua do thi:";
		//G.Duyet_Tru();							// Ktra tinh lien thong manh
		//cout << "\n Tim cac canh cau cua do thi:";
		//G.Duyet_Cau();							// Ktra tinh lien thong manh
		cout << "\n Kiem tra do thi co phai do thi Euler?";
		int result=G.IsEuler(u, v);
		if((result==1)||(result==2)){
			if(result==1){
				cout << "\n Do thi Euler";
				cout << "\n Chu trinh Euler:\n";
				G.EulerCycle(6);						// in chu trinh Euler tu dinh 1
			}
			else{
				cout << "\n Do thi nua Euler";
				cout << "\n Duong di Euler:\n";
				G.EulerCycle(u);						// in chu trinh Euler tu dinh 1
			}
		}
		else{
			cout << "\n Khong phai do thi Euler";
		}
		// cout << "\n Liet ke cac chu trinh Hamilton (neu co): ";
		// G.Hamilton_Cycle_listing(1);					// Liet ke cac chu trinh Hamilton (neu co)
	}
	else{
		cout << "\n Loi file";
	}
	return 0;
}
