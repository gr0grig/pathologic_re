include ui_events.sci
include ui_tooltip_base.sci
include citymanager_base.sci

const string c_strLocatorPrefix = "pt_gmap_";

const float c_fMaxZoom = 2.0;
const float c_fScaleStep = 1.4;
const float c_fWheelScaleStep = 1.1;
const float c_fYSpeed = 0.4, c_fXSpeed = 0.4;

const int c_iMarkTypeQuest = 0;
const int c_iMarkTypeMainQuest = 1;
const int c_iMarkTypeVolonteer = 2;
const int c_iMarkTypeInfo = 3;

const int c_iTooltipDist = 30;

var float g_fMinZoom;
var float g_fDefaultZoom;

Vector GetLocatorPos(string strLocator) {
	Vector vLocPos, vLocDir; object scene, map; bool bFound;
	@GetMainOutdoorScene(scene);
	if (scene == null) {
		@Trace("Can't find main outdoor scene");
		vLocPos = [0, 0, 0];
		return vLocPos;
	}
	scene->GetLocator(strLocator, bFound, vLocPos, vLocDir);
	return vLocPos;
}

bool IsRegionMapEnabled() {
	int iDay = GetDay();
	int iVal;
	@GetVariable("RMap" + iDay, iVal);
	return (iVal != 0);
}

maintask UI_Map
{
	var int iBull;
	var int iXMapSize, iYMapSize, iXWndSize, iYWndSize;
	var int iMouseX, iMouseY, iStartDragX, iStartDragY, iStartPosX, iStartPosY;
	var int iHighlight;
	var float fXPos, fYPos, fZoom;
	var bool bDrag, bMouseLeave, bIndoor, bToMapMode, m_bChertezPrepared;
	var object Tooltips, scene, map, highlight, poly;
	var Vector vPlayerPos;
	var string strChertezImage;

	bool IsBull(void)
	{
		if ((iBull == 2) && (GetDay() >= 8))
			return true;
		return false;
	}
	
	void init(void) {
		@GetMap(map);
		if (map == null) {
			@Trace("Map not found");
			return;
		}
		
		@CreatePolyImage(poly, 16, 16, "ui/ui_player.png");
		
		float x, y;
		map->GetSize(iXMapSize, iYMapSize);
		map->GetMapParams(x, y, fZoom);
		map->ConvertToMapCoordinates(x, y);
		fXPos = x;	fYPos = y;
		
		bMouseLeave = true;
		@GetWindowSize(iXWndSize, iYWndSize);
		g_fMinZoom = iXWndSize / 2048.0;
		g_fDefaultZoom = g_fMinZoom;
		
		m_bChertezPrepared = false;
		if (fZoom < 0) {
			bToMapMode = true;
			PrepareChertez();
			fZoom = 2;
		}
		
		int iVal;
		@GetVariable("map_chertez_force", iVal);
		if (iVal) {
			bToMapMode = true;
			@SetVariable("map_chertez_force", 0);
		}

			
		iBull = 0;
		
		
		iMouseX = -1; iMouseY = -1;
		bDrag = false;
		
		highlight = null;
		iHighlight = -1;
		
		@CreateObjectVector(Tooltips);
		
		object oscene;
		@GetMainOutdoorScene(oscene);
		@GetActiveScene(scene);
		if (oscene != scene) {
			bIndoor = true;
			string strName;
			scene->GetName(strName);
			vPlayerPos = GetLocatorPos(c_strLocatorPrefix + strName);
			int x = vPlayerPos.x;
			int y = vPlayerPos.z;
			map->ConvertToMapCoordinates(x, y);
			vPlayerPos.x = x;
			vPlayerPos.z = y;
			@Trace("indoor map: " + c_strLocatorPrefix + strName);
		}
		else {
			@Trace("outdoor map");
			bIndoor = false;
			int x,y;
			@GetPlayerMapPos(x, y);
			vPlayerPos.x = x;
			vPlayerPos.z = y;
		}
		
		InitRegions();
		
		@ShowCursor();
		@SetCursor("default");
		@SetOwnerDraw(true);
		@SetNeedUpdate(true);
		@SetBackground("default");
		@EnableClipping(true);
		@CaptureKeyboard();
		@PlaySound("map_open");
		@ProcessEvents();
	}
	
	void PrepareChertez(void) {
		if (m_bChertezPrepared)
			return;
			
		int iVal;
		@GetVariable("map_chertez_state", iVal);
		if (GetPlayer() == c_iBranchDanko) {
			strChertezImage = "ui\\ui_chertez_danko_bg.tex";
			if (iVal >= 1 && iVal <= 6) {
				strChertezImage = "ui\\ui_chertez_danko_" + iVal + ".tex";
			}
		}
		else
		if (GetPlayer() == c_iBranchBurah) {
			strChertezImage = "ui\\ui_chertez_burah_bg.tex";
			if (iVal >= 1 && iVal <= 6) {
				strChertezImage = "ui\\ui_chertez_burah_" + iVal + ".tex";
			}
		}
		else {
			strChertezImage = "ui\\ui_chertez_klara_bg.tex";
			if (iVal >= 1 && iVal <= 6) {
				strChertezImage = "ui\\ui_chertez_klara_" + iVal + ".tex";
			}
		}
		
		@LoadImage(strChertezImage);
		m_bChertezPrepared = true;
	}
	
	void InitRegions() {
		for (int iRegion = 0; iRegion < c_iRegionCount; ++iRegion) {
			if (IsRegionNormal(iRegion)) { 
				@SetRegionColor(iRegion, 0.5, 0.5, 0.5, 0.0);
			}
			else
			if (IsRegionDiseased(iRegion)) {
				@SetRegionColor(iRegion, 0.5, 0.0, 0.0, 0.5);
			}
			else 
			if (IsRegionClosed(iRegion)) {
				@SetRegionColor(iRegion, 0.0, 0.0, 0.0, 0.5);
			}
		}
	}

	int ScreenToMapX(int x) 
	{
		return fXPos + (x - iXWndSize / 2) / fZoom;
	}
	
	int ScreenToMapY(int y) 
	{
		return fYPos + (y - (iYWndSize / 2)) / fZoom;
	}
	
	int MapToScreenX(int x) 
	{
		return (x - fXPos) * fZoom + iXWndSize / 2;
	}
	
	int MapToScreenY(int y) 
	{
		return (y - fYPos) * fZoom + iYWndSize / 2;
	}	
	
	void OnUpdate(float fDeltaTime) 
	{
		int iLeft = fXPos - iXWndSize / fZoom / 2;
		int iRight = fXPos + iXWndSize / fZoom / 2;
		int iTop = fYPos - iYWndSize / fZoom / 2;
		int iBottom = fYPos + iYWndSize / fZoom / 2;
		
		int xerror = 0, yerror = 0;
		if (iLeft < 0)
			xerror = -iLeft;
		else
		if (iRight > 2048)
			xerror = 2048 - iRight;

		if (iTop < 0)
			yerror = -iTop;
		else
		if (iBottom > 2048)
			yerror = 2048 - iBottom;
			
		fXPos += xerror;
		fYPos += yerror;	
		
		if (!IsBull() && !bToMapMode) {
			// setting tooltip
			Tooltips->clear();
			
			float x, y;
			int iMarkCount, iSize = 0;	
			map->GetMarkCount(iMarkCount);
			for (int i = 0; i < iMarkCount; ++i) {
				object mark;
				map->GetMark(i, mark);
				string strLocator;
				mark->GetLocator(strLocator);
				
				Vector vPos = GetLocatorPos(strLocator);
				
				x = vPos.x; y = vPos.z;
				map->ConvertToMapCoordinates(x, y);
				x = MapToScreenX(x); y = MapToScreenY(y);
				
				if (((x - iMouseX) * (x - iMouseX) + (y - iMouseY) * (y - iMouseY)) < c_iTooltipDist * c_iTooltipDist) {
					Tooltips->add(mark); 
					iSize++;
				}
			}		
			
			if (!iSize) { // checking for map tooltip
				int iIndex, iID;
				int x = ScreenToMapX(iMouseX);
				int y = ScreenToMapY(iMouseY);
				map->GetObjectFromPoint(iIndex, x, y);
				if (iIndex >= 0) {
					map->GetObjectID(iID, iIndex);
					string strText;
					@GetStringByID(strText, iID + 100000);			
					@SetTooltip(c_iTooltipMapObject, strText);
					if (iHighlight != iIndex) { 
						map->CreateObjectHighlight(highlight, iIndex);
						iHighlight = iIndex;
					}
				}
				else {
					@SetTooltip(c_iTooltipNone, "");
					highlight = null;
					iHighlight = -1;
				}
			}
			else {
				@SetTooltip(c_iTooltipMapMarkObject, "", Tooltips);
				highlight = null;
				iHighlight = -1;
			}
		}
		else {
			@SetTooltip(c_iTooltipNone, "");
			iHighlight = -1;
			highlight = null;
		}
	}
	
	void DrawMarks(object map, int _iType)
	{
		///////////////////////////////////////////////////////	
		// drawing marks
		float x, y;
		int iMarkCount;	
		map->GetMarkCount(iMarkCount);
		for (int i = 0; i < iMarkCount; ++i) {
			object mark;
			map->GetMark(i, mark);
			string strLocator;
			mark->GetLocator(strLocator);
			int iType;
			mark->GetType(iType);
			
			Vector vPos = GetLocatorPos(strLocator);
			
			x = vPos.x; y = vPos.z;
			map->ConvertToMapCoordinates(x, y);
			x = MapToScreenX(x); y = MapToScreenY(y);
			
			if (iType == _iType) {
				if (iType == c_iMarkTypeQuest)
					@Blit("quest_mark" , x - 16, y - 16);

				if (iType == c_iMarkTypeMainQuest)
					@Blit("mainquest_mark" , x - 16, y  - 16);
					
				if (iType == c_iMarkTypeInfo)
					@Blit("info_mark" , x - 16, y  - 16);
			}
		}	
	}
	
	void DrawMap(void) {
		if (IsBull())
			return;
			
		float fCorrectedZoom = fZoom;
		if (fCorrectedZoom < g_fMinZoom) {
			fCorrectedZoom = g_fMinZoom;
		}
			
		int iLeft = fXPos - iXWndSize / fCorrectedZoom / 2;
		int iRight = fXPos + iXWndSize / fCorrectedZoom / 2;
		int iTop = fYPos - iYWndSize / fCorrectedZoom / 2;
		int iBottom = fYPos + iYWndSize / fCorrectedZoom / 2;
		
		///////////////////////////////////////////////////////	
		// drawing map
		int xoffset = 0, yoffset = 0;
		@ClientToScreen(xoffset, yoffset);
		@RenderMap(xoffset, yoffset, iXWndSize + xoffset, iYWndSize + yoffset, iLeft, iTop, iRight, iBottom);
		
		if (IsRegionMapEnabled()) {
			@RenderRegions(xoffset, yoffset, iXWndSize + xoffset, iYWndSize + yoffset, iLeft, iTop, iRight, iBottom);
		}
		
		if (highlight)
			highlight->Render(xoffset, yoffset, iXWndSize + xoffset, iYWndSize + yoffset, iLeft, iTop, iRight, iBottom);
		
		DrawMarks(map, c_iMarkTypeInfo);
		DrawMarks(map, c_iMarkTypeQuest);
		DrawMarks(map, c_iMarkTypeMainQuest);

		DrawPlayer();
	}
	
	void DrawChertez(void) {
		int x,y;
		x = 0; y = 0;
		@ScreenToClient(x, y);
		int xsize, ysize;
		@GetScreenSize(xsize, ysize);
		float fScaleY = ysize / 768.0;
		@StretchBlit(strChertezImage, x, y, xsize, fScaleY * 1024, 1);
	}
	
	void OnDraw() {
		if (bToMapMode) {
			DrawChertez();
		}
		else {
			DrawMap();
		}
	}
	
	void DrawPlayer() {
		int x,y;
		
		if (!bIndoor) {
			float fAngle;
			@GetPlayerMapAngle(fAngle);
			x = MapToScreenX(vPlayerPos.x);
			y = MapToScreenY(vPlayerPos.z);
			@ClientToScreen(x, y);
			poly->Blit(x,y, fAngle);
		}
		else {
			x = MapToScreenX(vPlayerPos.x);
			y = MapToScreenY(vPlayerPos.z);
			@ClientToScreen(x, y);
			poly->Blit(x,y);
		}
	}
	
	void OnDragBegin(int x, int y) {
		if (IsBull() || bToMapMode)
			return;
	
		bDrag = true;
		iStartDragX = x; iStartDragY = y;
		iStartPosX = fXPos; iStartPosY = fYPos;
		@SetCursor("drag");
	}
	
	void OnDragEnd(int x, int y, bool bWasAccepted) {
		bDrag = false;
		@SetCursor("default");
	}	
	
	void OnMouseMove(int x, int y) {
		iMouseX = x;
		iMouseY = y;
		bMouseLeave = false;

		if (bDrag) {
			fXPos = iStartPosX + (iStartDragX - x) / fZoom;
			fYPos = iStartPosY + (iStartDragY - y) / fZoom;
		}
	}
	
	void OnMouseLeave() {
		bMouseLeave = true;
	}
	
	void OnMouseWheel(int x, int y, float fDelta) {
		if (bToMapMode)
			return;
		
		if (fDelta > 0) {
			for (int i = 0; i < fDelta; ++i)
				ZoomIn(c_fWheelScaleStep);
		}
		else {
			for (int i = 0; i < -fDelta; ++i)
				ZoomOut(c_fWheelScaleStep);
		}
	}	
	
	void ZoomIn(float fScale) {
		if (bToMapMode)
			return;
			
		fZoom *= fScale;	
		if (fZoom > c_fMaxZoom)
			fZoom = c_fMaxZoom;
		iBull--;
		if (iBull < 0)
			iBull = 0;
	}
	
	void ZoomOut(float fScale) {
		if (bToMapMode)
			return;
	
		fZoom /= fScale;	
		if (fZoom < g_fMinZoom) {
			fZoom = g_fMinZoom;	
			iBull++;
			if (iBull > 2)
				iBull = 2;
		}
	}
	
	
	void OnMessage(int iMessage, string strSender, object data) {
		if (strSender == "button_plus") {
			ZoomIn(c_fScaleStep);
		}
		else	
		if (strSender == "button_minus") {
			ZoomOut(c_fScaleStep);
		}
		else
		if (strSender == "tavro") {
			bToMapMode = (iMessage == 0); // inverting
			@SendMessage(bToMapMode ? 1 : 0, "tavro");
			if (bToMapMode)
				PrepareChertez();
		}

	}
	
	void OnKeyDown(int iKey)
	{
		if (iKey == 107) { // 6bh - VK_ADD
			ZoomIn(c_fScaleStep);
			return;
		}
		
		if (iKey == 109) { // 6dh - VK_SUBTRACT 
			ZoomOut(c_fScaleStep);
			return;
		}
		
		int x = fXPos, y  = fYPos;
		map->ConvertToWorldCoordinates(x, y);
		map->SetMapParams(x, y, fZoom);
		@DestroyWindow();
	}
}