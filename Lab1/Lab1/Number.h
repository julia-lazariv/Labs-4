// Number.h
class Number
{
private:
	int first;
	unsigned int second;
public:
	int GetFirst() const { return first; }
	unsigned int GetSecond() const { return second; }
	void SetFirst(int value);
	void SetSecond(unsigned int value);
	bool Init(int x, int y);
	void Display() const;
	void Read();
	void multiply(int N);
	int Sum();
};