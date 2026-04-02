include ui_std.sci
include ui_text_res.sci

const int c_iImageWidth = 120;
const int c_iImageHeight = 90;
const int c_iImageSpacing = 15;
const int c_iTextToImageOffsetX = 9;

const int c_iText1ToImageOffsetY = 7;
const int c_iText2ToImageOffsetY = 28;
const int c_iText3ToImageOffsetY = 47;
const int c_iButtonImageOffsetY = 67;
const int c_iButtonWidth = 104;
const int c_iButtonHeight = 24;

const int c_iButtonDelImageOffsetX = 128;
const int c_iButtonDelImageOffsetY = 68;
const int c_iButtonDelWidth = 20;
const int c_iButtonDelHeight = 23;


const float fT1ColR = 142.0 / 255.0;
const float fT1ColG = 142.0 / 255.0;
const float fT1ColB = 142.0 / 255.0;

const float fT2ColR = 255.0 / 255.0;
const float fT2ColG = 255.0 / 255.0;
const float fT2ColB = 255.0 / 255.0;

const float fT3ColR = 142.0 / 255.0;
const float fT3ColG = 142.0 / 255.0;
const float fT3ColB = 142.0 / 255.0;

string GetSaveGameTimeString(object desc)
{
	string out;
	float fGameTime;
	desc->GetGameTime(fGameTime);
	int iGDay = fGameTime / 24;
	int iGHour = fGameTime - iGDay * 24;
	int iGMin = (fGameTime - iGDay * 24 - iGHour) * 60;
	@format(out, GetStringByID(c_TID_SaveGameTimeFormat), iGDay + 1, iGHour, iGMin);
	return out;
}

string GetSaveTimeString(object desc)
{
	string out;
	int iSec, iMin, iHour, iDay, iMonth;
	desc->GetSaveTime(iSec, iMin, iHour, iMonth, iDay);
	@format(out, GetStringByID(c_TID_SaveTimeFormat), iDay, GetStringByID(c_iTID_Save_Jan + iMonth), iHour, iMin, iSec);
	return out;
}


task UI_LoadSaveBase
{
	var bool m_bSave;
	var int iVOffset, iPressed, iPressedX;
	var int iWndXSize, iWndYSize, iWndX, iWndY;
	var object enum, descs, wndBorder;
	void init(bool bSave) {
		iPressed = -1;
		iPressedX = -1;
		
		m_bSave = bSave;
		
		@CreateSaveEnumerator(enum);
		if (!enum)
			return;
		@CreateObjectVector(descs);
		if (bSave) {
			object new = null;
			descs->add(new);
		}
			
		while (1) {
			object desc;
			enum->Next(desc);
			if (!desc)
				break;
				
			if (bSave) {
				bool bQuick;
				desc->IsQuickSave(bQuick);
				if (bQuick)
					continue;
			}
			descs->add(desc);
		}
			
		@GetWindowSize(iWndXSize, iWndYSize);
		iWndX = 0; iWndY = 0;
		@ClientToScreen(iWndX, iWndY);
		iVOffset = 0;
		@EnableClipping(true);
		@SetOwnerDraw(true);
		@CreateWindow("sys_border.xml", false, wndBorder);
		UpdateScroll();
		@ProcessEvents();
	}
	
	void OnDraw() {
		DrawSaves(DrawQSaves(iVOffset));
	}
	
	int DrawQSaves(int iOffset) {
		return iOffset;
	}
	
	void DrawSaves(int iOffset) {
		int iSize;
		descs->size(iSize);
		for (int i = 0; i < iSize; ++i) {
			object desc;
			descs->get(desc, i);
			
			int x = 0, y = iOffset;
			@ClientToScreen(x, y);
		
			if (desc) {
				desc->BlitClipped(x, y, iWndX, iWndY, iWndXSize, iWndYSize);
				DrawScreenshotBorder(0, iOffset, false);
			
				// printing text
				bool bQuick;
				desc->IsQuickSave(bQuick);
				if (bQuick) {
					@Print("default", c_iTextToImageOffsetX + c_iImageWidth, c_iText1ToImageOffsetY + iOffset, GetStringByID(c_TID_QSave), fT1ColR, fT1ColG, fT1ColB); 
				}
				else {
					string name;
					bool bFound;
					int iNameId;
					desc->GetProperty(0, bFound, iNameId);
					if (bFound)
						name = GetStringByID(500 + iNameId);
					else
						name = "????";
					@Print("default", c_iTextToImageOffsetX + c_iImageWidth, c_iText1ToImageOffsetY + iOffset, name, fT1ColR, fT1ColG, fT1ColB); 
				}
				
				string out;
				out = GetSaveGameTimeString(desc);
				@Print("big", c_iTextToImageOffsetX + c_iImageWidth, c_iText2ToImageOffsetY + iOffset, out, fT2ColR, fT2ColG, fT2ColB); 
				
				out = GetSaveTimeString(desc);
				@Print("default", c_iTextToImageOffsetX + c_iImageWidth, c_iText3ToImageOffsetY + iOffset, out, fT3ColR, fT3ColG, fT3ColB); 
				
				if (m_bSave) {
					if (iPressedX == i)
						@Blit("button_x_pressed", c_iButtonDelImageOffsetX + c_iImageWidth, c_iButtonDelImageOffsetY + iOffset);
					else
						@Blit("button_x", c_iButtonDelImageOffsetX + c_iImageWidth, c_iButtonDelImageOffsetY + iOffset);
				}
				
			}
			else {
				DrawScreenshotBorder(0, iOffset, true);
				@Print("default", c_iTextToImageOffsetX + c_iImageWidth, c_iText3ToImageOffsetY + iOffset, GetStringByID(c_iTID_SaveEmptySlot), fT3ColR, fT3ColG, fT3ColB); 
			}
			
			if (iPressed == i)
				@Blit("button_pressed", c_iTextToImageOffsetX + c_iImageWidth, c_iButtonImageOffsetY + iOffset);
			else
				@Blit("button", c_iTextToImageOffsetX + c_iImageWidth, c_iButtonImageOffsetY + iOffset);
				
			BlitButtonText(desc, c_iTextToImageOffsetX + c_iImageWidth, c_iButtonImageOffsetY + iOffset);
			
			iOffset += c_iImageHeight;
			
			@StretchBlit("separator", 0, iOffset + c_iImageSpacing, iWndXSize, 1);
			iOffset += 2 * c_iImageSpacing + 1;
		}
	}
	
	void DrawScreenshotBorder(int x, int y, bool bFill) {
		if (bFill)
			@StretchBlit("shot_black", x, y, c_iImageWidth, c_iImageHeight);
	
		@StretchBlit("shot_border", x, y, c_iImageWidth, 1);
		@StretchBlit("shot_border", x, y + c_iImageHeight - 1, c_iImageWidth, 1);
		@StretchBlit("shot_border", x, y, 1, c_iImageHeight);
		@StretchBlit("shot_border", x + c_iImageWidth - 1, y, 1, c_iImageHeight);
	}

	void OnMessage(int iMessage, string strSender, object data) {
		if (strSender == "scrollbar") {
			iVOffset = -iMessage * (GetTotalHeight() - iWndYSize) / 100;
			UpdateScroll();
		}
	}
	
	void OnMouseWheel(int x, int y, float fDelta) {
		int iDelta = fDelta * SlotHeight() / 2;
		iVOffset += iDelta;
		UpdateScroll();
	}	
	
	void OnLButtonDown(int x, int y) {
		iPressed = GetButton(x, y);
		iPressedX = GetButtonDel(x, y);
	}
	
	void OnLButtonUp(int x, int y) {
		if (iPressed != -1) {
			iPressed = GetButton(x, y);
			if (iPressed != -1) {
				object desc;
				descs->get(desc, iPressed);
				OnButtonPress(desc);
			}
		}
		else 
		if (m_bSave && (iPressedX != -1)) {
			iPressedX = GetButtonDel(x, y);
			if (iPressedX != -1) {
				object desc;
				descs->get(desc, iPressedX);
				if (desc)
					OnButtonPressDel(desc);
			}
		}		
	}	
	
	int GetButton(int x, int y) {
		if (x < c_iImageWidth + c_iTextToImageOffsetX)
			return -1;
		if (x > c_iImageWidth + c_iTextToImageOffsetX + c_iButtonWidth)
			return -1;
			
		int yreal = y - iVOffset;
		int iSlotHeight = SlotHeight();
		int iButton = yreal / iSlotHeight;
		yreal = yreal - iButton * iSlotHeight;
		
		int iSize;
		descs->size(iSize);
		if (iSize <= iButton)
			return -1;
		
		if (yreal >= c_iButtonImageOffsetY && yreal <= c_iButtonImageOffsetY + c_iButtonHeight)
			return iButton;
		return -1;
	}
	
	int GetButtonDel(int x, int y) {
		if (x < c_iImageWidth + c_iButtonDelImageOffsetX)
			return -1;
		if (x > c_iImageWidth + c_iButtonDelImageOffsetX + c_iButtonDelWidth)
			return -1;
			
		int yreal = y - iVOffset;
		int iSlotHeight = SlotHeight();
		int iButton = yreal / iSlotHeight;
		yreal = yreal - iButton * iSlotHeight;
		
		int iSize;
		descs->size(iSize);
		if (iSize <= iButton)
			return -1;
		
		if (yreal >= c_iButtonDelImageOffsetY && yreal <= c_iButtonDelImageOffsetY + c_iButtonDelHeight)
			return iButton;
		return -1;
	}	
	
	int SlotHeight() {
		return c_iImageHeight + 2 * c_iImageSpacing + 1;
	}
	
	int GetTotalHeight(void) {
		int iSize;
		descs->size(iSize);
		return iSize * SlotHeight();
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
			@SendMessage(c_iScrollDisabled, "scrollbar");
		}
		else {
			@SendMessage(-iVOffset * 100 / iScrollMax, "scrollbar");
		}
	}	
	
	
	// ABSTRCT
	//void BlitButtonText(object desc, int x, int y) = 0;
}
