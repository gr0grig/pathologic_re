include ui_events.sci
include ui_std.sci
include ui_keys.sci
include ui_tooltip_base.sci


bool filterChar(int c) {
	bool bHas;
	@FontHasCharacterGlyph(bHas, "default", c);
	return !bHas;
}

maintask UI_Editbox
{
	var string strText;
	var int iCursorPos, iWindowSizeX, iWindowSizeY, iCursorRealPos;
	var float fAngle;
	var bool bFocus;
	
	void init(void) {
		@GetWindowSize(iWindowSizeX, iWindowSizeY);
		bFocus = false;
		MoveCursorToEnd();
		@SetBackground("default");
		@SetNeedUpdate(true);
		@SetOwnerDraw(true);
		@EnableClipping();
		@ProcessEvents();
	}
	
	void MoveCursorToEnd() {
		@_strlen(iCursorPos, strText);
	}
	
	void MoveCursorToBegin() {
		iCursorPos = 0;
	}	
	
	void MoveCursorLeft() {
		iCursorPos--;
		if (iCursorPos < 0)
			iCursorPos = 0;
	}
	
	void MoveCursorRight() {
		iCursorPos++;
		int iMax;
		@_strlen(iMax, strText);
		if (iCursorPos > iMax)
			iCursorPos = iMax;
	}	
	
	void AddChar(int iChar) {
		if (filterChar(iChar))
			return;
			
		string strChar = (cstring)iChar;
		string strLeft, strRight;
		@_strsub(strLeft, strText, 0, iCursorPos);
		@_strsub(strRight, strText, iCursorPos);
		strLeft += strChar;
		strText = strLeft + strRight;
		iCursorPos++;	
	}
	
	void DeleteChar() {
		if (iCursorPos == 0)
			return;
			
		string strLeft, strRight;
		@_strsub(strLeft, strText, 0, iCursorPos - 1);
		@_strsub(strRight, strText, iCursorPos);
		strText = strLeft + strRight;
		iCursorPos--;	
	}
	
	void OnDraw() {
		int iWidth;
		@GetTextWidth(iWidth, "default", strText, iCursorPos);
		
		int iOffset;
		if (iWidth > iWindowSizeX - 1)
			iOffset = iWidth - iWindowSizeX + 1;
		else
			iOffset = 0;
			
		@Print("default", -iOffset, 0, strText);
		
		if (sin(fAngle) > 0.5 && bFocus)
			@Blit("text_cursor", iWidth - iOffset, 0);
	}
	
	void OnUpdate(float fDeltaTime) {
		fAngle += fDeltaTime * 3.1415;
		if (fAngle > 3.1415)
			fAngle -= 3.1415;
	}
	
	void OnChar(int iChar) {
		if (iChar == VK_BACK)
			return;
			
		if (iChar == VK_RETURN) {
			object str;
			@CreateStringVector(str);
			str->add(strText);
			@SendMessageToParent(0, str);
			return;
		}
			
		AddChar(iChar);
	}
	
	void OnKeyDown(int iCode) {
 		if (iCode == VK_LEFT) {
 			MoveCursorLeft();
 		}
 		else
 		if (iCode == VK_RIGHT) {
 			MoveCursorRight();
 		}
 		else 
 		if (iCode == VK_END) {
 			MoveCursorToEnd();
 		}
 		else
 		if (iCode == VK_HOME) {
 			MoveCursorToBegin();
 		}
 		else
 		if (iCode == VK_BACK) {
 			DeleteChar();
 		}
	}
	
	void OnLButtonDown(int x, int y)
	{
		if (!bFocus) {
			@CaptureKeyboard();
		}
		bFocus = true;
	}
}
