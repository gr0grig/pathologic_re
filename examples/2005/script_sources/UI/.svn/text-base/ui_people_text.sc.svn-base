include ui_std.sci
include ui_text_res.sci
include ../volonteers_base_ext.sci
include ../game_ext.sci

const float fColR = 1.0;
const float fColG = 1.0;
const float fColB = 1.0;

const float c_fNameColR = 153.0 / 255.0;
const float c_fNameColG = 153.0 / 255.0;
const float c_fNameColB = 153.0 / 255.0;

const int c_iSpacing = 15;
const int c_iChildSpacing = 10;
const int c_iMargin = 20;

const int c_iImageHeight = 140;

const string c_strFont = "default";
const string c_strNameFont = "name";

maintask UI_PeopleText
{
	var bool bScroll;
	var int iScrollPos, iScrollMax;
	var int iWndXSize, iWndYSize;
	var	object volonteers;


	void init(void) {
		iScrollPos = 0;
		
		@GetWindowSize(iWndXSize, iWndYSize);
		@EnableClipping(true);
		@SetOwnerDraw(true);
		
		InitVolonteers();
		
		@ProcessEvents();
	}
	
	void InitVolonteers()
	{
		@CreateIntVector(volonteers);
		if (GetPlayer() == c_iBranchBurah) {
			FillTermitsVector(volonteers, false, c_iBranchBurah);
		}
		else
		if (GetPlayer() == c_iBranchDanko) {
			FillUtopistsVector(volonteers, false, c_iBranchDanko);
		}
		else {
			FillSmirenniksVector(volonteers, false, c_iBranchKlara);
		}
		
		int iSize;
		volonteers->size(iSize);
		for (int i = 0; i < iSize; ++i) {
			int iVol;
			volonteers->get(iVol, i);
			if (IsLockedVolonteer(iVol)) {
				@LoadImage(GetNPCPhotoByID(iVol));
			}
			else
			if (IsRescueVolonteer(iVol)) {
				@LoadImage(GetNPCPhotoByID(iVol));
			}
		}
		
	}
	
	void OnDraw() {
		
		int iTextHeight = 0;
		string strText;
		@GetStringByID(strText, c_iTID_GameVol);
		@GetTextHeightInWidth(iTextHeight, c_strFont, iWndXSize, strText);
	
		int iHeight = DrawVolonteers(iScrollPos + iTextHeight);
		iHeight = DrawSavers(iHeight);

		if (iScrollPos + iTextHeight < iHeight)
			@PrintInWidth(iTextHeight, c_strFont, 0, iScrollPos, iWndXSize, strText, fColR, fColG, fColB);
		
		iScrollMax = iHeight - iScrollPos - iWndYSize;
		if (iScrollMax < 0)
			iScrollMax = 0;
	}
	
	int DrawVolonteers(int iVerOffset) {
		int iHeight = iVerOffset + c_iSpacing;
		
		int iTextHeight;
		
		bool bEmpty = true;
		int iSize;
		volonteers->size(iSize);
		for (int i = 0; i < iSize; ++i) {
			int iVol;
			volonteers->get(iVol, i);
			if (IsLockedVolonteer(iVol)) {
				bEmpty = false;
				@Blit(GetNPCPhotoByID(iVol), 0, iHeight);
				
				int iTextID = GetNPCNameByID(iVol);
				string strText;
				@GetStringByID(strText, iTextID);
				int iTextHeight;
				@GetTextHeightInWidth(iTextHeight, c_strNameFont, 2 * iWndXSize / 5, strText);
				@PrintInWidth(iTextHeight, c_strNameFont, 3 * iWndXSize / 5, iHeight + c_iImageHeight - iTextHeight, 2 * iWndXSize / 5, strText, c_fNameColR, c_fNameColG, c_fNameColB);
				
				if (iTextHeight > c_iImageHeight)
					iHeight += iTextHeight;
				else
					iHeight += c_iImageHeight;
			}
		}

		if (bEmpty)	{
			return iVerOffset;
		}
		
		string strText;
		@GetStringByID(strText, c_iTID_TodayVol);
		
		@PrintInWidth(iTextHeight, c_strFont, 0, iHeight, iWndXSize, strText, fColR, fColG, fColB);
		iHeight += iTextHeight + c_iSpacing / 2;
		@StretchBlit("separator", 0, iHeight, iWndXSize, 1);
		return iHeight + c_iSpacing / 2;;
	}
	
	int DrawSavers(int iVerOffset) {
		int iHeight = iVerOffset;
		
		int iTextHeight;
		
		int iSize;
		volonteers->size(iSize);
		bool bEmpty = true;
		for (int i = 0; i < iSize; ++i) {
			int iVol;
			volonteers->get(iVol, i);
			if (IsRescueVolonteer(iVol)) {
				bEmpty = false;
				@Blit(GetNPCPhotoByID(iVol), 0, iHeight);
				
				if (IsDiseasedVolonteer(iVol)) {
					@Blit("birdmask", 0, iHeight);
				}
				
				int iTextID = GetNPCNameByID(iVol);
				string strText;
				@GetStringByID(strText, iTextID);
				int iTextHeight;
				@GetTextHeightInWidth(iTextHeight, c_strNameFont, 2 * iWndXSize / 5, strText);
				@PrintInWidth(iTextHeight, c_strNameFont, 3 * iWndXSize / 5, iHeight + c_iImageHeight - iTextHeight - c_iSpacing, 2 * iWndXSize / 5, strText, c_fNameColR, c_fNameColG, c_fNameColB);
				
				iHeight += c_iImageHeight;
			}
		}

		if (bEmpty)	{
			return iVerOffset;
		}
		
		return iHeight;
	}
	
	void OnMouseWheel(int x, int y, float fDelta) {
		int iDelta = fDelta * c_iImageHeight / 2;
		iScrollPos += iDelta;
		UpdateScroll();
	}
	
	void UpdateScroll() {
		if (iScrollMax < 0)
			iScrollMax = 0;

		if ((-iScrollPos) > iScrollMax)
			iScrollPos = -iScrollMax;
		else if (iScrollPos > 0)
			iScrollPos = 0;
			
		if (iScrollMax == 0) {
			@SendMessage(c_iScrollDisabled, "scrollbar");
		}
		else {
			@SendMessage(-iScrollPos * 100 / iScrollMax, "scrollbar");
		}
	}		
	
	
	void OnMessage(int iMessage, string strSender, object data) {
		if (strSender == "scrollbar") {
			iScrollPos = -iScrollMax * iMessage / 100;
			return;
		}
	}
}
