class vPersona
{
protected:
	static vPersona *head; // ����������� ����������
public:
	vPersona *next;
	virtual ~vPersona(){}
	virtual char* getName() const = 0; // ������ ����������� �������
	virtual void setName(const char *name_) = 0;
	virtual int getAge() const = 0;
	virtual void setAge(const int age_) = 0;
	void add();
};



