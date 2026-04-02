include ui_events.sci
include ui_tooltip_base.sci

maintask UI_Cursor
{
	void init(void) {
		@SetOwnerDraw(true);
		@ProcessEvents();
	}
	
	void OnDraw(void) {
		object wnd;
		int x = 0, y = 0;
		@ClientToScreen(x, y);
		@FindWindow(wnd, x, y);
		if (!wnd)
			return;
			
		int iTooltipType;
		wnd->GetTooltipType(iTooltipType);
		string strTooltipText;
		wnd->GetTooltipText(strTooltipText);
		object TooltipObject;
		wnd->GetTooltipObject(TooltipObject);
		
		DrawTooltip(iTooltipType, strTooltipText, TooltipObject, x, y, 1);
		
		@Blit("default", 0, 0);
	}
}
