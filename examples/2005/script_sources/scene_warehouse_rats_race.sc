include std.sci

maintask TWarehouse
{
	var bool c_bManager;
	
	void init(void) {
		c_bManager = false;
		for (;;) {
			@Hold();
		}
	}
	
	void OnLoad(void) {
		if (!c_bManager) {
			float fGameTime;
			@GetGameTime(fGameTime);
			if (fGameTime >= 4 * 24) {
				c_bManager = true;
				SpawnActor(self(), "pt_manager", "pers_doberman", "rats_manager.xml");
			}
		}
	}
}
