include ui_events.sci
include ui_tooltip_base.sci

const float c_fOpaqueTime = 0.5;
const float c_fBlendTime = 0.15;

bool IsSameObjects(object Object1, object Object2) {
	if ((Object1 == null) && (Object2 != null))
		return false;

	if ((Object2 == null) && (Object1 != null))
		return false;
		
	if ((Object1 == null) && (Object2 == null))
		return true;
		
	int id = GetItemID(Object1);
	string strImage1;
	@GetInvItemSprite2(strImage1, id);
	
	id = GetItemID(Object2);
	string strImage2;
	@GetInvItemSprite2(strImage2, id);
	
	return (strImage1 == strImage2);
	
}

maintask UI_Cursor
{
	var object TooltipObject, wndCur;
	var string strTooltipText;
	var int iTooltipType;
	var float m_fTime;
	
	void init(void) {
		@SetOwnerDraw(true);
		@SetNeedUpdate(true);
		@ProcessEvents();
	}
	
	void OnCursorWndChange(object new, object prev) {
		if (new) {
			wndCur = new;
			m_fTime = 0;
			wndCur->GetTooltipType(iTooltipType);
			wndCur->GetTooltipText(strTooltipText);
			wndCur->GetTooltipObject(TooltipObject);
			PrepareTooltip(iTooltipType, strTooltipText, TooltipObject);
		}
		else {
			wndCur = null;
		}
	}
	
	void OnUpdate(float fDeltaTime) {
		if (!wndCur)
			return;
			
		int iType;
		string strText;
		object obj;
		wndCur->GetTooltipType(iType);
		wndCur->GetTooltipText(strText);
		wndCur->GetTooltipObject(obj);
		
		if (!IsSameObjects(obj, TooltipObject) || iType != iTooltipType || strText != strTooltipText) {
			iTooltipType = iType;
			strTooltipText = strText;
			TooltipObject = obj;
			PrepareTooltip(iTooltipType, strTooltipText, TooltipObject);
			m_fTime = 0;
		}
		else
			m_fTime += fDeltaTime;
	}
	
	void OnDraw(void) {
		if (!wndCur)
			return;

		float fAlpha;
		if (m_fTime < c_fOpaqueTime)
			fAlpha = 0;
		else
		if (m_fTime < c_fOpaqueTime + c_fBlendTime) {
			fAlpha = (m_fTime - c_fOpaqueTime) / c_fBlendTime;
		}
		else
			fAlpha = 1;
		
		int x = 0, y = 0;
		@ClientToScreen(x, y);
		DrawTooltip(iTooltipType, strTooltipText, TooltipObject, x, y, fAlpha);
		@Blit("default", 0, 0);
	}
}
