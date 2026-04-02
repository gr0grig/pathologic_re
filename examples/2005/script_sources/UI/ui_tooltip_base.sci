include ui_item_base.sci
include ui_trade_base.sci

const int c_iTooltipNone = -1;
const int c_iTooltipInvObject = 1;
const int c_iTooltipMapMarkObject = 2;
const int c_iTooltipTradeSell = 3;
const int c_iTooltipTradeBuy = 4;
const int c_iTooltipMapObject = 5;

const int c_iTooltipInvObjectWidth = 250;
const float c_iTooltipInvObjectColR = 165.0/255.0;
const float c_iTooltipInvObjectColG = 165.0/255.0;
const float c_iTooltipInvObjectColB = 165.0/255.0;

const int c_iTooltipMapMarkObjectWidth = 250;
const float c_iTooltipMapMarkObjectColR = 165.0/255.0;
const float c_iTooltipMapMarkObjectColG = 165.0/255.0;
const float c_iTooltipMapMarkObjectColB = 165.0/255.0;

const int c_iTooltipMapObjectWidth = 250;
const float c_iTooltipMapObjectColR = 165.0/255.0;
const float c_iTooltipMapObjectColG = 165.0/255.0;
const float c_iTooltipMapObjectColB = 165.0/255.0;

const int c_iTooltipTradeWidth = 250;
const float c_iTooltipTradeColR = 165.0/255.0;
const float c_iTooltipTradeColG = 165.0/255.0;
const float c_iTooltipTradeColB = 165.0/255.0;

const string c_strTooltipFont = "default";
const string c_strBigTooltipFont = "big";

const int c_iTooltipDurabilityTextID = 7;
const int c_iTooltipUsesTextID = 1006;
// grass combination
const int c_iTooltipImmunityIncTextID = 8;
const int c_iTooltipHealthIncTextID = 9;
const int c_iTooltipTirednessIncTextID = 10;
// organ combination
const int c_iTooltipDiseaseRateTextID = 11;
const int c_iTooltipDiseaseSpeedRateTextID = 12;
const int c_iTooltipHealthIncreaseTextID = 13;
const int c_iTooltipHealthProgressTextID = 14;
const int c_iTooltipTirednessIncreaseTextID = 15;

const int c_iScreenHeight = 600;
const int c_iScreenWidth = 800;

void PrepareTooltip(int iType, string strText, object Object) {
	if (Object) {
		int id = GetItemID(Object);
		string strImage;
		@GetInvItemSprite2(strImage, id);
		@LoadImage(strImage);
	}
}

void DrawTooltip(int iType, string strText, object Object, int cursorx, int cursory, float fAlpha) 
{
	if (iType == c_iTooltipInvObject ) 
		DrawInventoryObjectTooltip(cursorx, cursory, Object, strText, fAlpha);
	else
	if (iType == c_iTooltipMapMarkObject ) 
		DrawMapMarkObjectTooltip(cursorx, cursory, Object, fAlpha);
	else
	if (iType == c_iTooltipTradeSell) 
		DrawTradeTooltip(cursorx, cursory, Object, true, fAlpha);
	else
	if (iType == c_iTooltipTradeBuy) 
		DrawTradeTooltip(cursorx, cursory, Object, false, fAlpha);
	else
	if (iType == c_iTooltipMapObject) {
		DrawMapObjectTooltip(cursorx, cursory, strText, Object, fAlpha);
	}
}

void DrawTooltipBorder(int x, int y, int width, int height, float fAlpha)
{
	@BlitClipped("bg", x, y, x, y, width, height, fAlpha);
	@StretchBlit("border", x, y, width, 1, fAlpha);
	@StretchBlit("border", x, y + height - 1, width, 1, fAlpha);
	
	@StretchBlit("border", x, y, 1, height, fAlpha);
	@StretchBlit("border", x + width - 1, y, 1, height, fAlpha);
}

void DrawTooltipInventoryObjectImage(int x, int y, object item, float fAlpha) 
{
	if (!item)
		return;
		
	int id = GetItemID(item);
	string strImage;
	@GetInvItemSprite2(strImage, id);
	
	@StretchBlit(strImage, x, y, 218, 218, fAlpha);
	
	@StretchBlit("border", x, y, 218, 1, fAlpha);
	@StretchBlit("border", x, y + 218 - 1, 218, 1, fAlpha);
	
	@StretchBlit("border", x, y, 1, 218, fAlpha);
	@StretchBlit("border", x + 218 - 1, y, 1, 218, fAlpha);
}

void DrawInventoryObjectTooltip(int cursorx, int cursory, object item, string strTooltipText, float fAlpha)
{
	if (!item)
		return;
		
	int iItemID = GetItemID(item);
	
	string strText, strDurabilityText, strUsesText;
	bool bHasProperty;
	@HasInvItemProperty(bHasProperty, iItemID, "Description");
	if (bHasProperty) {
		int iID;
		@GetInvItemProperty(iID, iItemID, "Description");
		@GetStringByID(strText, iID);
	}
	else 
		strText = "Error: Item doesnt have description (FIXME!)";

	int iHeight;
	@GetTextHeightInWidth(iHeight, c_strTooltipFont, c_iTooltipInvObjectWidth - 2 * 16, strText);
	
	int iFontHeight;
	@GetFontHeight(iFontHeight, c_strTooltipFont);
	iHeight += iFontHeight;
	
	// durability	
	bool bHasPropertyDurability;
	@HasInvItemProperty(bHasPropertyDurability, iItemID, "HasDurability");
	
	bool bHasDurability;
	item->HasProperty(bHasDurability, "durability");
	if (bHasDurability || bHasPropertyDurability) {
		int iDurability;
		if (bHasDurability)
			item->GetProperty(iDurability, "durability");
		else
			iDurability = 100;
			
		@GetStringByID(strDurabilityText, c_iTooltipDurabilityTextID);	
		strDurabilityText += " " + iDurability + "%";
		int iH;
		@GetTextHeightInWidth(iH, c_strTooltipFont, c_iTooltipInvObjectWidth - 2 * 16, strDurabilityText);
		iHeight += iH;
	}
	
	// uses
	bool bHasPropertyUses;
	@HasInvItemProperty(bHasPropertyUses, iItemID, "HasUses");

	bool bHasUses;
	item->HasProperty(bHasUses, "uses");
	if (bHasUses || bHasPropertyUses) {
		int iUses;
		if (bHasUses)
			item->GetProperty(iUses, "uses");
		else
			iUses = 1;
			
		@GetStringByID(strUsesText, c_iTooltipUsesTextID);	
		strUsesText += " " + iUses;
		int iH;
		@GetTextHeightInWidth(iH, c_strTooltipFont, c_iTooltipInvObjectWidth - 2 * 16, strUsesText);
		iHeight += iH;
	}

	// grass combination
	string strCText;
	bool bCombination = false;
	if (GetItemName(item) == "grass_combination") {
		bCombination = true;
		float fImInc, fHlInc;
		item->GetProperty(fImInc, "im_inc");
		item->GetProperty(fHlInc, "hl_inc");
		
		string strImText, strTrText, strHlText;
		@GetStringByID(strImText, c_iTooltipImmunityIncTextID);	
		@GetStringByID(strHlText, c_iTooltipHealthIncTextID);	
		
		int iVal;
		iVal = fImInc * 100;
		strCText = strImText + " " + iVal + "%\n";
		iVal = fHlInc * 100;
		strCText += strHlText + " " + iVal + "%\n";
		
		int iH;
		@GetTextHeightInWidth(iH, c_strTooltipFont, c_iTooltipInvObjectWidth - 2 * 16, strCText);
		iHeight += iH;		
	}	
	else 
	if (GetItemName(item) == "organ_combination") {
		bCombination = true;
		float fDiseaseRate, fDiseaseSpeedRate, fHealthIncrease, fHealthProgress;
		
		item->GetProperty(fDiseaseRate, "DiseaseRate");
		item->GetProperty(fHealthIncrease, "HealthIncrease");
		
		string strDiseaseRateText, strHealthIncreaseText;
		@GetStringByID(strDiseaseRateText, c_iTooltipDiseaseRateTextID);	
		@GetStringByID(strHealthIncreaseText, c_iTooltipHealthIncreaseTextID);	
		
		int iVal;
		iVal = fDiseaseRate * 100;
		strCText = strDiseaseRateText + " " + iVal + "%\n";
		iVal = fHealthIncrease * 100;
		strCText += strHealthIncreaseText + " " + iVal + "%\n";
		
		int iH;
		@GetTextHeightInWidth(iH, c_strTooltipFont, c_iTooltipInvObjectWidth - 2 * 16, strCText);
		iHeight += iH;		
	}	
	
	
	int xs, ys;
	@GetScreenSize(xs, ys);
	
	iHeight += 16 + 218 + 16 + 16;
	
	int iDrawPosX, iDrawPosY;
	if (xs - cursorx > c_iTooltipInvObjectWidth) {
		iDrawPosX = cursorx;
	}
	else {
		iDrawPosX = cursorx - c_iTooltipInvObjectWidth;
	}
	
	if (cursory > iHeight) {
		iDrawPosY = cursory - iHeight;
	}
	else {
		iDrawPosY = cursory;
		if (iDrawPosY + iHeight > c_iScreenHeight)
			iDrawPosY = c_iScreenHeight - iHeight;
	}
	
	@ScreenToClient(iDrawPosX, iDrawPosY);
	
	DrawTooltipBorder(iDrawPosX, iDrawPosY, 250, iHeight, fAlpha);
	DrawTooltipInventoryObjectImage(iDrawPosX + 16, iDrawPosY + 16, item, fAlpha);
	
	iDrawPosY += 16 + 218 + 16;
	@PrintInWidth(iHeight, c_strTooltipFont, iDrawPosX + 16, iDrawPosY, c_iTooltipMapObjectWidth - 2 * 16, strText, c_iTooltipInvObjectColR, c_iTooltipInvObjectColG ,c_iTooltipInvObjectColB, fAlpha);
	iDrawPosY += iHeight + iFontHeight;
	
	if (bHasDurability || bHasPropertyDurability) {
		@PrintInWidth(iHeight, c_strTooltipFont, iDrawPosX + 16, iDrawPosY, c_iTooltipMapObjectWidth - 2 * 16, strDurabilityText, c_iTooltipInvObjectColR, c_iTooltipInvObjectColG ,c_iTooltipInvObjectColB, fAlpha);
		iDrawPosY += iHeight;
	}	
	
	if (bHasUses || bHasPropertyUses) {
		@PrintInWidth(iHeight, c_strTooltipFont, iDrawPosX + 16, iDrawPosY, c_iTooltipMapObjectWidth - 2 * 16, strUsesText, c_iTooltipInvObjectColR, c_iTooltipInvObjectColG ,c_iTooltipInvObjectColB, fAlpha);
		iDrawPosY += iHeight;
	}	

	if (bCombination) {
		@PrintInWidth(iHeight, c_strTooltipFont, iDrawPosX + 16, iDrawPosY, c_iTooltipMapObjectWidth - 2 * 16, strCText, c_iTooltipInvObjectColR, c_iTooltipInvObjectColG ,c_iTooltipInvObjectColB, fAlpha);
		iDrawPosY += iHeight;
	}
	
	@PrintInWidth(iHeight, c_strTooltipFont, iDrawPosX + 16, iDrawPosY, c_iTooltipMapObjectWidth - 2 * 16, strTooltipText, c_iTooltipInvObjectColR, c_iTooltipInvObjectColG ,c_iTooltipInvObjectColB, fAlpha);
	iDrawPosY += iHeight;
	
}

void DrawTradeTooltip(int cursorx, int cursory, object item, bool bSell, float fAlpha)
{
	if (!item)
		return;
		
	object salesman;
	@GetContainer(salesman);
	
	// day
	float fTime;
	@GetGameTime(fTime);
	int iDay = 1 + fTime / 24;
	
	
	int iItemID = GetItemID(item);
	int iPrice = GetItemPriceWithDurability(item, GetTradeType());
	
	float fFactor;
	if (bSell) {
		fFactor = GetTradeSellFactor(salesman, iDay, GetTradeType());
	}
	else {
		fFactor = GetTradeBuyFactor(salesman, iDay, GetTradeType());
	}
	
	iPrice *= fFactor;
	
	string strText;
	bool bHasProperty;
	@HasInvItemProperty(bHasProperty, iItemID, "Description");
	if (bHasProperty) {
		int iID;
		@GetInvItemProperty(iID, iItemID, "Description");
		@GetStringByID(strText, iID);
	}
	else 
		strText = "Error: Item doesnt have description (FIXME!)";
		
	strText += "\n";
	string strPrice;
	@GetStringByID(strPrice, c_iTextID_Price);
	strText += strPrice + ": " + iPrice;
	
	int iHeight;
	@GetTextHeightInWidth(iHeight, c_strTooltipFont, c_iTooltipInvObjectWidth - 2 * 16, strText);	
	
	iHeight += 16 + 218 + 16 + 16;
	
	// durability	
	string strDurabilityText;
	bool bHasPropertyDurability;
	@HasInvItemProperty(bHasPropertyDurability, iItemID, "HasDurability");
	
	bool bHasDurability;
	item->HasProperty(bHasDurability, "durability");
	if (bHasDurability || bHasPropertyDurability) {
		int iDurability;
		if (bHasDurability)
			item->GetProperty(iDurability, "durability");
		else
			iDurability = 100;
			
		@GetStringByID(strDurabilityText, c_iTooltipDurabilityTextID);	
		strDurabilityText += " " + iDurability + "%";
		int iH;
		@GetTextHeightInWidth(iH, c_strTooltipFont, c_iTooltipInvObjectWidth - 2 * 16, strDurabilityText);
		iHeight += iH;
	}
	
	// uses
	string strUsesText;
	bool bHasPropertyUses;
	@HasInvItemProperty(bHasPropertyUses, iItemID, "HasUses");

	bool bHasUses;
	item->HasProperty(bHasUses, "uses");
	if (bHasUses || bHasPropertyUses) {
		int iUses;
		if (bHasUses)
			item->GetProperty(iUses, "uses");
		else
			iUses = 1;
			
		@GetStringByID(strUsesText, c_iTooltipUsesTextID);	
		strUsesText += " " + iUses;
		int iH;
		@GetTextHeightInWidth(iH, c_strTooltipFont, c_iTooltipInvObjectWidth - 2 * 16, strUsesText);
		iHeight += iH;
	}	
	
	// grass combination
	string strCText;
	bool bCombination = false;
	if (GetItemName(item) == "grass_combination") {
		bCombination = true;
		float fImInc, fHlInc, fTrInc;
		item->GetProperty(fImInc, "im_inc");
		item->GetProperty(fHlInc, "hl_inc");
		
		string strImText, strTrText, strHlText;
		@GetStringByID(strImText, c_iTooltipImmunityIncTextID);	
		@GetStringByID(strHlText, c_iTooltipHealthIncTextID);	
		
		int iVal;
		iVal = fImInc * 100;
		strCText = strImText + " " + iVal + "%\n";
		iVal = fHlInc * 100;
		strCText += strHlText + " " + iVal + "%\n";
		
		int iH;
		@GetTextHeightInWidth(iH, c_strTooltipFont, c_iTooltipInvObjectWidth - 2 * 16, strCText);
		iHeight += iH;		
	}	
	else 
	if (GetItemName(item) == "organ_combination") {
		bCombination = true;
		float fDiseaseRate, fHealthIncrease;
		
		item->GetProperty(fDiseaseRate, "DiseaseRate");
		item->GetProperty(fHealthIncrease, "HealthIncrease");
		
		string strDiseaseRateText, strHealthIncreaseText;
		@GetStringByID(strDiseaseRateText, c_iTooltipDiseaseRateTextID);	
		@GetStringByID(strHealthIncreaseText, c_iTooltipHealthIncreaseTextID);	
		
		int iVal;
		iVal = fDiseaseRate * 100;
		strCText = strDiseaseRateText + " " + iVal + "%\n";
		iVal = fHealthIncrease * 100;
		strCText += strHealthIncreaseText + " " + iVal + "%\n";
		
		int iH;
		@GetTextHeightInWidth(iH, c_strTooltipFont, c_iTooltipInvObjectWidth - 2 * 16, strCText);
		iHeight += iH;		
	}		
	
	int xs, ys;
	@GetScreenSize(xs, ys);
	
	int iDrawPosX, iDrawPosY;
	if (xs - cursorx > c_iTooltipInvObjectWidth) {
		iDrawPosX = cursorx;
	}
	else {
		iDrawPosX = cursorx - c_iTooltipInvObjectWidth;
	}
	
	if (cursory > iHeight) {
		iDrawPosY = cursory - iHeight;
	}
	else {
		iDrawPosY = cursory;
		if (iDrawPosY + iHeight > c_iScreenHeight)
			iDrawPosY = c_iScreenHeight - iHeight;
	}
	
	@ScreenToClient(iDrawPosX, iDrawPosY);
	
	DrawTooltipBorder(iDrawPosX, iDrawPosY, c_iTooltipInvObjectWidth, iHeight, fAlpha);
	DrawTooltipInventoryObjectImage(iDrawPosX + 16, iDrawPosY + 16, item, fAlpha);
	
	iDrawPosY += 16 + 218 + 16;
	@PrintInWidth(iHeight, c_strTooltipFont, iDrawPosX + 16, iDrawPosY, c_iTooltipInvObjectWidth - 16* 2, strText, c_iTooltipInvObjectColR, c_iTooltipInvObjectColG ,c_iTooltipInvObjectColB, fAlpha);
	iDrawPosY += iHeight;
	
	if (bHasDurability || bHasPropertyDurability) {
		@PrintInWidth(iHeight, c_strTooltipFont, iDrawPosX + 16, iDrawPosY, c_iTooltipMapObjectWidth - 2 * 16, strDurabilityText, c_iTooltipInvObjectColR, c_iTooltipInvObjectColG ,c_iTooltipInvObjectColB, fAlpha);
		iDrawPosY += iHeight;
	}	
	
	if (bHasUses || bHasPropertyUses) {
		@PrintInWidth(iHeight, c_strTooltipFont, iDrawPosX + 16, iDrawPosY, c_iTooltipMapObjectWidth - 2 * 16, strUsesText, c_iTooltipInvObjectColR, c_iTooltipInvObjectColG ,c_iTooltipInvObjectColB, fAlpha);
		iDrawPosY += iHeight;
	}	
	
	if (bCombination) {
		@PrintInWidth(iHeight, c_strTooltipFont, iDrawPosX + 16, iDrawPosY, c_iTooltipMapObjectWidth - 2 * 16, strCText, c_iTooltipInvObjectColR, c_iTooltipInvObjectColG ,c_iTooltipInvObjectColB, fAlpha);
		iDrawPosY += iHeight;
	}	
}

void DrawMapMarkObjectTooltip(int cursorx, int cursory, object marks, float fAlpha)
{
	if (!marks)
		return;
		
	fAlpha = 1;
		
	int iSize;
	marks->size(iSize);
	
	if (!iSize)
		return;
		
	object mark;
	string strText, str;
	int iTextID;
	
	while (iSize) {
		int iMaxIndex = 0;
		float fMaxTime = 0;
		for (int i = 0; i < iSize; ++i) {
			marks->get(mark, i);
			float fTime;
			mark->GetTime(fTime);
			if (fTime > fMaxTime) { 
				fMaxTime = fTime;
				iMaxIndex = i;
			}
		}
		
		marks->get(mark, iMaxIndex);
		mark->GetTextID(iTextID);
		@GetStringByID(str, iTextID);
		float fTime;
		mark->GetTime(fTime);
		int hour = (int)fTime;
		int min = 60 * (fTime - hour);
		if (min < 10)
			strText += (hour % 24) + ":0" + min + " ";
		else
			strText += (hour % 24) + ":" + min + " ";
		strText += str;
		marks->remove(iMaxIndex);
		iSize--;
		if (iSize) 
			strText += "\n\n";
	}
	
	
	int iHeight;
	@GetTextHeightInWidth(iHeight, c_strTooltipFont, c_iTooltipMapMarkObjectWidth - 2 * 16, strText);	
	
	iHeight += 16 + 16;
	
	int xs, ys;
	@GetScreenSize(xs, ys);
	
	int iDrawPosX, iDrawPosY;
	if (xs - cursorx > c_iTooltipMapMarkObjectWidth) {
		iDrawPosX = cursorx;
	}
	else {
		iDrawPosX = cursorx - c_iTooltipMapMarkObjectWidth;
	}
	
	if (cursory > iHeight) {
		iDrawPosY = cursory - iHeight;
	}
	else {
		iDrawPosY = cursory;
		if (iDrawPosY + iHeight > c_iScreenHeight)
			iDrawPosY = c_iScreenHeight - iHeight;
	}
	
	@ScreenToClient(iDrawPosX, iDrawPosY);
	
	DrawTooltipBorder(iDrawPosX, iDrawPosY, c_iTooltipMapMarkObjectWidth, iHeight, fAlpha);
	
	@PrintInWidth(iHeight, c_strTooltipFont, iDrawPosX + 16, iDrawPosY + 16, c_iTooltipMapMarkObjectWidth - 16 * 2, strText, c_iTooltipMapMarkObjectColR, c_iTooltipMapMarkObjectColG ,c_iTooltipMapMarkObjectColB, fAlpha);	
}

void DrawMapObjectTooltip(int cursorx, int cursory, string strText, object obj, float fAlpha)
{
	fAlpha = 1;
	
	int iHeight;
	@GetTextHeightInWidth(iHeight, c_strTooltipFont, c_iTooltipMapObjectWidth - 2 * 16, strText);	
	iHeight += 16 + 16;
	
	int xs, ys;
	@GetScreenSize(xs, ys);
	
	int iDrawPosX, iDrawPosY;
	if (xs - cursorx > c_iTooltipMapObjectWidth) {
		iDrawPosX = cursorx;
	}
	else {
		iDrawPosX = cursorx - c_iTooltipMapObjectWidth;
	}
	
	if (cursory > iHeight) {
		iDrawPosY = cursory - iHeight;
	}
	else {
		iDrawPosY = cursory;
		if (iDrawPosY + iHeight > c_iScreenHeight)
			iDrawPosY = c_iScreenHeight - iHeight;
	}
	
	@ScreenToClient(iDrawPosX, iDrawPosY);
	
	DrawTooltipBorder(iDrawPosX, iDrawPosY, c_iTooltipMapObjectWidth, iHeight, fAlpha);
	
	@PrintInWidth(iHeight, c_strTooltipFont, iDrawPosX + 16,  iDrawPosY + 16, c_iTooltipMapObjectWidth - 2 * 16, strText, c_iTooltipMapMarkObjectColR, c_iTooltipMapMarkObjectColG ,c_iTooltipMapMarkObjectColB, fAlpha);	
}
