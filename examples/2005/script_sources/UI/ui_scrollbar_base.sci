include ui_std.sci

const int c_iSliderHeight = 14;
const int c_iSliderWidth = 14;
const int c_iMoveOnClickDist = 27;
const string c_strScrollButtonUp = "scroll_button_up";
const string c_strScrollButtonDown = "scroll_button_down";

task UI_ScrollbarBase
{
	var bool bScrolling, bDisabled, bVertical;
	var int iScrollPos, iMouseMax;
	void init(bool _bVertical) {
		bVertical = _bVertical;
		bScrolling = false;
		bDisabled = false;
		iScrollPos = 0;
		@SetOwnerDraw(true);
		int iWndXSize, iWndYSize;
		@GetWindowSize(iWndXSize, iWndYSize);
		
		if (bVertical) {
			iMouseMax = iWndYSize - c_iSliderHeight;
		}
		else { 
			iMouseMax = iWndXSize - c_iSliderWidth;
		}
		
		@ProcessEvents();
	}
	
	void OnMouseWheel(int x, int y, float fDelta) {
		@SendToParent();
	}	
	
	void OnDraw() 
	{
		if (bDisabled)
			return;
			
		if (bScrolling) { 
			@Blit("slider_pressed", bVertical ? 0 : iScrollPos, bVertical ? iScrollPos : 0);
		}
		else
			@Blit("slider", bVertical ? 0 : iScrollPos, bVertical ? iScrollPos : 0);
	}

	void ReportToParent()
	{	
		int iMessage = iScrollPos * 100 / iMouseMax;
		@SendMessageToParent(iMessage);
	}

	
	void OnLButtonDown(int x, int y)
	{
		if (bDisabled)
			return;
	
		if (HitTest(x, y)) {
			@CaptureMouse();
			bScrolling = true;
			return;
		}
		
		int iPos = bVertical ? y : x;
		if (iPos < 0)
			iPos = 0;
		else 
		if (iPos > iMouseMax)
			iPos = iMouseMax;
		
		if (iPos > iScrollPos) {
			int iDiff = iPos - iScrollPos;
			iDiff = iDiff * 100 / iMouseMax;
			if (iDiff < c_iMoveOnClickDist)
				iScrollPos = iPos;
			else
				iScrollPos += c_iMoveOnClickDist * iMouseMax / 100;
		}
		else {
			int iDiff = iScrollPos - iPos;
			iDiff = iDiff * 100 / iMouseMax;
			if (iDiff < c_iMoveOnClickDist)
				iScrollPos = iPos;
			else
				iScrollPos -= c_iMoveOnClickDist * iMouseMax / 100;
		}
		ReportToParent();
	}
	
	void OnLButtonUp(int x, int y)
	{
		if (bDisabled)
			return;
	
		bScrolling = false;
		@ReleaseMouse();
	}	
	
	void OnMessage(int iMessage, string strSender, object data) 
	{
		if (strSender == c_strScrollButtonUp) {
			iScrollPos -= c_iMoveOnClickDist * iMouseMax / 100;
			if (iScrollPos < 0)
				iScrollPos = 0;
			ReportToParent();
		}
		else
		if (strSender == c_strScrollButtonDown) {
			iScrollPos += c_iMoveOnClickDist * iMouseMax / 100;
			if (iScrollPos > iMouseMax)
				iScrollPos = iMouseMax;
			ReportToParent();
		}
		else {
			if (c_iScrollDisabled & iMessage)
				bDisabled = true;
			else
				bDisabled = false;
			iScrollPos = (c_iScrollMask & iMessage) * iMouseMax / 100;
			//ReportToParent();
		}
	}
	
	void OnMouseMove(int x, int y) {
		if (bDisabled)
			return;
	
		if (bScrolling) {
			int iMessage = bVertical ? y : x;
			if (iMessage < 0)
				iMessage = 0;
			else
			if (iMessage > iMouseMax)
				iMessage = iMouseMax;
				
			iScrollPos = iMessage;
			ReportToParent();
		}	
		
	}
	
	bool HitTest(int x, int y) {
		if (bVertical) {
			if (y >= iScrollPos && y <= iScrollPos + c_iSliderHeight)
				return true;
			return false;
		}
		
		if (x >= iScrollPos && x <= iScrollPos + c_iSliderWidth)
			return true;
		return false;		
	}
}
