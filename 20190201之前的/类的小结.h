/*
声明一个CPU类，包含等级(rank)、频率(frequency)、电压(voltage)
等属性，有两个公有成员函数run、stop

其中：
rank为枚举类型CPU_Rank，声明为enum CPU_Rank{P1=1,P2,P3,P4,P5,P6,
P7}，frequency为单位是MHz的整型数，voltage为浮点型的电压值。

注意不同访问属性的成员访问方式，并观察构造函数
和析构函数的调用顺序。
*/

#include<iostream>
using namespace std;

enum CPU_Rank{P1=1,P2,P3,P4,P5,P6,P7}
class CPU {
	private:
	CPU_Rank rank;				//声明CPU类，包含私有数据成员
	int frequency;				//等级(rank)
	float voltage;				//频率(frequency)
	public:						//电压(voltage)
	CPU(CPU_Rank r,int f,float v){ 	//构造函数
			rank =r;
			frequency =f;
			voltage =v;
			cout<<"构造了一个CPU！"<<endl;
	}
	~CPU(){cout<<"析构了一个CPU！"<<endl;} //析构函数
	
	CPU_Rank GetRank()const{return rank;}  //外部函数接口
	int GetFrequency() const{return frequency;}
	float GetVolatage() const{return voltage;}
	
	void SetRank(CPU_Rank r){rank =r;}
	void SetFrequency(int f){frequency =f;}
	void SetVoltage(float v){voltage =v;}
	
	void Run(){cout<<"CPU 开始运行"<<endl;}
	void Stop(){cout<<"CPU 停止运行"<<endl;}
};

enum RAM_Type{DDR=2,DDR3,DDR4};
class RAM{
	private:
	enum RAM_Type type;
	unsigned int frequency; //MHz
	unsigned int size;		//GB
	
	public:
	RAM(RAM_Type t,unsigned int f,unsigned int s)
	{					//构造RAM类的构造函数
		type =t;
		frequency =f;
		size =s;
	}
	~RAM(){cout<<"构造RAM类的析构函数"<<endl;};
	
	RAM_Type GetType() const{return type;}
	unsigned int GetFrequency()const{return frequency;}
	unsigned int GetSize() const{return size;}
	
	void SetType(RAM_Type t){type =t;}
	void SetFrequency(unsigned int f){frequency =f;}
	void SetSize(unsigned int s){size =s;}
	
	void Run(){cout<<"RAM 开始执行"<<endl;}
	void Stop(){cout<<"RAM 停止运行"<<endl;}
}

enum CDROM_Interface{SATA,USB};
enum CDROM_Install_type{external,built_in};
class CD_ROM{
	private:
	enum CDROM_Interface Interface_type;
	unsigned int cache_size; //MB
	CDROM_Install_type install_type;		
	
	public:
	CD_ROM(CDROM_Interface i,unsigned int s,CDROM_Install_type it)
	{					//构造CD_ROM类的构造函数
		Interface_type =i;
		cache_size =s;
		install_type =it;
		cout<<"构造了一个CD_ROW类的构造函数"<<endl;
	}
	~CD_ROM(){cout<<"析构CD_ROM类的析构函数"<<endl;};
	
	CDROM_Interface GetInterfaceType() const{return interface_type;}
	unsigned int GetSize() const{return cache_size;}
	CDROM_Install_type GetInstallType()const{return install_type;}
	
	void SetInterfaceType(CDROM_Interface i){Interface_type =i;}
	void SetSize(unsigned int s){cache_size =s;}
	void SrtInstallType(CDROM_Install_type it){install_type =it;}
	
	void Run(){cout<<"CD_ROM 开始执行"<<endl;}
	void Stop(){cout<<"CD_ROM 停止运行"<<endl;}
}

class COMPUTER{
	private:
	CPU my_cpu;
	RAM my_ram;
	CD_ROM my_cdrom;
	unsigned int storage_size;//GB
	unsigned int bandwidth;//MB
	
	public:
	COMPUTER(CPU c,RAM r,CD_ROM cd,unsigned int s,unsigned int b);

	
	~COMPUTER(){cout<<"析构COMPUTER类的析构函数"<<endl;};
	
	void Run(){
		my_cpu.Run();
		my_ram.Run();
		my_cdrom.Run();
		cout<<"COMPUTER开始运行"<<endl;
	}
	void Stop(){
		my_cpu.Stop();
		my_ram.Stop();
		my_cdrom.Stop();
		cout<<"COMPUTER停止运行"<<endl;
	}
}
COMPUTER::COMPUTER(CPU c,RAM r,CD_ROM cd,unsigned int s,unsigned int b)
:my_cpu(c),my_ram(r),my_cdrom(cd) //内嵌对象，调用拷贝构造函数
{
	storage_size= s;
	bandwidth =b;
	
	cout<<"构造了一个COMPUTER!"<<endl;
}

int main(){					//声明一个CPU的对象并初始化
	CPU a(P6,300,2.8);		//调用有三个参数的构造函数
	a.Run();
	a.Stop();
	cout<<"******************\n"<<endl;
	
	RAM b(DDR3,1600,8);
	b.Run();
	b.Stop();
	cout<<"******************\n"<<endl;
	
	CD_ROM c(STAT,2,built_in);
	c.Run();
	c.Stop();
	cout<<"******************\n"<<endl;
	
	COMPUTER my_comptuter(a,b,c,128,10);
	cout<<"******************\n"<<endl;
	
	my_comptuter.Run();
	my_comptuter.Stop();
	cout<<"******************\n"<<endl;
	
	return 0;		//在mian函数return之前，
}					//要将所有存活的对象析构

