include ui_load_save_base.sci

maintask UI_Save : UI_LoadSaveBase
{
	void init(void) {
		@CaptureKeyboard();
		while (true) {
			super.init(true);
		}
	}
	
	void BlitButtonText(object desc, int x, int y) { 
		if (desc == null) { // empty save slot
			@Blit("button_save", x, y);
		}
		else {
			@Blit("button_overwrite", x, y);
		}
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
