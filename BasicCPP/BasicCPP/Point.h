//함수 내에서 값을 변경하지 않겠다 하면 const
#ifndef __POINT_H_
#define __POINT_H_

class Point {
private:
	int x;
	int y;
public:
	bool InitMembers(int xpos, int ypos);
	int GetX() const;
	int GetY() const;
	bool SetX(int xpos);
	bool SetY(int ypos);
};
#endif