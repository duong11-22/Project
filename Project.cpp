#include <iostream>

using namespace std;
class Donhang 
{
	protected:
		int stt;
		string Nggui,Ngnhan;
		int d1,d2,m1,m2,y1,y2;
		double kc;
		string dc1,dc2;
		long sdt1,sdt2;
	public:
		Donhang() {}
		Donhang (int stt,string Nggui,string dc1,string dc2,long sdt1,long sdt2,string Ngnhan,int d1,int d2,int m1,int m2,int y1,int y2,double kc)
		{
			this -> stt=stt;
			this -> Nggui=Nggui;
			this -> Ngnhan=Ngnhan;
			this -> d1=d1;
			this -> d2=d2;
			this -> m1=m1;
			this -> m2=m2;
			this -> y1=y1;
			this -> y2=y2;
			this -> kc=kc;
			this -> dc1=dc1;
			this -> dc2=dc2;
			this -> sdt1=sdt1;
			this -> sdt2=sdt2; 
		} 
		virtual int getSTT
		{
			return stt;
		}	  
		virtual void printBK()
		{
			cout<<stt<<" "<<Nggui<<" "<<Ngnhan<<" "<<dc1<<" "<<sdt1<<" "<<d1<<" "<<m1<<" "<<y1<<" "<<kc;
		}
		virtual void printTL()
		{ 
		    cout<<stt<<" "<<Nggui<<" "<<Ngnhan<<" "<<dc2<<" "<<sdt2<<" "<<d2<<" "<<m2<<" "<<y2<<" "<<kc;
		}
		virtual int getKc()
		{
			return Kc;
		}
        string getNggui()
        {
        	return Nggui;
		}
		string getNgnhan()
		{
			return Ngnhan;
		}
		int getd1()
		{ 
		    return d1;
		}
		int getd2()
		{
		    return d2;
		}
		int getm1()
		{
		    return m1;
		}
		int getm2()
		{
		    return m2;
		}
		int gety1()
		{
			return y1;
		}
		int gety2()
		{
			return y2;
		}
		string getDc1()
		{
			return dc1;
		}
		string getDc2()
		{
			return dc2;
		}
		long getSdt1()
		{
			return sdt1;
		}
		long getSdt2()
		{
			return sdt2;
		}
};

    class Buukien :public Donhang 
    {
    	private:
    		double Cuocphi1;
    		double khoiluong;
    	public:
    		Buukien(int stt,string Nggui,string Ngnhan,string dc,long sdt1,long sdt2,int d1,int m1,int y1,int d2,int m2,int y2,double kc,double cuocphi,double khoiluong)
    		{
    			this -> Cuocphi1=Cuocphi1;
    			this -> khoiluong=khoiluong;
			}
		double getKhoiluong()
		{
			return khoiluong;
		}
		double getCuocphi1()
		{
			return Cuocphi1;
		}
		void setCuocphi1(double Cuocphi1)
		{
			this -> Cuocphi1 =kc*2000+khoiluong*10000;}
		void printBK()
		{
			cout<<stt<<" "<<Nggui<<" "<<Ngnhan<<" "<<dc1<<" "<<sdt1<<" "<<d1<<" "<<m1<<" "<<y1<<" "<<kc<<" "<<khoiluong<<" "<<Cuocphi1;
		}
	};
    class Tailieu :public Donhang
    {
    private:
	double Cuocphi2;
	public:
	  Tailieu(int stt,string Nggui,string Ngnhan,string dc,long sdt1,long sdt2,int d1,int m1,int y1,int d2,int m2,int y2,double kc,double Cuocphi2)	
	  {
	  	this -> Cuocphi2 =Cuocphi2;
	  }
	  double getCuocphi2()
	  {
	  	return Cuocphi2;
	  }
	  void setCuocphi2(double Cuocphi2)
	  {
	  	this -> Cuocphi2=kc*2000+12000;
	  }
	  
	};
	
	class Quanly
	{
		
			
	}
		
		
		
	

int main() {
	return 0;
}
