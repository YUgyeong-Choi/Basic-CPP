//�Լ� ������ ���� �������� �ʰڴ� �ϸ� const
#ifndef __POINT_H_
#define __POINT_H_

class Point {
private:
	int x;
	int y;
public:
	Point(const int xpos,const int ypos); //�����ڷ� ����
	int GetX() const;
	int GetY() const;
	bool SetX(int xpos);
	bool SetY(int ypos);
};
#endif