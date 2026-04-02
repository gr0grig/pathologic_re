include ui_std.sci

const int c_iSlotsNum = 4;

maintask UI_ChooseItem
{
	var object items;
	void init(void) {
		@SetCursor("default");
		@SetOwnerDraw(false);
		@SetNeedUpdate(false);
		@CaptureKeyboard();
		@ShowCursor();
		@GetChooseItems(items);
		UpdateWindow();
		
		@ProcessEvents();
	}
	
	void UpdateWindow() 
	{
		int iSize;
		items->size(iSize);
		for (int i = 0; i < iSize; ++i) {
			if (i >= c_iSlotsNum)
				break;
			object item;
			items->get(item, i);
			@SendMessage(0, "cslot0" + (i + 1), item);
		}
		
		for (int i = iSize; i < c_iSlotsNum; ++i) {
			@SendMessage(iSlotEmpty, "cslot0" + (i + 1));
		}
	}
	
	void OnDestroyWindow() {
	}
	
	void OnChar(int wChar)
	{
		@DestroyWindow();
	}	
	
	void OnMessage(int iMessage, string strSender, object data) 
	{
		for (int i = 0; i < c_iSlotsNum; ++i) {
			if (strSender == ("cslot0" + (i + 1))) {
				int iSize;
				items->size(iSize);
				if (i < iSize) {
					object ret;
					@GetReturnValue(ret);
					ret->clear();
					ret->add(i);
					@DestroyWindow();
				}
			}
		}
	}
}
