// Chuong trinh C++ duyet do thi su dung phuong phap DFS de quy
#include <iostream>
#include <string>
#include <fstream>
#include <stack>
#include <queue>
#define MAX 100
using namespace std;
struct	dinh{
		int	num, id;								// vertex number, identification
};
struct	canh{
		dinh	u, v;								// dinh dau, dinh cuoi
													// quy uoc: u.num < v.num (do thi vo huong)
		int		c;									// trong so cua canh
};
// khai bao lop do thi de tao doi tuong do thi
class Dothi{
		int 	n;									// so dinh cua do thi
		int 	A[MAX][MAX];						// ma tran ke cua do thi
		int		ne, neT, neMST, dH;					// so canh cua do thi va cua cay
		canh	E[MAX], ET[MAX], EMST[MAX];			// tap canh cua do thi va cua cay
	public:
		string	myname;								// ten do thi
		bool	chuaxet[MAX];						// mang luu trang thai da xet hay chua xet cua cac dinh do thi
		int		s, t;								// dinh khoi dau (duyet, duong di v.v.)
		int		soTPLT;								// luu so thanh phan lien thong cua do thi
		int		truoc[MAX];							// mang luu duong di
		int		X[MAX];								// mang X[..] luu chu trinh Hamilton
		int		soHamilton;							// dem so chu trinh Hamilton
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
		void	Tree_DFS_dequy(int u);				// ham xay dung cay khung cua do thi (theo DFS de quy)
		void	Tree_Graph(int root);				// goi cac ham xay dung cay bao trum
		void	Edge_sort();						// sap xep cac canh theo trong so tang dan
		void	Kruskal();							// XD cay bao trum nho nhat theo Kruskal
		void	Prim(int s);						// Xay dung cay bao trum nho nhat theo Prim
		Dothi();									// Contructor
		void	TraLoi();							// phuong thuc bao ten doi tuong do thi
};
// Constructors
// Dothi class
Dothi::Dothi(){
	myname=" \n My graph";							// proper initiation: khoi dung dung cach
	ne=0;	neT=0, neMST=0, dH=0;					// khoi tao so canh do thi ne = 0; so canh cay khung neT=0
}
// Member functions
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
				// voi do thi vo huong
				if((A[i][j]!=0)&&(j>i)){			// (i,j) la canh, chi dem j>i
					ne++;							// tang so canh cua do thi
					E[ne].u.num=i;	E[ne].v.num=j;	// gan dinh dau, cuoi cua canh
					E[ne].c=A[i][j];				// lay trong so cho canh trong truong hop dung ma tran trong so
					//cout << "\n Canh " << ne << ": " << E[ne].u.num << ", " << E[ne].v.num;
				}
			}
		}
		//for(int i=1; i<=ne; i++){
		//	cout << "\n Canh " << i << ": " << E[i].u.num << ", " << E[i].v.num;
		//}
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
	soHamilton=0;
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
				soHamilton++;									// tang so chu trinh Hamilton len 1
				cout << "\n Chu trinh Hamilton " << soHamilton << ": ";
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
	if(soHamilton==0){
		cout << "\n Do thi khong phai la Hamilton.";
	}
}
// Xay dung cay khung cua do thi: DFS de quy
void Dothi::Tree_DFS_dequy(int u){
	//cout << " " << u;							// duyet dinh u
	chuaxet[u]=false;							
	for(int v=1; v<=n; v++){
		if((A[u][v]==1)&&(chuaxet[v]==true)){	// A[u][v]=1 thi v la ke voi u; v chua xet
			neT++;								// tang so canh cay khung len 1
			if(v>u){
				ET[neT].u.num=u;	ET[neT].v.num=v;				
			}
			else{
				ET[neT].u.num=v;	ET[neT].v.num=u;
			}
			Tree_DFS_dequy(v);
		}
	}
}
// goi cac ham xay dung cay bao trum
void Dothi::Tree_Graph(int root){
	Tree_DFS_dequy(root);
	//cout << "\n neT = " << neT;
	if(neT<n-1){
		cout << "\n Do thi khong lien thong.";
	}
	else{										// neT=n-1
		cout << "\n Tap canh cua cay bao trum:";
		for(int i=1; i<=neT; i++){
			cout << "\n Canh " << i << ": " << ET[i].u.num << ", " << ET[i].v.num;
		}
	}
}
// sap xep cac canh theo trong so tang dan
void	Dothi::Edge_sort(){
	//cout << "\n Truoc khi sap xep:";
	//for(int i=1; i<=ne; i++){
	//	cout << "\n Canh " << i << ": " << E[i].u.num << "-" << E[i].v.num << ", " << E[i].c;
	//}
	for(int i=1; i<ne; i++){							// xet canh i
		for(int j=i+1; j<=ne; j++){						// so sanh voi cac canh tu i+1 den n
			if(E[i].c>E[j].c){							// neu > cac canh sau thi doi cho
				canh etmp=E[i];							// doi cho
				E[i]=E[j];	E[j]=etmp;
			}
		}
	}
	// Ktra
	//cout << "\n Sau khi sap xep:";
	//for(int i=1; i<=ne; i++){
	//	cout << "\n Canh " << i << ": " << E[i].u.num << "-" << E[i].v.num << ", " << E[i].c;
	//}
}
// XD cay bao trum nho nhat theo Kruskal
void	Dothi::Kruskal(){
	dinh	V[MAX];							// Tap dinh voi id thay doi
	for(int i=1; i<=n; i++){				// cac dinh co id=num
		V[i].num=i;	V[i].id=i;
	}
	// Kiem tra xem 2 dinh cua 1 canh co cung id khong? Neu ko thi ket nap vao cay
	// Chu y: tap canh da duoc sap xep theo trong so tang dan
	for(int e=1; e<=ne; e++){
		if(V[E[e].u.num].id!=V[E[e].v.num].id){	// hai dinh co id khac nhau, thuoc 2 tap -> ko tao chu trinh
			neMST++;
			EMST[neMST]=E[e];					// thu nap canh e vao cay khung be nhat
			dH+=E[e].c;							// tang do dai cay khung be nhat
			// doi id cac dinh co cung id voi dinh v cua canh vua thu nap
			// cac dinh do se lay id moi la id cua dinh u
			int idtmp=V[E[e].v.num].id;
			for(int i=1; i<=n; i++){			// xet tap dinh cua do thi
				if(V[i].id==idtmp){				// cac dinh co id cua dinh v
					V[i].id=V[E[e].u.num].id;	// doi thanh id cua dinh u
				}
			}
		}
	}
	// In cay khung be nhat:
	cout << "\n Cay khung be nhat dH = " << dH;
	for(int e=1; e<=neMST; e++){
		cout << "\n Canh: " << EMST[e].u.num << "-" << EMST[e].v.num << ", " << EMST[e].c;
	}
}
// Xay dung cay bao trum nho nhat theo Prim
void	Dothi::Prim(int s){
	dinh	V[MAX];
	int		VHid=s, Vid=n-s+1;
	V[s].num=s;	V[s].id=VHid;					// Tap VH
	for(int i=1; i<=n; i++){					// Tao tap V\{s}
		if(i!=s){
			V[i].num=i;	V[i].id=Vid;			// Tap V\{s} co cung id la Vid
		}
	}
	neMST=0;	dH=0;
	while(Vid!=s){								// Tap V chua rong
		// Tren tap canh da sap xep theo trong so tang dan
		// chon canh co trong so be nhat, 1 dinh thuoc VH, 1 dinh thuoc V
		for(int e=1; e<=ne; e++){
			if(((V[E[e].u.num].id==VHid) && (V[E[e].v.num].id==Vid))||
			  ((V[E[e].v.num].id==VHid) && (V[E[e].u.num].id==Vid))){
			  	neMST++;						// Tang so canh cua cay khung be nhat len 1
			  	EMST[neMST]=E[e];				// Ket nap canh E[e] vao cay khung be nhat
			  	dH+=E[e].c;						// Tang do dai cay khung be nhat
			  	// Chuyen dinh v (hoac u) tu tap V sang tap VH
				if(V[E[e].v.num].id==Vid){
			  		V[E[e].v.num].id=VHid;
			  	}
			  	else{							// V[E[e].u.num].id==Vid
			  		V[E[e].u.num].id=VHid;
			  	}
			  	// Kiem tra xem tap dinh V rong hay chua?
			  	Vid=s;							// Tap ung long tin la V rong
			  	for(int i=1; i<=n; i++){		// Kiem tra tap V neu con dinh co Vid==n-s+1 thi V chua rong
					if(V[i].id==n-s+1){			// <=> V chua rong
						Vid=n-s+1;	break;
					}			  	
			  	}
			  	break;							// Moi lan thu nap 1 canh trong so be nhat
			  }
		}
	}
	// In cay khung be nhat
	cout << "\n Cay khung be nhat theo Prim: dH=" << dH;
	for(int e=1; e<=neMST; e++){
		cout << "\n Canh: " << EMST[e].u.num << "-" << EMST[e].v.num << ", " << EMST[e].c;
	}
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
	//if(G.DocDuLieu("4_2_Hamilton1.in")){
	//if(G.DocDuLieu("4_2_Hamilton2.in")){
	//if(G.DocDuLieu("4_2_Hamilton3_none.in")){
	//if(G.DocDuLieu("5_1_SpanningTree.in")){
	if(G.DocDuLieu("5_2_Kruskal_n5.in")){
	//if(G.DocDuLieu("5_2_MSTkiemnghiem.in")){
		//cout << "\n Doc file OK";
		//G.KhoiTao();							// chuaxet[1..n]=true;
		//G.Nhap1Dinh();							// nhap dinh s
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
		//cout << "\n Duyet BFS:";
		//G.Reset();								// chuaxet[1..n]=true;
		//G.BFS_hangdoi(G.s);
		//G.DuongDi(G.s, G.t);						// duyet, dem cac thanh phan lien thong
		//cout << "\n Kiem tra tinh lien thong manh cua do thi co huong:";
		//G.Strongly_Connected();					// Ktra tinh lien thong manh
		//cout << "\n Tim cac dinh tru cua do thi:";
		//G.Duyet_Tru();							// Ktra tinh lien thong manh
		//cout << "\n Tim cac canh cau cua do thi:";
		//G.Duyet_Cau();							// Ktra tinh lien thong manh
		//cout << "\n Kiem tra do thi co phai do thi Euler?";
		//int result=G.IsEuler(u, v);
		//if((result==1)||(result==2)){
		//	if(result==1){
		//		cout << "\n Do thi Euler";
		//		cout << "\n Chu trinh Euler:\n";
		//		G.EulerCycle(6);						// in chu trinh Euler tu dinh 1
		//	}
		//	else{
		//		cout << "\n Do thi nua Euler";
		//		cout << "\n Duong di Euler:\n";
		//		G.EulerCycle(u);						// in chu trinh Euler tu dinh 1
		//	}
		//}
		//else{
		//	cout << "\n Khong phai do thi Euler";
		//}
		//cout << "\n Liet ke cac chu trinh Hamilton (neu co): ";
		//G.Hamilton_Cycle_listing(1);					// Liet ke cac chu trinh Hamilton (neu co)
		//G.KhoiTao();
		//G.Tree_Graph(13);								// XD va liet ke cay bao trum tu dinh 1
		G.Edge_sort();
		G.Kruskal();
		G.Prim(1);
	}
	else{
		cout << "\n Loi file";
	}
	return 0;
}
