#pragma once
class BeizerCurvePortrait
{
public:
	float getNextBezierPointX(float t);
	float getNextBezierPointY(float t);
	void drawline();
	BeizerCurvePortrait();
	~BeizerCurvePortrait();
};

