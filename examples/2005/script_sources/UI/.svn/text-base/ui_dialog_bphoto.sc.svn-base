include ui_events.sci

maintask UI_DialogPhoto
{
	var string strPhoto;
	
	void init(void) {
		object conv;
		@GetConversation(conv);
		if (conv == null) {
			@UITrace("null conversation");
			return;
		}
		conv->GetPhoto2(strPhoto);
		@LoadImage(strPhoto);
		@SetOwnerDraw(true);
		@ProcessEvents();
	}
	
	void OnDraw() {
		@StretchBlit(strPhoto, 0, 0, 234, 278);
	}
}	
