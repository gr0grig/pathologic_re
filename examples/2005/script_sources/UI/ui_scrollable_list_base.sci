include ui_std.sci

task UI_ScrollableListBase
{
	var int iVOffset;
	var int iWndXSize, iWndYSize, iWndX, iWndY;
	
	void init(void) {
		@GetWindowSize(iWndXSize, iWndYSize);
		iWndX = 0; iWndY = 0;
		@ClientToScreen(iWndX, iWndY);
		iVOffset = 0;
		@EnableClipping(true);
		@SetOwnerDraw(true);
		UpdateScroll();
		@ProcessEvents();
	}
	
	void OnDraw() { 
		int iCount = GetItemCount();
		int iHeight = GetItemHeight();
		for (int i = 0; i < iCount; ++i) {
			int y = i * iHeight + iVOffset;
			DrawItem(i, 0, y);
		}
	}
	
	void OnMessage(int iMessage, string strSender, object data) {
		if (strSender == GetScrollbarName()) {
			iVOffset = -iMessage * (GetTotalHeight() - iWndYSize) / 100;
		}
	}
	
	void OnMouseWheel(int x, int y, float fDelta) {
		int iDelta = fDelta * GetItemHeight() / 2;
		iVOffset += iDelta;
		UpdateScroll();
	}	
	
	void OnLButtonDown(int x, int y) {
		int iItem = GetItem(x, y);
		if (iItem != -1) {
			OnItemLButtonDown(iItem, x , y);
		}
	}
	
	void OnLButtonUp(int x, int y) {
		int iItem = GetItem(x, y);
		if (iItem != -1) {
			OnItemLButtonUp(iItem, x , y);
		}		
	}
	
	void OnRButtonDown(int x, int y) {
		int iItem = GetItem(x, y);
		if (iItem != -1) {
			OnItemRButtonDown(iItem, x , y);
		}
	}
	
	void OnRButtonUp(int x, int y) {
		int iItem = GetItem(x, y);
		if (iItem != -1) {
			OnItemRButtonUp(iItem, x , y);
		}		
	}		
	
	int GetItem(int x, int y) {
		int yreal = y - iVOffset;
		int iItemHeight = GetItemHeight();
		int iButton = yreal / iItemHeight;
		if (iButton >= GetItemCount())
			return -1;
		return iButton;
	}
	
	int GetTotalHeight() {
		return GetItemCount() * GetItemHeight();
	}
	
	void UpdateScroll() {
		int iScrollMax = GetTotalHeight() - iWndYSize;
		if (iScrollMax < 0)
			iScrollMax = 0;

		if ((-iVOffset) > iScrollMax)
			iVOffset = -iScrollMax;
		else if (iVOffset > 0)
			iVOffset = 0;
			
		if (iScrollMax == 0) {
			@SendMessage(c_iScrollDisabled, GetScrollbarName());
		}
		else {
			@SendMessage(-iVOffset * 100 / iScrollMax, GetScrollbarName());
		}
	}	
	
	// ABSTRCT
	// int GetItemCount() = 0;
	// int GetItemHeight() = 0;
	// void OnItemLButtonDown(int iItem, int x, int y) = 0;
	// void OnItemLButtonUp(int iItem, int x, int y) = 0;
	// void OnItemRButtonDown(int iItem, int x, int y) = 0;
	// void OnItemRButtonUp(int iItem, int x, int y) = 0;
	// string GetScrollbarName(void) = 0;
	// void DrawItem(int iItem, int x, int y) = 0;
}
