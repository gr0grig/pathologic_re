include ui_events.sci

maintask UI_DialogPhoto
{
	var string strPhoto;
	var object wndPhoto;
	
	void init(void) {
		object conv;
		@GetConversation(conv);
		if (conv == null) {
			@UITrace("null conversation");
			return;
		}
		conv->GetPhoto(strPhoto);
		@LoadImage(strPhoto);
		@SetOwnerDraw(true);
		@ProcessEvents();
	}
	
	void OnDraw() {
		@Blit(strPhoto, 0, 0);
	}
	
	void OnLButtonDown(int x, int y) {
		if (!wndPhoto)
			@CreateWindow("dialog_photo.xml", true, wndPhoto);
		else
			wndPhoto->DestroyWindow();
	}	
}	
