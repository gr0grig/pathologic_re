include ui_load_save_base.sci

maintask UI_Load : UI_LoadSaveBase
{
	void init(void) {
		@CaptureKeyboard();
		while (true) {
			super.init(false);
		}
	}
	
	void BlitButtonText(object desc, int x, int y) { 
		@Blit("button_text", x, y);
	}
	
	void OnButtonPress(object desc) {
		@SendMessageToParent(0, desc);
	}
	
	void OnButtonPressDel(object desc) {
		string strGameFile;
		desc->GetFileName(strGameFile);
		@DeleteGame(strGameFile);
		@StopEventProcessing();
	}	
	
	void OnChar(int wChar) {
		@SendMessageToParent(1);
	}
}
